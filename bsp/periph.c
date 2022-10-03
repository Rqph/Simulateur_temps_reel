#ifdef M32C87
	#include "sfr32c87.h"
#endif

#ifdef M32C83
	#include "sfr32c83.h"
#endif


#include <itron.h> 
#include <kernel.h> 
#include "kernel_id.h" 
#include "periph.h"
#include "uart0.h"
#include "dma0.h";



Tperiph periph['z'-'A'];

#define eot 0x0D

void periph_init (void)
{
int i;
	uart0_init();
    dma0_init();
	for (i=0;i<'z'-'A';i++)
		periph[i].maj=periph[i].val=periph[i].ev=0;
		
}

void periph_nom(char * nom){
char c;
int i=0;
	c=*nom;
	do{
		periph_write('I',c);
		dly_tsk(0);
		i++;
		if (i>=64) break;
	}while (c=*(++nom));
	periph_write('I',0);
	dly_tsk(0);
}

int periph_read (unsigned char a,int * val)
{
int i;
/*	addr &= ~0x20;
	addr = addr -'A';
	if (addr>26)
		return 0;
*/	
	if (!periph[ADDR(a)].maj){
		periph_inter(a);
	//	dly_tsk(10);
	}
	if (periph[ADDR(a)].maj) {
		periph[ADDR(a)].maj=0;
		*val = periph[ADDR(a)].val;
		return 1;
	}
	*val = periph[ADDR(a)].val;
	return 0;
}

void periph_write(char addr,int valeur)
{
CanFrame comm; 
	comm.data.id=addr; comm.data.rtr=':'; comm.data.val=valeur;
	snd_dtq (CanTx, (VP_INT) comm.msg);
}

void iperiph_write(char addr,int valeur)
{
CanFrame comm; 
	comm.data.id=addr; comm.data.rtr=':'; comm.data.val=valeur;
	ipsnd_dtq (CanTx, (VP_INT) comm.msg);
}

void periph_inter(char addr)
{
CanFrame comm;
	comm.data.id=addr; comm.data.rtr='?';
	snd_dtq (CanTx,(VP_INT) comm.msg);
}

void iperiph_inter(char addr)
{
CanFrame comm;
	comm.data.id=addr; comm.data.rtr='?';
	ipsnd_dtq (CanTx,(VP_INT) comm.msg);
}

void periph_even(char addr)
{
CanFrame comm;
	comm.data.id=addr; comm.data.rtr='!';
	snd_dtq (CanTx,(VP_INT) comm.msg);	
}

void iperiph_even(char addr)
{
CanFrame comm;
	comm.data.id=addr; comm.data.rtr='!';
	ipsnd_dtq (CanTx,(VP_INT) comm.msg);	
}

static int hex_2_int (char * str)
{
	int i;
	long val;
	val=0;
	for (i=0;i<4;i++)
	{
		val=(val*16);
		val+=(str[i]>='A')?(int) str[i]-'A'+10:(int)str[i]-'0';
	}
	if (val>0x7FFF) val=val-0x10000;
	return val;
}

static void int_2_hex(unsigned int val, char * str)
{
	int i;
	char c;
	
	for (i=3;i>=0;i--)
	{
		c = val & 0x0F;
		c+='0';
		if (c>'9') c+='A'-'9'-1;
		str[i]=c;
		val=val>>4;
	}
}

void periph_rx(VP_INT foo)
{
char c;
unsigned int valeur;
CanFrame msg;

	while (1)
	{
		if (rcv_dtq (CanRx,(VP_INT *) &msg)==E_OK)
		{
			c=msg.data.id;
			//if (c=='!'){
				//set_flg(event,msg.data.val);
			//	continue;
			//}
			if (c<'A' || c>'z')
				continue;	
			c=ADDR(msg.data.id);
		
			if (msg.data.rtr=='!'){
				periph[c].val=1;
				periph[c].maj++;
				if (periph[c].ev)
					set_flg(ev_periph,periph[c].ev);
				continue;
			}

			if ((msg.data.rtr==':')||(msg.data.rtr=='=')){
				periph[c].val=msg.data.val;
				periph[c].maj++;
				if (periph[c].ev)
					set_flg(ev_periph,periph[c].ev);				
				continue;
			}
		}
	}
}

void periph_tx(VP_INT foo)                                     // test emission trame formatee
{
CanFrame rec;
char buf_em[8];
UINT flag;
char valid;

	while(1)
	{
  		if (rcv_dtq (CanTx,(VP_INT *) &rec.msg)==E_OK)
        {
			//buf_em[0]=eot; //0x0A??
			buf_em[0]=rec.data.id;
			valid=0;
			if (rec.data.rtr==':' || rec.data.rtr==0){
				buf_em[1]=':';
				int_2_hex (rec.data.val,&buf_em[2]);
				buf_em[6]=eot; 
				buf_em[7]=0;
				valid=1;
			}
			if (rec.data.rtr=='?' || rec.data.rtr==1){
				buf_em[1]='?';
				buf_em[2]=eot;
				buf_em[3]=0;
				//buf_em[3]=buf_em[4]=buf_em[5]=buf_em[6]='-';
				//buf_em[4]=0;
				valid=1;
			}	
			if (!valid)
				continue;	
						
			uart0_itx(buf_em);						
/*			uart0_str_dma(buf_em);   // declenche transfert
			// Attention le debugger peu prendre la main n'importe quand et bloquer
			// la detection de fin d'envoi de message
			// Le timeout permet de debloquer la situation 

			wai_flg(ev_bus_fin_tr,(FLGPTN) 0x0001,TWF_ANDW,&flag);

			//twai_flg(ev_bus_fin_tr,(FLGPTN) 0x0001,TWF_ANDW,&flag,5);
			//clr_flg( ID_ev_bus_fin_tr,(FLGPTN) 0); 
*/			
			wai_flg(ev_bus_fin_tr,(FLGPTN) 0x0001,TWF_ANDW,&flag);
        }                                            
	}
}

void simulateur_use(void){
#ifdef SIMUL	
	ta0mr |= 0x04;
#endif
}


