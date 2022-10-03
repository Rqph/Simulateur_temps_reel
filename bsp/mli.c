// fonction de gestion MLI
#include "sfr32c87.h"

void mli_init(void)
{
	tb2mr = 0x40;			// TB2 en mode timer avec horloge f8
	tb2 = 24999;			// periode de 10 ms	
	ta1mr = 0x52;			// TA1 en mode monocoup avec horloge f8 et declenchement par debordement de TB2
	ta1 = 3249;				// reglage temps etat haut de 1300 ns
	ta2mr = 0x52;			// TA2 en mode monocoup avec horloge f8 et declenchement par debordement de TB2
	ta2 = 3249;				// reglage temps etat haut de 1300 ns
	trgsr = 0x05;
	ta1ic = 0x00;			// RAZ drapeau et aucune interruption
	ta2ic = 0;
	tb2ic = 0;
	psl1_2 = 1;				// configure P72/TA1OUT en sortie timer A1
	ps1_2 = 1;
	psc_4 = 0;				// configure P74/TA2OUT en sortie timer A2
	psl1_4 = 0;
	ps1_4 = 1;
//	tabsr = 0x86;			// demarre timer B2, A2 et A1
	tb2s=1;
	ta1s=1;
	ta2s=1;
}

void mli_voie_1(unsigned short rc)
{
	if (rc > 4999) rc = 4999;	// bornage rapport cyclique maxi
	if (rc < 1999) rc = 1999;	// bornage rapport cyclique mini
	ta1 = rc;	
}

void mli_voie_2(unsigned short rc)
{
	if (rc > 4999) rc = 4999;	// bornage rapport cyclique maxi
	if (rc < 1999) rc = 1999;	// bornage rapport cyclique mini
	ta2 = rc;
}		