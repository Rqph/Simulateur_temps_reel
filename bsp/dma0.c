// subroutines for control DMA0

#ifdef M32C87
	#include "sfr32c87.h"
#endif

#ifdef M32C83
	#include "sfr32c83.h"
#endif

#include <itron.h> 
#include <kernel.h> 
#include "kernel_id.h" 
#include "dma0.h"

unsigned char dma0_fin_tr;

void dma0_init(void)
{
    dmd0 = 0x00;            //invalide canaux 0&1 DMA
	dm0ic = 0x05;			// valide interruption dma canal 0
    dm0sl = 0x8E;           // transfert sur interruption emission uart0
    dsa0 = &u0tb;           // adresse destination
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
    //dmd0 = 0x09;            // canal 0 actif en mode monocoup avec mot code sur 8 bits	
}

/*

// declaration variable

void initdma0(void)
{
    dmd0 = 0x00;            //invalide canaux 0&1 DMA
    dm0sl = 0x8E;           // transfert sur interruption emission uart0
//    dma0 = &buf_em[1];      // adresse source
    dsa0 = &u0tb;           // adresse destination
    dct0 = 0x00;            // taille buffer - 1
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
    dmd0 = 0x09;            // canal 0 actif en mode monocoup avec mot code sur 8 bits
}            
*/

void uart0_dma0_tr_OK(void)
{
	s0tic=3; // Autorise les interruptions Uart pour detecter la fin de l'envoi du dernier caractere
	//s0tic&=~0x08; // Effacer la demande d'int uart0
	// Pour eviter un risque de prise en compte anticipé
	// Les interruption DMA0 et 
	dma0_fin_tr=1;
	//iset_flg(ev_bus_fin_tr,(UINT) 1);
}

void uart0_str_dma0 (char str[])
{
	dmd0 = 0x00;                                // initialise nouveau transfert
	dct0 = strlen(str)-1;
	dma0 = &str[1];
	dm0sl = 0x8e;
	dsa0 = &u0tb;           // adresse destination
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
    asm (" nop ");
	dmd0 = 0x09;
	s0tic=0; 		// Arret par securité des int uart0 tx
	dm0ic=7;	
	dma0_fin_tr=0; // Utile pour eviter des collision de message lors de la prise 
				   // du processeur par le debugger			   
	u0tb = str[0];   
}

void uart0_dma0_itx()
{
	if (dma0_fin_tr){
		iset_flg(ev_bus_fin_tr,(UINT) 1);
		dma0_fin_tr=0;
	}
	s0tic=0; // Interruption bloqués jusqu'a la fin d'un transfert dma
}