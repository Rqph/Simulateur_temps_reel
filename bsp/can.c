// subroutines for control ADC0 in one shot mode with sweep on channels 0 & 1

#ifdef M32C87
	#include "sfr32c87.h"
#endif

#ifdef M32C83
	#include "sfr32c83.h"
#endif

#if M32C87
// Carte M32C87 Cust GE
void can_init(void)
{
     pd0 = 0xE0;             		// pd10 (bit 7,6,5) configured for outputs
     pu00 = 0;                		// no pull up for inputs p0_3..p0_0
     ad0con0 = 0x18;           		// one shot sweep mode 0 Fad=Fosc/4
     ad0con1 = 0x28;           		// Vref connected resolution 10 bits
     ad0con2 = 0x05;           		// CAN connected on port 0 sample&hold active
	 ad0con3 = 0x00;				// no sweep mode on severals ports
	 ad0con4 = 0x00;				// no use for severals ports
	 adst_ad0con0 = 1;				// Run conversion
}
#endif

#ifdef M32C83
// Carte M32C83 LP
void can_init(void)
{
    pd10 = 0x00;                        //conversion sur voie 0 et 1 port 10 
    pur3 = 0x00;                        //pas de resistance de tirage
    ad0con2 = 0x01;                     //echantillonneur bloqueur actif
    ad0con1 = 0x38;                     //Vref connecte mode 10 bits
    ad0con0 = 0x18;                     //Fad/3 declenchement logiciel en mode balayage continu
    adst_ad0con0 = 1;                   //depart conversion
}
#endif