// subroutines for control uart0 in interrupt mode for sending and receiving

#ifdef M32C87
	#include "sfr32c87.h"
#endif

#ifdef M32C83
	#include "sfr32c83.h"
#endif

#include <string.h>
#include <itron.h>
#include <kernel.h>
#include "kernel_id.h"
#include "dma0.h"
#include "uart0.h"
#include "periph.h"

#define rx_buff_len 8
char rx_buff[rx_buff_len];
extern unsigned char dma0_fin_tr;

void uart0_init(void)
{
     u0mr = 0x05;              // transfert 8 bits 1 bit de stop sans parite
     u0c0 = 0x10;              // f1 selectionnee pas de CTS/RTS
     u0c1 = 0x05;              // emission et reception validees
								// Fbaud = Fquartz / 16  /(n+1)
								// n=(20 000 000 / Fbaud /16)-1
#ifdef M32C83
// Carte M32C83 Lp
     u0brg = 32000000/16/115200;
#endif
#ifdef M32C87
// Carte M32C87 Cust
	 u0brg = 20000000/16/115200;
#endif

     s0tic = 0x00;             // aucune interruption en emission drapeau=0
     pd6_2 =0;              // broche RXD0 (P62) en entrée
     pd6_3 =1;              // broche TXD0 (P63) en sortie
     ps0_2 =0;              // ps0_2 = 0
     ps0_3 =1;              // ps0_3 = 1
	 s0ric = 0x04;
}

char uart0_tx(char c)
{
     	while(!ti_u0c1);  //wait for free transmit register
     	return u0tbl = c;       //send character
}



void uart0_str(char str[])
{
	while (uart0_tx(*str++));
}

void uart0_irx()
{
static int n=0;
char c;
static CanFrame rx;


	c=u0rb;

	switch (n){
		case 0:
				if ((c>='A' && c<'Z') || (c>='a' && c<='z') || (c=='!')){
					rx.data.id=c;
					n=1;
					break;
				}
				n=0;
			break;
		case 1:
				if ((c=='=')||(c==':')){
					rx.data.rtr=c;
					n=2;
					break;
				}
				n=0;
			break;
		case 2:
		case 3:
		case 4:
		case 5:
				if(c>='0' && c<='9') {
					rx.data.val=(rx.data.val<<4)|(c-'0');
					n++;
					break;
				}
				c&=~32;
				if (c>='A' || c<='F') {
					rx.data.val=(rx.data.val<<4)|(10+(c-'A'));
					n++;
					break;
				}
				n=0;
			break;
		case 6:
			if (c==0x0D || c==0x0A){
				if (rx.data.id=='!'){
					iset_flg(event,rx.data.val);
				}else{
					ipsnd_dtq (CanRx,(VP_INT) rx.msg);
				}
				rx.data.id=rx.data.rtr=rx.data.val=0;
				n=0;
				break;
			}
			n=0;
			break;
		default:
			n=0;
			break;
	}
}

char * ptx=NULL;

void uart0_itx(char str[])
{
	s0tic=3;
	ptx=str;
	u0tbl=*ptx++;
}

void uart0_itx_ok(void)
{
	if (*ptx)
	{
		u0tbl=*ptx++;
	}
	else
	{
		iset_flg(ev_bus_fin_tr,(UINT) 1);
	}
}


