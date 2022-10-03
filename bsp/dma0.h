// Header for DMA0 control

// declaration registre interne CPU
unsigned short dmd0;
#pragma DMAC dmd0 DMD0      // DMA mode register channel 0 and 1
unsigned short dct0;
#pragma DMAC dct0 DCT0      // DMA transfert count regsiter channel 0
unsigned short drc0;
#pragma DMAC drc0 DRC0      // DMA transfert count reload register channel 0
void _far *dma0;
#pragma DMAC dma0 DMA0      // DMA memory address register channel 0
void _far *dsa0;
#pragma DMAC dsa0 DSA0      // DMA sfr address register channel 0
void _far *dra0;
#pragma DMAC dra0 DRA0      // DMA memory address reload register channel 0

unsigned short dct1;
#pragma DMAC dct1 DCT1      // DMA transfert count regsiter channel 1
unsigned short drc1;
#pragma DMAC drc1 DRC1      // DMA transfert count reload register channel 1
void _far *dma1;
#pragma DMAC dma1 DMA1      // DMA memory address register channel 1
void _far *dsa1;
#pragma DMAC dsa1 DSA1      // DMA sfr address register channel 1
void _far *dra1;
#pragma DMAC dra1 DRA1      // DMA memory address reload register channel 1

// declaration prototype fonctions
void dma0_init(void);
void uart0_str_dma0 (char str[]);
void uart0_dma0_itx();
