
void ports_mcu()
{
	prcr = 0x03;
	mcd = 0x12;				// pas de division horloge CPU
	prcr = 0x00;
	pd1=0xFF;
//	dacon=3;
	ps3_3=0;
	ps3_4=0;
	psl3_3=1;
	psl3_4=1;
}