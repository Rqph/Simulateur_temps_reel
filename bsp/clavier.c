// subroutines for control the matriced keyboard

#ifdef M32C87
	#include "sfr32c87.h"
#endif

#ifdef M32C83
	#include "sfr32c83.h"
#endif

#include <itron.h> 
#include <kernel.h> 
#include <kernel_api.h>
#include "kernel_id.h" 

#ifdef M32C87
void clavier_init(int int_level)
{
     pd10= 0x0F;              // bit7 to bit4 input      bit3 to bit0 output   for port 10
	 p10= 0xF0;
     pu31 = 1;                 // pull up enable for pins P10_7 to P10_4
     kupic = int_level;        // set key interrupt level
}

unsigned char clavier_scan(void)
{
	unsigned char touche; 
	static unsigned char ltouche;
	const unsigned char t_scan[4]={~(1<<0),~(1<<1),~(1<<2),~(1<<3)};
	static int col=0;
		
		p10=t_scan[col++];
		col&=0x03;
			
    	touche = p10;			// lecture code binaire clavier
		switch(touche)					//determine et affiche numero touche appuyee
     	   {
     	   	case 0xBE: 
				 touche = '1';
     	   	     break;
     	   	case 0xDE: 
     	   	     touche = '2';
     	   	     break;
     	   	case 0x7E: 
     	   	     touche = '3';
                 break;
            case 0xBD: 
                 touche = '4';
                 break;
            case 0xDD: 
                 touche = '5';
     	   	     break;
     	   	case 0x7D: 
     	   	     touche = '6';
                 break;
            case 0xEB: 
     	   	     touche = '7';
                 break;
     	   	case 0xDB: 
     	   	     touche = '8';
     	   	     break;
     	   	case 0x7B: 
     	   	     touche = '9';
                 break;
            case 0xE7: 
                 touche = '*';
     	   	     break;
     	   	case 0xD7: 
     	   	     touche = '0';
     	   	     break;
     	   	case 0x77: 
     	   	     touche = '#';
                 break;
            default : touche = 0;
                 break;
		   }	 
		return( touche );		 
}

int touche_filter(void)
{
SYSTIM time;
static SYSTIM ltime;
SYSTIM dtime;

	iget_tim(&time);
	
	dtime.utime=time.utime-ltime.utime;	
	
	if (time.ltime<ltime.ltime)
		dtime.utime--;
		
	dtime.ltime=time.ltime-ltime.ltime;
	
	ltime.utime=time.utime;
	ltime.ltime=time.ltime;
		
	if (dtime.utime>0)
		return 1;
	else if (dtime.ltime>100)
		return 1;
		
	return 0;
}

void itouche(void )
{
	char t;
#ifndef SIMUL	
	if (t=clavier_scan()){ 
		if (touche_filter())
			vipsnd_dtq(QdmTouche,t);
	}
	p10=0xF0;
#else
	t=p10;
	vipsnd_dtq(QdmTouche,t);
#endif			
}

#endif

#ifdef M32C83

// Clavier M32C83 Carte Lp

void clavier_init(int level)
{
    pd4 &= 0x0F;        //p44->P47 inputs   p40 -> p44 outputs
    pd5 = 0xFF;         //port 5 outputs
    p5 = 0xFD;
}



unsigned char clavier_scan(void)
{
    unsigned int code;
    unsigned int row;
    unsigned int colum;
    static unsigned char table[] = {0x7F,0xBF,0xEF,0xF7,0xFB,0xFD};
	static int i=0;

    p5 = colum = table[i];    
    i++;
    if(i==6) i=0;

    row = p4 & 0xF0;
    code = (colum << 8) | row;

    switch(code)
    {
        case(0x7F70) : return('/');
                    break;
        case(0xBF70) : return('*');
                    break;
        case(0xEF70) : return('F');
                    break;
        case(0xF770) : return('E');
                    break;
        case(0xFB70) : return('D');
                    break;
        case(0xFD70) : return('C');
                    break;
        case(0x7FB0) : return('X');
                    break;
        case(0xBFB0) : return('#');
                    break;
        case(0xEFB0) : return('B');
                    break;
        case(0xF7B0) : return('A');
                    break;
        case(0xFBB0) : return('9');
                    break;
        case(0xFDB0) : return('8');
                    break;
        case(0x7FD0) : return('-');
                    break;
        case(0xBFD0) : return('.');
                    break;
        case(0xEFD0) : return('7');
                    break;
        case(0xF7D0) : return('6');
                    break;
        case(0xFBD0) : return('5');
                    break;
        case(0xFDD0) : return('4');
                    break;
        case(0x7FE0) : return('+');
                    break;
        case(0xBFE0) : return('=');
                    break;
        case(0xEFE0) : return('3');
                    break;
        case(0xF7E0) : return('2');
                    break;
        case(0xFBE0) : return('1');
                    break;
        case(0xFDE0) : return('0');
                    break;
        default : return(0);  // Si aucune touche renvoi 0 plus facile a tester
                    break;
    }
}

void itouche(void) // Dummy fonction compatibility with Polytech Card
{}

#endif