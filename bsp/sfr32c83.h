/************************************************************************
*                                                                       *
*   file name   : definition of M32C/80's SFR                           *
*                                                                       *
*   Copyright, 2003 RENESAS TECHNOLOGY CORPORATION                      *
*                   AND RENESAS SOLUTIONS CORPORATION                   *
*                                                                       *
*   Version     : 1.01  ( 2002-06-28)                                   *
*                 1.02  ( 2002-07-09)                                   *
*                 1.03  ( 2002-09-19)                                   *
*                   change:                                             *
*                       delete same symbol name                         *
*                 1.04  ( 2003-10-15)                                   *
*                   change:                                             *
*                           pu32        pur3_addr.bit.b1                *
*                            -> pu32        pur3_addr.bit.b2            *
*                           pu33        pur3_addr.bit.b1                *
*                            -> pu33        pur3_addr.bit.b3            *
*                           pu34        pur3_addr.bit.b1                *
*                            -> pu34        pur3_addr.bit.b4            *
*                           pu35        pur3_addr.bit.b1                *
*                            -> pu35        pur3_addr.bit.b5            *
*                           pu36        pur3_addr.bit.b1                *
*                            -> pu36        pur3_addr.bit.b6            *
*                           pu37        pur3_addr.bit.b1                *
*                            -> pu37        pur3_addr.bit.b7            *
*                           pu42        pur4_addr.bit.b1                *
*                            -> pu42        pur4_addr.bit.b2            *
*                           pu43        pur4_addr.bit.b1                *
*                            -> pu43        pur4_addr.bit.b3            *
*                                                                       *
*************************************************************************/
/*
  note:
    This data is a freeware that SFR for M32C/80 groups is described.
    Renesas Technology Corporation and Renesas Solutions Corporation
    assumes no responsibility for any damage that occurred by this data. 
*/

/************************************************************************
*   declare SFR address                                                 *
************************************************************************/
#pragma ADDRESS     pm0_addr	0004H       /* Processor mode register 0 */
#pragma ADDRESS     pm1_addr	0005H       /* Processor mode register 1 */
#pragma ADDRESS     cm0_addr	0006H       /* System clock control register 0 */
#pragma ADDRESS     cm1_addr	0007H       /* System clock control register 1 */
#pragma ADDRESS     wcr_addr	0008H       /* Wait control register */
#pragma ADDRESS     aier_addr	0009H       /* Address match interrupt enable register */
#pragma ADDRESS     prcr_addr	000aH       /* Protect register */
#pragma ADDRESS     ds_addr		000bH       /* External data bus width control register */
#pragma ADDRESS     mcd_addr	000cH       /* Main clock division register */
#pragma ADDRESS     cm2_addr	000dH       /* Oscillation stop detect register */
#pragma ADDRESS     wdts_addr	000eH       /* Watchdog timer start register */
#pragma ADDRESS     wdc_addr	000fH       /* Watchdog timer control register */
#pragma ADDRESS     rmad0_addr	0010H       /* Address match interrupt register 0 */
#pragma ADDRESS     rmad1_addr	0014H       /* Address match interrupt register 1 */
#pragma ADDRESS     plv_addr	0017H       /* PLL VDC control register */
#pragma ADDRESS     rmad2_addr	0018H       /* Address match interrupt register 2 */
#pragma ADDRESS     vdc0_addr	001bH       /* VDC control register 0 */
#pragma ADDRESS     rmad3_addr	001cH       /* Address match interrupt register 3 */
#pragma ADDRESS		vdc1_addr	001fH		/* VDC control register 1 */
#pragma ADDRESS		eiad_addr	0020H		/* Emulator Exclusive Use Interrupt Register */
#pragma ADDRESS		eitd_addr	0023H		/* Emulator Exclusive Use Interrupt Distinction Register*/
#pragma ADDRESS		eprr_addr	0024H		/* Emulator Exclusive Use Protect Register*/
#pragma ADDRESS		emu_addr	0025H		/* Emulator Setting Register*/
#pragma ADDRESS		roa_addr	0030H		/* ROM Area Setting Register*/
#pragma ADDRESS		dba_addr	0031H		/* Debugging Monitor Setting Register*/
#pragma ADDRESS		exa0_addr	0032H		/* Expansion Area Setting Register 0*/
#pragma ADDRESS		exa1_addr	0033H		/* Expansion Area Setting Register 1*/
#pragma ADDRESS		exa2_addr	0034H		/* Expansion Area Setting Register 2*/
#pragma ADDRESS		exa3_addr	0035H		/* Expansion Area Setting Register 3*/
#pragma ADDRESS     dramcont_addr    0040H  /* DRAM control register */
#pragma ADDRESS     refcnt_addr	0041H       /* DRAM refresh interval set register */
#pragma ADDRESS		fmr2_addr	0055H		/* Flash Memory Control Register 2*/
#pragma ADDRESS		fmr1_addr	0056H		/* Flash Memory Control Register 2*/
#pragma ADDRESS     fmr0_addr	0057H       /* Flash memory control register 0 */
#pragma ADDRESS     dm0ic_addr	0068H       /* DMA0 interrupt control register */
#pragma ADDRESS     tb5ic_addr  0069H       /* Timer B5 interrupt register */
#pragma ADDRESS     dm2ic_addr  006aH       /* DMA2 interrupt register */
#pragma ADDRESS     s2ric_addr  006bH       /* UART2 receive/ack interrupt control register */
#pragma ADDRESS     ta0ic_addr  006cH       /* Timer A0 interrupt control register */
#pragma ADDRESS     s3ric_addr  006dH       /* UART3 receive/ack interrupt control register */
#pragma ADDRESS     ta2ic_addr  006eH       /* Timer A2 interrupt control register */
#pragma ADDRESS     s4ric_addr  006fH       /* UART4 receive/ack interrupt control register */
#pragma ADDRESS     ta4ic_addr  0070H       /* Timer A4 interrupt control register */
#pragma ADDRESS     bcn3ic_addr 0071H       /* Bus collision (UART3) interrupt control register */
#pragma ADDRESS		bcn0ic_addr 0071H		/* Bus collision (UART0) interrupt control register */
#pragma ADDRESS     s0ric_addr  0072H       /* UART0 receive interrupt control register */
#pragma ADDRESS     ad0ic_addr  0073H       /* A/D0 conversion interrupt control register */
#pragma ADDRESS     s1ric_addr  0074H       /* UART1 receive interrupt control register */
#pragma ADDRESS     iio0ic_addr 0075H       /* Intelligent I/O interrupt control register 0 */
#pragma ADDRESS     tb1ic_addr  0076H       /* Timer B1 interrupt control register */
#pragma ADDRESS     iio2ic_addr 0077H       /* Intelligent I/O interrupt control register 2 */
#pragma ADDRESS     tb3ic_addr  0078H       /* Timer B3 interrupt control register */
#pragma ADDRESS     iio4ic_addr 0079H       /* Intelligent I/O interrupt control register 4 */
#pragma ADDRESS     int5ic_addr 007aH       /* INT5~ interrupt control register */
#pragma ADDRESS     iio6ic_addr 007bH       /* Intelligent I/O interrupt control register 6 */
#pragma ADDRESS     int3ic_addr 007cH       /* INT3~ interrupt control register */
#pragma ADDRESS     iio8ic_addr 007dH       /* Intelligent I/O interrupt control register 8 */
#pragma ADDRESS     int1ic_addr 007eH       /* INT1~ interrupt control register */
#pragma ADDRESS     iio10ic_addr 007fH      /* Intelligent I/O interrupt control register 10 */
#pragma ADDRESS		can1ic_addr 007fH		/* CAN1 Interrupt Control Register*/
#pragma ADDRESS     iio11ic_addr 0081H      /* Intelligent I/O interrupt control register 11 */
#pragma ADDRESS		can2ic_addr 0081H		/* CAN2 Interrupt Control Register*/
#pragma ADDRESS     ad1ic_addr  0086H       /* A/D1 conversion interrupt control register */
#pragma ADDRESS     dm1ic_addr  0088H       /* DMA1 interrupt control register */
#pragma ADDRESS     s2tic_addr  0089H       /* UART2 transmit/nack interrupt control register */
#pragma ADDRESS     dm3ic_addr  008aH       /* DMA3 interrupt control register */
#pragma ADDRESS     s3tic_addr  008bH       /* UART3 transmit/nack interrupt control register */
#pragma ADDRESS     ta1ic_addr  008cH       /* Timer A1 interrupt control register */
#pragma ADDRESS     s4tic_addr  008dH       /* UART4 transmit/nack interrupt control register */
#pragma ADDRESS     ta3ic_addr  008eH       /* Timer A3 interrupt control register */
#pragma ADDRESS     bcn2ic_addr 008fH       /* Bus collision (UART2) interrupt control register */
#pragma ADDRESS     s0tic_addr  0090H       /* UART0 transmit interrupt control register */
#pragma ADDRESS     bcn4ic_addr 0091H       /* Bus collision (UART4) interrupt control register */
#pragma ADDRESS		bcn1ic_addr 0091H		/* Bus collision (UART1) interrupt control register*/
#pragma ADDRESS     s1tic_addr  0092H       /* UART1 transmit interrupt control register */
#pragma ADDRESS     kupic_addr  0093H       /* Key input interrupt control register */
#pragma ADDRESS     tb0ic_addr  0094H       /* Timer B0 interrupt control register */
#pragma ADDRESS     iio1ic_addr 0095H       /* Intelligent I/O interrupt control register 1 */
#pragma ADDRESS     tb2ic_addr  0096H       /* Timer B2 interrupt control register */
#pragma ADDRESS     iio3ic_addr 0097H       /* Intelligent I/O interrupt control register 3 */
#pragma ADDRESS     tb4ic_addr  0098H       /* Timer B4 interrupt control register */
#pragma ADDRESS     iio5ic_addr 0099H       /* Intelligent I/O interrupt control register 5 */
#pragma ADDRESS     int4ic_addr 009aH       /* INT4~ interrupt control register */
#pragma ADDRESS     iio7ic_addr 009bH       /* Intelligent I/O interrupt control register 7 */
#pragma ADDRESS     int2ic_addr 009cH       /* INT2~ interrupt control register */
#pragma ADDRESS     iio9ic_addr 009dH       /* Intelligent I/O interrupt control register 9 */
#pragma ADDRESS		can0ic_addr 009dH		/* CAN0 Interrupt Control Register*/
#pragma ADDRESS     int0ic_addr 009eH       /* INT0~ interrupt control register */
#pragma ADDRESS     rlvl_addr   009fH       /* Exit priority register */
#pragma ADDRESS     iio0ir_addr 00a0H       /* Interrupt request register 0 */
#pragma ADDRESS     iio1ir_addr 00a1H       /* Interrupt request register 1 */
#pragma ADDRESS     iio2ir_addr 00a2H       /* Interrupt request register 2 */
#pragma ADDRESS     iio3ir_addr 00a3H       /* Interrupt request register 3 */
#pragma ADDRESS     iio4ir_addr 00a4H       /* Interrupt request register 4 */
#pragma ADDRESS     iio5ir_addr 00a5H       /* Interrupt request register 5 */
#pragma ADDRESS     iio6ir_addr 00a6H       /* Interrupt request register 6 */
#pragma ADDRESS     iio7ir_addr 00a7H       /* Interrupt request register 7 */
#pragma ADDRESS     iio8ir_addr 00a8H       /* Interrupt request register 8 */
#pragma ADDRESS     iio9ir_addr 00a9H       /* Interrupt request register 9 */
#pragma ADDRESS     iio10ir_addr 00aaH      /* Interrupt request register 10 */
#pragma ADDRESS     iio11ir_addr 00abH      /* Interrupt request register 11 */
#pragma ADDRESS     iio0ie_addr 00b0H       /* Interrupt enable register 0 */
#pragma ADDRESS     iio1ie_addr 00b1H       /* Interrupt enable register 1 */
#pragma ADDRESS     iio2ie_addr 00b2H       /* Interrupt enable register 2 */
#pragma ADDRESS     iio3ie_addr 00b3H       /* Interrupt enable register 3 */
#pragma ADDRESS     iio4ie_addr 00b4H       /* Interrupt enable register 4 */
#pragma ADDRESS     iio5ie_addr 00b5H       /* Interrupt enable register 5 */
#pragma ADDRESS     iio6ie_addr 00b6H       /* Interrupt enable register 6 */
#pragma ADDRESS     iio7ie_addr 00b7H       /* Interrupt enable register 7 */
#pragma ADDRESS     iio8ie_addr 00b8H       /* Interrupt enable register 8 */
#pragma ADDRESS     iio9ie_addr 00b9H       /* Interrupt enable register 9 */
#pragma ADDRESS     iio10ie_addr 00baH      /* Interrupt enable register 10 */
#pragma ADDRESS     iio11ie_addr 00bbH      /* Interrupt enable register 11 */
#pragma ADDRESS     g0tm0_addr  00c0H       /* Group 0 time measurement register 0 */
#pragma ADDRESS     g0tm1_addr  00c2H       /* Group 0 time measurement register 1 */
#pragma ADDRESS     g0tm2_addr  00c4H       /* Group 0 time measurement register 2 */
#pragma ADDRESS     g0tm3_addr  00c6H       /* Group 0 time measurement register 3 */
#pragma ADDRESS     g0tm4_addr  00c8H       /* Group 0 time measurement register 4 */
#pragma ADDRESS     g0tm5_addr  00caH       /* Group 0 time measurement register 5 */
#pragma ADDRESS     g0tm6_addr  00ccH       /* Group 0 time measurement register 6 */
#pragma ADDRESS     g0tm7_addr  00ceH       /* Group 0 time measurement register 7 */
#pragma ADDRESS     g0po0_addr  00c0H       /* Group 0 waveform generate register 0 */
#pragma ADDRESS     g0po1_addr  00c2H       /* Group 0 waveform generate register 1 */
#pragma ADDRESS     g0po2_addr  00c4H       /* Group 0 waveform generate register 2 */
#pragma ADDRESS     g0po3_addr  00c6H       /* Group 0 waveform generate register 3 */
#pragma ADDRESS     g0po4_addr  00c8H       /* Group 0 waveform generate register 4 */
#pragma ADDRESS     g0po5_addr  00caH       /* Group 0 waveform generate register 5 */
#pragma ADDRESS     g0po6_addr  00ccH       /* Group 0 waveform generate register 6 */
#pragma ADDRESS     g0po7_addr  00ceH       /* Group 0 waveform generate register 7 */
#pragma ADDRESS     g0pocr0_addr 00d0H      /* Group 0 pulse output control register0 */
#pragma ADDRESS     g0pocr1_addr 00d1H      /* Group 0 pulse output control register1 */
#pragma ADDRESS     g0pocr2_addr 00d2H      /* Group 0 pulse output control register2 */
#pragma ADDRESS     g0pocr3_addr 00d3H      /* Group 0 pulse output control register3 */
#pragma ADDRESS     g0pocr4_addr 00d4H      /* Group 0 pulse output control register4 */
#pragma ADDRESS     g0pocr5_addr 00d5H      /* Group 0 pulse output control register5 */
#pragma ADDRESS     g0pocr6_addr 00d6H      /* Group 0 pulse output control register6 */
#pragma ADDRESS     g0pocr7_addr 00d7H      /* Group 0 pulse output control register7 */
#pragma ADDRESS     g0tmcr0_addr 00d8H      /* Group 0 time measuring control register0 */
#pragma ADDRESS     g0tmcr1_addr 00d9H      /* Group 0 time measuring control register1 */
#pragma ADDRESS     g0tmcr2_addr 00daH      /* Group 0 time measuring control register2 */
#pragma ADDRESS     g0tmcr3_addr 00dbH      /* Group 0 time measuring control register3 */
#pragma ADDRESS     g0tmcr4_addr 00dcH      /* Group 0 time measuring control register4 */
#pragma ADDRESS     g0tmcr5_addr 00ddH      /* Group 0 time measuring control register5 */
#pragma ADDRESS     g0tmcr6_addr 00deH      /* Group 0 time measuring control register6 */
#pragma ADDRESS     g0tmcr7_addr 00dfH      /* Group 0 time measuring control register7 */
#pragma ADDRESS     g0bt_addr   00e0H       /* Group 0 base timer register */
#pragma ADDRESS     g0bcr0_addr 00e2H       /* Group 0 base timer control register0 */
#pragma ADDRESS     g0bcr1_addr 00e3H       /* Group 0 base timer control register1 */
#pragma ADDRESS     g0tpr6_addr 00e4H       /* Group 0 priscale reload register6 */
#pragma ADDRESS     g0tpr7_addr 00e5H       /* Group 0 priscale reload register7 */
#pragma ADDRESS     g0fe_addr   00e6H       /* Group 0 function enable register */
#pragma ADDRESS     g0fs_addr   00e7H       /* Group 0 function select register */
#pragma ADDRESS     g0rb_addr   00e8H       /* Group 0 SI/O receive buffer register */
#pragma ADDRESS     g0tb_addr   00eaH       /* Group 0 SI/O transmitting buffer register */
#pragma ADDRESS     g0dr_addr   00eaH       /* Group 0 receive data register */
#pragma ADDRESS     g0ri_addr   00ecH       /* Group 0 receive input register */
#pragma ADDRESS     g0mr_addr   00edH       /* Group 0 SI/O communication control register */
#pragma ADDRESS     g0to_addr   00eeH       /* Group 0 transmit output register */
#pragma ADDRESS     g0cr_addr   00efH       /* Group 0 SI/O communication control register */
#pragma ADDRESS     g0cmp0_addr 00f0H       /* Group 0 data compare register 0 */
#pragma ADDRESS     g0cmp1_addr 00f1H       /* Group 0 data compare register 1 */
#pragma ADDRESS     g0cmp2_addr 00f2H       /* Group 0 data compare register 2 */
#pragma ADDRESS     g0cmp3_addr 00f3H       /* Group 0 data compare register 3 */
#pragma ADDRESS     g0msk0_addr 00f4H       /* Group 0 data mask register 0 */
#pragma ADDRESS     g0msk1_addr 00f5H       /* Group 0 data mask register 1 */
#pragma ADDRESS     g0rcrc_addr 00f8H       /* Group 0 receive CRC code register */
#pragma ADDRESS     g0tcrc_addr 00faH       /* Group 0 transmit CRC code register */
#pragma ADDRESS     g0emr_addr  00fcH       /* Group 0 SI/O expansion mode register */
#pragma ADDRESS     g0erc_addr  00fdH       /* Group 0 SI/O expansion receive control register */
#pragma ADDRESS     g0irf_addr  00feH       /* Group 0 SI/O special communication interrupt detect register */
#pragma ADDRESS     g0etc_addr  00ffH       /* Group 0 SI/O expansion transmit control register */
#pragma ADDRESS     g1tm0_addr  0100H       /* Group 1 time measurement register 0 */
#pragma ADDRESS		g1po0_addr	0100H		/* Group 1 waveform generate register 0 */
#pragma ADDRESS     g1tm1_addr  0102H       /* Group 1 time measurement register 1 */
#pragma ADDRESS		g1po1_addr	0102H		/* Group 1 waveform generate register 1 */
#pragma ADDRESS     g1tm2_addr  0104H       /* Group 1 time measurement register 2 */
#pragma ADDRESS		g1po2_addr	0104H		/* Group 1 waveform generate register 2 */
#pragma ADDRESS     g1tm3_addr  0106H       /* Group 1 time measurement register 3 */
#pragma ADDRESS		g1po3_addr	0106H		/* Group 1 waveform generate register 3 */
#pragma ADDRESS     g1tm4_addr  0108H       /* Group 1 time measurement register 4 */
#pragma ADDRESS		g1po4_addr	0108H		/* Group 1 waveform generate register 4 */
#pragma ADDRESS     g1tm5_addr  010aH       /* Group 1 time measurement register 5 */
#pragma ADDRESS		g1po5_addr	010aH		/* Group 1 waveform generate register 5 */
#pragma ADDRESS     g1tm6_addr  010cH       /* Group 1 time measurement register 6 */
#pragma ADDRESS		g1po6_addr	010cH		/* Group 1 waveform generate register 6 */
#pragma ADDRESS     g1tm7_addr  010eH       /* Group 1 time measurement register 7 */
#pragma ADDRESS		g1po7_addr	010eH		/* Group 1 waveform generate register 7 */
#pragma ADDRESS     g1pocr0_addr 0110H      /* Group 1 waveform generate control register 0 */
#pragma ADDRESS     g1pocr1_addr 0111H      /* Group 1 waveform generate control register 1 */
#pragma ADDRESS     g1pocr2_addr 0112H      /* Group 1 waveform generate control register 2 */
#pragma ADDRESS     g1pocr3_addr 0113H      /* Group 1 waveform generate control register 3 */
#pragma ADDRESS     g1pocr4_addr 0114H      /* Group 1 waveform generate control register 4 */
#pragma ADDRESS     g1pocr5_addr 0115H      /* Group 1 waveform generate control register 5 */
#pragma ADDRESS     g1pocr6_addr 0116H      /* Group 1 waveform generate control register 6 */
#pragma ADDRESS     g1pocr7_addr 0117H      /* Group 1 waveform generate control register 7 */
#pragma ADDRESS     g1tmcr0_addr 0118H      /* Group 1 time measurement control register 0 */
#pragma ADDRESS     g1tmcr1_addr 0119H      /* Group 1 time measurement control register 1 */
#pragma ADDRESS     g1tmcr2_addr 011aH      /* Group 1 time measurement control register 2 */
#pragma ADDRESS     g1tmcr3_addr 011bH      /* Group 1 time measurement control register 3 */
#pragma ADDRESS     g1tmcr4_addr 011cH      /* Group 1 time measurement control register 4 */
#pragma ADDRESS     g1tmcr5_addr 011dH      /* Group 1 time measurement control register 5 */
#pragma ADDRESS     g1tmcr6_addr 011eH      /* Group 1 time measurement control register 6 */
#pragma ADDRESS     g1tmcr7_addr 011fH      /* Group 1 time measurement control register 7 */
#pragma ADDRESS     g1bt_addr    0120H      /* Group 1 base timer register */
#pragma ADDRESS     g1bcr0_addr  0122H      /* Group 1 base timer control register 0 */
#pragma ADDRESS     g1bcr1_addr  0123H      /* Group 1 base timer control register 1 */
#pragma ADDRESS     g1tpr6_addr  0124H      /* Group 1 time measurement prescaler register 6 */
#pragma ADDRESS     g1tpr7_addr  0125H      /* Group 1 time measurement prescaler register 7 */
#pragma ADDRESS     g1fe_addr    0126H      /* Group 1 function enable register */
#pragma ADDRESS     g1fs_addr    0127H      /* Group 1 function select register */
#pragma ADDRESS     g1rb_addr    0128H      /* Group 1 SI/O communication buffer register */
#pragma ADDRESS     g1tb_addr    012aH      /* Group 1 SI/O transmiting data register */
#pragma ADDRESS     g1dr_addr    012aH      /* Group 1 receive data register */
#pragma ADDRESS     g1ri_addr    012cH      /* Group 1 receive input register */
#pragma ADDRESS     g1mr_addr    012dH      /* Group 1 SI/O communication mode register */
#pragma ADDRESS     g1to_addr    012eH      /* Group 1 transmit output register */
#pragma ADDRESS     g1cr_addr    012fH      /* Group 1 SI/O communication control register */
#pragma ADDRESS     g1cmp0_addr  0130H      /* Group 1 data compare register 0 */
#pragma ADDRESS     g1cmp1_addr  0131H      /* Group 1 data compare register 1 */
#pragma ADDRESS     g1cmp2_addr  0132H      /* Group 1 data compare register 2 */
#pragma ADDRESS     g1cmp3_addr  0133H      /* Group 1 data compare register 3 */
#pragma ADDRESS     g1msk0_addr  0134H      /* Group 1 data mask register 0 */
#pragma ADDRESS     g1msk1_addr  0135H      /* Group 1 data mask register 1 */
#pragma ADDRESS     g1rcrc_addr  0138H      /* Group 1 receive CRC code register */
#pragma ADDRESS     g1tcrc_addr  013aH      /* Group 1 transmit CRC code register */
#pragma ADDRESS     g1emr_addr   013cH      /* Group 1 SI/O expansion mode register */
#pragma ADDRESS     g1erc_addr   013dH      /* Group 1 SI/O expansion receive control register */
#pragma ADDRESS     g1irf_addr   013eH      /* Group 1 SI/O special communication interrupt detect register */
#pragma ADDRESS     g1etc_addr   013fH      /* Group 1 SI/O expansion transmit control register */
#pragma ADDRESS     g2po0_addr   0140H      /* Group 2 waveform generate register 0 */
#pragma ADDRESS     g2po1_addr   0142H      /* Group 2 waveform generate register 1 */
#pragma ADDRESS     g2po2_addr   0144H      /* Group 2 waveform generate register 2 */
#pragma ADDRESS     g2po3_addr   0146H      /* Group 2 waveform generate register 3 */
#pragma ADDRESS     g2po4_addr   0148H      /* Group 2 waveform generate register 4 */
#pragma ADDRESS     g2po5_addr   014aH      /* Group 2 waveform generate register 5 */
#pragma ADDRESS     g2po6_addr   014cH      /* Group 2 waveform generate register 6 */
#pragma ADDRESS     g2po7_addr   014eH      /* Group 2 waveform generate register 7 */
#pragma ADDRESS     g2pocr0_addr 0150H      /* Group 2 waveform generate control register 0 */
#pragma ADDRESS     g2pocr1_addr 0151H      /* Group 2 waveform generate control register 1 */
#pragma ADDRESS     g2pocr2_addr 0152H      /* Group 2 waveform generate control register 2 */
#pragma ADDRESS     g2pocr3_addr 0153H      /* Group 2 waveform generate control register 3 */
#pragma ADDRESS     g2pocr4_addr 0154H      /* Group 2 waveform generate control register 4 */
#pragma ADDRESS     g2pocr5_addr 0155H      /* Group 2 waveform generate control register 5 */
#pragma ADDRESS     g2pocr6_addr 0156H      /* Group 2 waveform generate control register 6 */
#pragma ADDRESS     g2pocr7_addr 0157H      /* Group 2 waveform generate control register 7 */
#pragma ADDRESS     g2bt_addr    0160H      /* Group 2 base timer register */
#pragma ADDRESS     g2bcr0_addr  0162H      /* Group 2 base timer control register 0 */
#pragma ADDRESS     g2bcr1_addr  0163H      /* Group 2 base timer control register 1 */
#pragma ADDRESS     btsr_addr    0164H      /* base timer start register */
#pragma ADDRESS     g2fe_addr    0166H      /* Group 2 function enable register */
#pragma ADDRESS     g2rtp_addr   0167H      /* Group 2 RTP output buffer register */
#pragma ADDRESS     g2mr_addr    016aH      /* Group 2 SI/O communication mode register */
#pragma ADDRESS     g2cr_addr    016bH      /* Group 2 SI/O communication control register */
#pragma ADDRESS     g2tb_addr    016cH      /* Group 2 SI/O transmit buffer register */
#pragma ADDRESS     g2rb_addr    016eH      /* Group 2 SI/O receive buffer register */
#pragma ADDRESS     iear_addr    0170H      /* Group 2 IEBus address register */
#pragma ADDRESS     iecr_addr    0172H      /* Group 2 IEBus control register */
#pragma ADDRESS     ietif_addr   0173H      /* Group 2 IEBus transmit interrupt cause detect register */
#pragma ADDRESS     ierif_addr   0174H      /* Group 2 IEBus receive interrupt cause detect register */
#pragma ADDRESS     ips_addr     0178H      /* Input function select register */
#pragma ADDRESS     g3mr_addr    017aH      /* Group 3 SI/O communication mode register */
#pragma ADDRESS     g3cr_addr    017bH      /* Group 3 SI/O communication control register */
#pragma ADDRESS     g3tb_addr    017cH      /* Group 3 SI/O transmit buffer register */
#pragma ADDRESS     g3rb_addr    017eH      /* Group 3 SI/O receive buffer register */
#pragma ADDRESS     g3po0_addr   0180H      /* Group 3 waveform generate register 0 */
#pragma ADDRESS     g3po1_addr   0182H      /* Group 3 waveform generate register 1 */
#pragma ADDRESS     g3po2_addr   0184H      /* Group 3 waveform generate register 2 */
#pragma ADDRESS     g3po3_addr   0186H      /* Group 3 waveform generate register 3 */
#pragma ADDRESS     g3po4_addr   0188H      /* Group 3 waveform generate register 4 */
#pragma ADDRESS     g3po5_addr   018aH      /* Group 3 waveform generate register 5 */
#pragma ADDRESS     g3po6_addr   018cH      /* Group 3 waveform generate register 6 */
#pragma ADDRESS     g3po7_addr   018eH      /* Group 3 waveform generate register 7 */
#pragma ADDRESS     g3pocr0_addr 0190H      /* Group 3 waveform generate control register 0 */
#pragma ADDRESS     g3pocr1_addr 0191H      /* Group 3 waveform generate control register 1 */
#pragma ADDRESS     g3pocr2_addr 0192H      /* Group 3 waveform generate control register 2 */
#pragma ADDRESS     g3pocr3_addr 0193H      /* Group 3 waveform generate control register 3 */
#pragma ADDRESS     g3pocr4_addr 0194H      /* Group 3 waveform generate control register 4 */
#pragma ADDRESS     g3pocr5_addr 0195H      /* Group 3 waveform generate control register 5 */
#pragma ADDRESS     g3pocr6_addr 0196H      /* Group 3 waveform generate control register 6 */
#pragma ADDRESS     g3pocr7_addr 0197H      /* Group 3 waveform generate control register 7 */
#pragma ADDRESS     g3mk4_addr   0198H      /* Group 3 waveform generate mask register 4 */
#pragma ADDRESS     g3mk5_addr   019aH      /* Group 3 waveform generate mask register 5 */
#pragma ADDRESS     g3mk6_addr   019cH      /* Group 3 waveform generate mask register 6 */
#pragma ADDRESS     g3mk7_addr   019eH      /* Group 3 waveform generate mask register 7 */
#pragma ADDRESS     g3bt_addr    01a0H      /* Group 3 base timer register */
#pragma ADDRESS     g3bcr0_addr  01a2H      /* Group 3 base timer control register 0 */
#pragma ADDRESS     g3bcr1_addr  01a3H      /* Group 3 base timer control register 1 */
#pragma ADDRESS     g3fe_addr    01a6H      /* Group 3 function enable register */
#pragma ADDRESS     g3rtp_addr   01a7H      /* Group 3 RTP output buffer register */
//#pragma ADDRESS		hdlc1_addr	 01abH		/* Group 3 high-speed HDLC Communication Control Register 1 */
#pragma ADDRESS     hdlc_addr    01acH      /* Group 3 high-speed HDLC communication control register */
#pragma ADDRESS     g3flg_addr   01adH      /* Group 3 high-speed HDLC communication register */
#pragma ADDRESS     hcnt_addr    01aeH      /* Group 3 high-speed HDLC transmit counter */
#pragma ADDRESS     hadr0_addr	 01b0H      /* Group 3 high-speed HDLC data compare register 0 */
#pragma ADDRESS     hmsk0_addr	 01b2H      /* Group 3 high-speed HDLC data mask register 0 */
#pragma ADDRESS     hadr1_addr	 01b4H      /* Group 3 high-speed HDLC data compare register 1 */
#pragma ADDRESS     hmsk1_addr	 01b6H      /* Group 3 high-speed HDLC data mask register 1 */
#pragma ADDRESS     hadr2_addr	 01b8H      /* Group 3 high-speed HDLC data compare register 2 */
#pragma ADDRESS     hmsk2_addr	 01baH      /* Group 3 high-speed HDLC data mask register 2 */
#pragma ADDRESS     hadr3_addr	 01bcH      /* Group 3 high-speed HDLC data compare register 3 */
#pragma ADDRESS     hmsk3_addr 	 01beH      /* Group 3 high-speed HDLC data mask register 3 */

#pragma ADDRESS     ad10_addr    01c0H      /* A/D1 register 0 */
#pragma ADDRESS     ad11_addr    01c2H      /* A/D1 register 1 */
#pragma ADDRESS     ad12_addr    01c4H      /* A/D1 register 2 */
#pragma ADDRESS     ad13_addr    01c6H      /* A/D1 register 3 */
#pragma ADDRESS     ad14_addr    01c8H      /* A/D1 register 4 */
#pragma ADDRESS     ad15_addr    01caH      /* A/D1 register 5 */
#pragma ADDRESS     ad16_addr    01ccH      /* A/D1 register 6 */
#pragma ADDRESS     ad17_addr    01ceH      /* A/D1 register 7 */
#pragma ADDRESS     ad1con2_addr 01d4H      /* A/D1 control register 2 */
#pragma ADDRESS     ad1con0_addr 01d6H      /* A/D1 control register 0 */
#pragma ADDRESS     ad1con1_addr 01d7H      /* A/D1 control register 1 */

#pragma ADDRESS		c0slot0_0_addr	01e0H	/* Can0 Messege Slot Buffer0 Data0 */
#pragma ADDRESS		c0slot0_1_addr	01e1H	/* Can0 Messege Slot Buffer0 Data1 */
#pragma ADDRESS		c0slot0_2_addr	01e2H	/* Can0 Messege Slot Buffer0 Data2 */
#pragma ADDRESS		c0slot0_3_addr	01e3H	/* Can0 Messege Slot Buffer0 Data3 */
#pragma ADDRESS		c0slot0_4_addr	01e4H	/* Can0 Messege Slot Buffer0 Data4 */
#pragma ADDRESS		c0slot0_5_addr	01e5H	/* Can0 Messege Slot Buffer0 Data5 */
#pragma ADDRESS		c0slot0_6_addr	01e6H	/* Can0 Messege Slot Buffer0 Data6 */
#pragma ADDRESS		c0slot0_7_addr	01e7H	/* Can0 Messege Slot Buffer0 Data7 */
#pragma ADDRESS		c0slot0_8_addr	01e8H	/* Can0 Messege Slot Buffer0 Data8 */
#pragma ADDRESS		c0slot0_9_addr	01e9H	/* Can0 Messege Slot Buffer0 Data9 */
#pragma ADDRESS		c0slot0_10_addr	01eaH	/* Can0 Messege Slot Buffer0 Data10 */
#pragma ADDRESS		c0slot0_11_addr	01ebH	/* Can0 Messege Slot Buffer0 Data11 */
#pragma ADDRESS		c0slot0_12_addr	01ecH	/* Can0 Messege Slot Buffer0 Data12 */
#pragma ADDRESS		c0slot0_13_addr	01edH	/* Can0 Messege Slot Buffer0 Data13 */
#pragma ADDRESS		c0slot0_14_addr	01eeH	/* Can0 Messege Slot Buffer0 Data14 */
#pragma ADDRESS		c0slot0_15_addr	01efH	/* Can0 Messege Slot Buffer0 Data15 */
#pragma ADDRESS		c0slot1_0_addr	01f0H	/* Can0 Messege Slot Buffer1 Data0 */
#pragma ADDRESS		c0slot1_1_addr	01f1H	/* Can0 Messege Slot Buffer1 Data1 */
#pragma ADDRESS		c0slot1_2_addr	01f2H	/* Can0 Messege Slot Buffer1 Data2 */
#pragma ADDRESS		c0slot1_3_addr	01f3H	/* Can0 Messege Slot Buffer1 Data3 */
#pragma ADDRESS		c0slot1_4_addr	01f4H	/* Can0 Messege Slot Buffer1 Data4 */
#pragma ADDRESS		c0slot1_5_addr	01f5H	/* Can0 Messege Slot Buffer1 Data5 */
#pragma ADDRESS		c0slot1_6_addr	01f6H	/* Can0 Messege Slot Buffer1 Data6 */
#pragma ADDRESS		c0slot1_7_addr	01f7H	/* Can0 Messege Slot Buffer1 Data7 */
#pragma ADDRESS		c0slot1_8_addr	01f8H	/* Can0 Messege Slot Buffer1 Data8 */
#pragma ADDRESS		c0slot1_9_addr	01f9H	/* Can0 Messege Slot Buffer1 Data9 */
#pragma ADDRESS		c0slot1_10_addr	01faH	/* Can0 Messege Slot Buffer1 Data10 */
#pragma ADDRESS		c0slot1_11_addr	01fbH	/* Can0 Messege Slot Buffer1 Data11 */
#pragma ADDRESS		c0slot1_12_addr	01fcH	/* Can0 Messege Slot Buffer1 Data12 */
#pragma ADDRESS		c0slot1_13_addr	01fdH	/* Can0 Messege Slot Buffer1 Data13 */
#pragma ADDRESS		c0slot1_14_addr	01feH	/* Can0 Messege Slot Buffer1 Data14 */
#pragma ADDRESS		c0slot1_15_addr	01ffH	/* Can0 Messege Slot Buffer1 Data15 */
#pragma ADDRESS		c0ctlr0_addr	0200H	/* Can0 Status Register */
#pragma ADDRESS		c0str_addr		0202H	/* Can0 Status Register */
#pragma ADDRESS		c0idr_addr		0204H	/* Can0 Extended ID Register */
#pragma ADDRESS		c0conr_addr		0206H	/* Can0 Configration Register */
#pragma ADDRESS		c0tsr_addr		0208H	/* Can0 Time Stamp Register */
#pragma ADDRESS		c0tec_addr		020aH	/* Can0 Transmit Error Count Register */
#pragma ADDRESS		c0rec_addr		020bH	/* Can0 Receive Error Count Register */
#pragma ADDRESS		c0sistr_addr	020cH	/* Can0 Slot Interrupt Status Register	*/
#pragma ADDRESS		c0simkr_addr	0210H	/* Can0 Slot Interrupt Mask Register */
#pragma ADDRESS		c0eimkr_addr	0214H	/* Can0 Error Interrupt Mask Register */
#pragma ADDRESS		c0eistr_addr	0215H	/* Can0 Error Interrupt Status Register */
#pragma ADDRESS		c0brp_addr		0217H	/* Can0 Baud Rate Prescaler */
#pragma ADDRESS		c0gmr0_addr		0228H	/* Can0 Global Mask Register Standard ID0 */
#pragma ADDRESS		c0gmr1_addr		0229H	/* Can0 Global Mask Register Standard ID1 */
#pragma ADDRESS		c0gmr2_addr		022aH	/* Can0 Global Mask Register Extended ID0 */
#pragma ADDRESS		c0gmr3_addr		022bH	/* Can0 Global Mask Register Extended ID1 */
#pragma ADDRESS		c0gmr4_addr		022cH	/* Can0 Global Mask Register Extended ID2 */
#pragma ADDRESS		c0mctl0_addr	0230H	/* Can0 Messege Slot0 Control Register */
#pragma ADDRESS		c0lmar0_addr	0230H	/* Can0 Local Mask RegisterA Standard ID0 */
#pragma ADDRESS		c0mctl1_addr	0231H	/* Can0 Messege Slot1 Control Register */
#pragma ADDRESS		c0lmar1_addr	0231H	/* Can0 Local Mask RegisterA Standard ID1 */
#pragma ADDRESS		c0mctl2_addr	0232H	/* Can0 Messege Slot2 Control Register */
#pragma ADDRESS		c0lmar2_addr	0232H	/* Can0 Local Mask RegisterA Extended ID0 */
#pragma ADDRESS		c0mctl3_addr	0233H	/* Can0 Messege Slot3 Control Register	*/
#pragma ADDRESS		c0lmar3_addr	0233H	/* Can0 Local Mask RegisterA Extended ID1 */
#pragma ADDRESS		c0mctl4_addr	0234H	/* Can0 Messege Slot4 Control Register	*/
#pragma ADDRESS		c0lmar4_addr	0234H	/* Can0 Local Mask RegisterA Extended ID2 */
#pragma ADDRESS		c0mctl5_addr	0235H	/* Can0 Messege Slot5 Control Register	*/
#pragma ADDRESS		c0mctl6_addr	0236H	/* Can0 Messege Slot6 Control Register	*/
#pragma ADDRESS		c0mctl7_addr	0237H	/* Can0 Messege Slot7 Control Register	*/
#pragma ADDRESS		c0mctl8_addr	0238H	/* Can0 Messege Slot8 Control Register	*/
#pragma ADDRESS		c0lmbr0_addr	0238H	/* Can0 Local Mask RegisterB Standard ID0 */
#pragma ADDRESS		c0mctl9_addr	0239H	/* Can0 Messege Slot9 Control Register	*/
#pragma ADDRESS		c0lmbr1_addr	0239H	/* Can0 Local Mask RegisterB Standard ID1 */
#pragma ADDRESS		c0mctl10_addr	023aH	/* Can0 Messege Slot10 Control Register */
#pragma ADDRESS		c0lmbr2_addr	023aH	/* Can0 Local Mask RegisterB Extended ID2 */
#pragma ADDRESS		c0mctl11_addr	023bH	/* Can0 Messege Slot11 Control Register */
#pragma ADDRESS		c0lmbr3_addr	023bH	/* Can0 Local Mask RegisterB Extended ID3 */
#pragma ADDRESS		c0mctl12_addr	023cH	/* Can0 Messege Slot12 Control Register */
#pragma ADDRESS		c0lmbr4_addr	023cH	/* Can0 Local Mask RegisterB Extended ID4 */
#pragma ADDRESS		c0mctl13_addr	023dH	/* Can0 Messege Slot13 Control Register */
#pragma ADDRESS		c0mctl14_addr	023eH	/* Can0 Messege Slot14 Control Register */
#pragma ADDRESS		c0mctl15_addr	023fH	/* Can0 Messege Slot15 Control Register */
#pragma ADDRESS		c0sbs_addr		0240H	/* Can0 Slot Buffer Select Register */
#pragma ADDRESS		c0ctlr1_addr		0241H	/* Can0 Control Register 1	*/
#pragma ADDRESS		c0slpr_addr		0242H	/* Can0 Clock Stop Control Register */
#pragma ADDRESS		c0afs_addr		0244H	/* Can0 Acceptance Filtering Support Unit */

#pragma ADDRESS     x0r_addr    02c0H       /* X0 register */
#pragma ADDRESS     y0r_addr    02c0H       /* Y0 register */
#pragma ADDRESS     x1r_addr    02c2H       /* X1 register */
#pragma ADDRESS     y1r_addr    02c2H       /* Y1 register */
#pragma ADDRESS     x2r_addr    02c4H       /* X2 register */
#pragma ADDRESS     y2r_addr    02c4H       /* Y2 register */
#pragma ADDRESS     x3r_addr    02c6H       /* X3 register */
#pragma ADDRESS     y3r_addr    02c6H       /* Y3 register */
#pragma ADDRESS     x4r_addr    02c8H       /* X4 register */
#pragma ADDRESS     y4r_addr    02c8H       /* Y4 register */
#pragma ADDRESS     x5r_addr    02caH       /* X5 register */
#pragma ADDRESS     y5r_addr    02caH       /* Y5 register */
#pragma ADDRESS     x6r_addr    02ccH       /* X6 register */
#pragma ADDRESS     y6r_addr    02ccH       /* Y6 register */
#pragma ADDRESS     x7r_addr    02ceH       /* X7 register */
#pragma ADDRESS     y7r_addr    02ceH       /* Y7 register */
#pragma ADDRESS     x8r_addr    02d0H       /* X8 register */
#pragma ADDRESS     y8r_addr    02d0H       /* Y8 register */
#pragma ADDRESS     x9r_addr    02d2H       /* X9 register */
#pragma ADDRESS     y9r_addr    02d2H       /* Y9 register */
#pragma ADDRESS     x10r_addr   02d4H       /* X10 register */
#pragma ADDRESS     y10r_addr   02d4H       /* Y10 register */
#pragma ADDRESS     x11r_addr   02d6H       /* X11 register */
#pragma ADDRESS     y11r_addr   02d6H       /* Y11 register */
#pragma ADDRESS     x12r_addr   02d8H       /* X12 register */
#pragma ADDRESS     y12r_addr   02d8H       /* Y12 register */
#pragma ADDRESS     x13r_addr   02daH       /* X13 register */
#pragma ADDRESS     y13r_addr   02daH       /* Y13 register */
#pragma ADDRESS     x14r_addr   02dcH       /* X14 register */
#pragma ADDRESS     y14r_addr   02dcH       /* Y14 register */
#pragma ADDRESS     x15r_addr   02deH       /* X15 register */
#pragma ADDRESS     y15r_addr   02deH       /* Y15 register */
#pragma ADDRESS     xyc_addr    02e0H       /* X-Y control register */

#pragma ADDRESS     u1smr4_addr 02e4H       /* UART1 special mode register 4 */
#pragma ADDRESS     u1smr3_addr 02e5H       /* UART1 special mode register 3 */
#pragma ADDRESS     u1smr2_addr 02e6H       /* UART1 special mode register 2 */
#pragma ADDRESS     u1smr_addr  02e7H       /* UART1 special mode register */
#pragma ADDRESS     u1mr_addr   02e8H       /* UART1 transmit/receive mode register */
#pragma ADDRESS     u1brg_addr  02e9H       /* UART1 bit rate generator */
#pragma ADDRESS     u1tb_addr   02eaH       /* UART1 transmit buffer register */
#pragma ADDRESS     u1c0_addr   02ecH       /* UART1 transmit/receive control register 0 */
#pragma ADDRESS     u1c1_addr   02edH       /* UART1 transmit/receive control register 1 */
#pragma ADDRESS     u1rb_addr   02eeH       /* UART1 receive buffer register */

#pragma ADDRESS     u4smr4_addr 02f4H       /* UART4 special mode register 4 */
#pragma ADDRESS     u4smr3_addr 02f5H       /* UART4 special mode register 3 */
#pragma ADDRESS     u4smr2_addr 02f6H       /* UART4 special mode register 2 */
#pragma ADDRESS     u4smr_addr  02f7H       /* UART4 special mode register */
#pragma ADDRESS     u4mr_addr   02f8H       /* UART4 transmit/receive mode register */
#pragma ADDRESS     u4brg_addr  02f9H       /* UART4 bit rate generator */
#pragma ADDRESS     u4tb_addr   02faH       /* UART4 transmit buffer register */
#pragma ADDRESS     u4c0_addr   02fcH       /* UART4 transmit/receive control register 0 */
#pragma ADDRESS     u4c1_addr   02fdH       /* UART4 transmit/receive control register 1 */
#pragma ADDRESS     u4rb_addr   02feH       /* UART4 receive buffer register */

#pragma ADDRESS     tbsr_addr   0300H       /* Timer B3,4,5 count start flag */
#pragma ADDRESS     ta11_addr   0302H       /* Timer A1-1 register */
#pragma ADDRESS     ta21_addr   0304H       /* Timer A2-1 register */
#pragma ADDRESS     ta41_addr   0306H       /* Timer A4-1 register */
#pragma ADDRESS     invc0_addr  0308H       /* Three-phase PWM control regester 0 */
#pragma ADDRESS     invc1_addr  0309H       /* Three-phase PWM control register 1 */
#pragma ADDRESS     idb0_addr   030aH       /* Three-phase output buffer register 0 */
#pragma ADDRESS     idb1_addr   030bH       /* Three-phase output buffer register 1 */
#pragma ADDRESS     dtt_addr    030cH       /* Dead time timer */
#pragma ADDRESS     ictb2_addr  030dH       /* Timer B2 interrupt occurences frequency set counter */
#pragma ADDRESS     tb3_addr    0310H       /* Timer B3 register */
#pragma ADDRESS     tb4_addr    0312H       /* Timer B4 register */
#pragma ADDRESS     tb5_addr    0314H       /* Timer B5 register */
#pragma ADDRESS     tb3mr_addr  031bH       /* Timer B3 mode register */
#pragma ADDRESS     tb4mr_addr  031cH       /* Timer B4 mode register */
#pragma ADDRESS     tb5mr_addr  031dH       /* Timer B5 mode register */
#pragma ADDRESS     ifsr_addr   031fH       /* Interrupt cause select register */

#pragma ADDRESS     u3smr4_addr 0324H       /* UART3 special mode register 4 */
#pragma ADDRESS     u3smr3_addr 0325H       /* UART3 special mode register 3 */
#pragma ADDRESS     u3smr2_addr 0326H       /* UART3 special mode register 2 */
#pragma ADDRESS     u3smr_addr  0327H       /* UART3 special mode register */
#pragma ADDRESS     u3mr_addr   0328H       /* UART3 transmit/receive mode register */
#pragma ADDRESS     u3brg_addr  0329H       /* UART3 bit rate generator */
#pragma ADDRESS     u3tb_addr   032aH       /* UART3 transmit buffer register */
#pragma ADDRESS     u3c0_addr   032cH       /* UART3 transmit/receive control register 0 */
#pragma ADDRESS     u3c1_addr   032dH       /* UART3 transmit/receive control register 1 */
#pragma ADDRESS     u3rb_addr   032eH       /* UART3 receive buffer register */
#pragma ADDRESS     u2smr4_addr 0334H       /* UART2 special mode register 4 */ 
#pragma ADDRESS     u2smr3_addr 0335H       /* UART2 special mode register 3 */ 
#pragma ADDRESS     u2smr2_addr 0336H       /* UART2 special mode register 2 */
#pragma ADDRESS     u2smr_addr  0337H       /* UART2 special mode register */
#pragma ADDRESS     u2mr_addr   0338H       /* UART2 transmit/receive mode register */
#pragma ADDRESS     u2brg_addr  0339H       /* UART2 bit rate generator */
#pragma ADDRESS     u2tb_addr   033aH       /* UART2 transmit buffer register */
#pragma ADDRESS     u2c0_addr   033cH       /* UART2 transmit/receive control register 0 */
#pragma ADDRESS     u2c1_addr   033dH       /* UART2 transmit/receive control register 1 */
#pragma ADDRESS     u2rb_addr   033eH       /* UART2 receive buffer register */

#pragma ADDRESS     tabsr_addr  0340H       /* Count start flag */
#pragma ADDRESS     cpsrf_addr  0341H       /* Clock prescaler reset flag */
#pragma ADDRESS     onsf_addr   0342H       /* One-shot start flag */
#pragma ADDRESS     trgsr_addr  0343H       /* Trigger select register */
#pragma ADDRESS     udf_addr    0344H       /* Up/down flag */
#pragma ADDRESS     ta0_addr    0346H       /* Timer A0 register */
#pragma ADDRESS     ta1_addr    0348H       /* Timer A1 register */
#pragma ADDRESS     ta2_addr    034aH       /* Timer A2 register */
#pragma ADDRESS     ta3_addr    034cH       /* Timer A3 register */
#pragma ADDRESS     ta4_addr    034eH       /* Timer A4 register */
#pragma ADDRESS     tb0_addr    0350H       /* Timer B0 register */
#pragma ADDRESS     tb1_addr    0352H       /* Timer B1 register */
#pragma ADDRESS     tb2_addr    0354H       /* Timer B2 register */
#pragma ADDRESS     ta0mr_addr  0356H       /* Timer A0 mode register */
#pragma ADDRESS     ta1mr_addr  0357H       /* Timer A1 mode register */
#pragma ADDRESS     ta2mr_addr  0358H       /* Timer A2 mode register */
#pragma ADDRESS     ta3mr_addr  0359H       /* Timer A3 mode register */
#pragma ADDRESS     ta4mr_addr  035aH       /* Timer A4 mode register */
#pragma ADDRESS     tb0mr_addr  035bH       /* Timer B0 mode register */
#pragma ADDRESS     tb1mr_addr  035cH       /* Timer B1 mode register */
#pragma ADDRESS     tb2mr_addr  035dH       /* Timer B2 mode register */
#pragma ADDRESS     tb2sc_addr  035eH       /* Timer B2 special mode register */
#pragma ADDRESS     tcspr_addr  035fH       /* Count source prescaler register */

#pragma ADDRESS     u0smr4_addr 0364H       /* UART0 special mode register 4 */ 
#pragma ADDRESS     u0smr3_addr 0365H       /* UART0 special mode register 3 */ 
#pragma ADDRESS     u0smr2_addr 0366H       /* UART0 special mode register 2 */
#pragma ADDRESS     u0smr_addr  0367H       /* UART0 special mode register */
#pragma ADDRESS     u0mr_addr   0368H       /* UART0 transmit/receive mode register */
#pragma ADDRESS     u0brg_addr  0369H       /* UART0 bit rate generator */
#pragma ADDRESS     u0tb_addr   036aH       /* UART0 transmit buffer register */
#pragma ADDRESS     u0c0_addr   036cH       /* UART0 transmit/receive control register 0 */
#pragma ADDRESS     u0c1_addr   036dH       /* UART0 transmit/receive control register 1 */
#pragma ADDRESS     u0rb_addr   036eH       /* UART0 receive buffer register */
#pragma ADDRESS     plc0_addr   0376H       /* PLL control register 0 */
#pragma ADDRESS     plc1_addr   0377H       /* PLL control register 1 */
#pragma ADDRESS     dm0sl_addr  0378H       /* DMA0 cause select register */
#pragma ADDRESS     dm1sl_addr  0379H       /* DMA1 cause select register */
#pragma ADDRESS     dm2sl_addr  037aH       /* DMA1 cause select register */
#pragma ADDRESS     dm3sl_addr  037bH       /* DMA1 cause select register */
#pragma ADDRESS     crcd_addr   037cH       /* CRC data register */
#pragma ADDRESS     crcin_addr  037eH       /* CRC input register */
#pragma ADDRESS     ad00_addr   0380H       /* A/D0 register 0 */
#pragma ADDRESS     ad01_addr   0382H       /* A/D0 register 1 */
#pragma ADDRESS     ad02_addr   0384H       /* A/D0 register 2 */
#pragma ADDRESS     ad03_addr   0386H       /* A/D0 register 3 */
#pragma ADDRESS     ad04_addr   0388H       /* A/D0 register 4 */
#pragma ADDRESS     ad05_addr   038aH       /* A/D0 register 5 */
#pragma ADDRESS     ad06_addr   038cH       /* A/D0 register 6 */
#pragma ADDRESS     ad07_addr   038eH       /* A/D0 register 7 */
#pragma ADDRESS     ad0con2_addr 0394H      /* A/D0 control register 2 */
#pragma ADDRESS     ad0con0_addr 0396H      /* A/D0 control register 0 */
#pragma ADDRESS     ad0con1_addr 0397H      /* A/D0 control register 1 */
#pragma ADDRESS     da0_addr    0398H       /* D/A register 0 */
#pragma ADDRESS     da1_addr    039aH       /* D/A register 1 */
#pragma ADDRESS     dacon_addr  039cH       /* D/A control register */

#pragma ADDRESS     ps8_addr    03a0H       /* Function select register A8 */
#pragma ADDRESS     ps9_addr    03a1H       /* Function select register A9 */

#pragma ADDRESS     psc_addr    03afH       /* Function select register C */
#pragma ADDRESS     ps0_addr    03b0H       /* Function select register A0 */
#pragma ADDRESS     ps1_addr    03b1H       /* Function select register A1 */
#pragma ADDRESS     psl0_addr   03b2H       /* Function select register B0 */
#pragma ADDRESS     psl1_addr   03b3H       /* Function select register B1 */
#pragma ADDRESS     ps2_addr    03b4H       /* Function select register A2 */
#pragma ADDRESS     ps3_addr    03b5H       /* Function select register A3 */
#pragma ADDRESS     psl2_addr   03b6H       /* Function select register B2 */
#pragma ADDRESS     psl3_addr   03b7H       /* Function select register B3 */

#pragma ADDRESS     ps5_addr    03b9H       /* Function select register A5 */

#pragma ADDRESS     ps6_addr    03bcH       /* Function select register A6 */
#pragma ADDRESS     ps7_addr    03bdH       /* Function select register A7 */

#pragma ADDRESS     p6_addr     03c0H       /* Port P6 register */
#pragma ADDRESS     p7_addr     03c1H       /* Port P7 register */
#pragma ADDRESS     pd6_addr    03c2H       /* Port P6 direction register */
#pragma ADDRESS     pd7_addr    03c3H       /* Port P7 direction register */
#pragma ADDRESS     p8_addr     03c4H       /* Port P8 register */
#pragma ADDRESS     p9_addr     03c5H       /* Port P9 register */
#pragma ADDRESS     pd8_addr    03c6H       /* Port P8 direction register */
#pragma ADDRESS     pd9_addr    03c7H       /* Port P9 direction register */
#pragma ADDRESS     p10_addr    03c8H       /* Port P10 register */
#pragma ADDRESS     p11_addr    03c9H       /* Port P11 register */
#pragma ADDRESS     pd10_addr   03caH       /* Port P10 direction register */
#pragma ADDRESS     pd11_addr   03cbH       /* Port P11 direction register */
#pragma ADDRESS     p12_addr    03ccH       /* Port P12 register */
#pragma ADDRESS     p13_addr    03cdH       /* Port P13 register */
#pragma ADDRESS     pd12_addr   03ceH       /* Port P12 direction register */
#pragma ADDRESS     pd13_addr   03cfH       /* Port P13 direction register */
#pragma ADDRESS     p14_addr    03d0H       /* Port P14 register */
#pragma ADDRESS     p15_addr    03d1H       /* Port P15 register */
#pragma ADDRESS     pd14_addr   03d2H       /* Port P14 direction register */
#pragma ADDRESS     pd15_addr   03d3H       /* Port P15 direction register */
#pragma ADDRESS     pur2_addr   03daH       /* Pull-up control register 2 */
#pragma ADDRESS     pur3_addr   03dbH       /* Pull-up control register 3 */
#pragma ADDRESS     pur4_addr   03dcH       /* Pull-up control register 4 */
#pragma ADDRESS     p0_addr     03e0H       /* Port P0 register */
#pragma ADDRESS     p1_addr     03e1H       /* Port P1 register */
#pragma ADDRESS     pd0_addr    03e2H       /* Port P0 direction register */
#pragma ADDRESS     pd1_addr    03e3H       /* Port P1 direction register */
#pragma ADDRESS     p2_addr     03e4H       /* Port P2 register */
#pragma ADDRESS     p3_addr     03e5H       /* Port P3 register */
#pragma ADDRESS     pd2_addr    03e6H       /* Port P2 direction register */
#pragma ADDRESS     pd3_addr    03e7H       /* Port P3 direction register */
#pragma ADDRESS     p4_addr     03e8H       /* Port P4 register */
#pragma ADDRESS     p5_addr     03e9H       /* Port P5 register */
#pragma ADDRESS     pd4_addr    03eaH       /* Port P4 direction register */
#pragma ADDRESS     pd5_addr    03ebH       /* Port P5 direction register */
#pragma ADDRESS     pur0_addr   03f0H       /* Pull-up control register 0 */
#pragma ADDRESS     pur1_addr   03f1H       /* Pull-up control register 1 */
#pragma ADDRESS     pcr_addr    03ffH       /* Port control register */
/*******************************************************
*   declare  SFR char                                   *
********************************************************/
unsigned char   da0_addr;               /* D/A register 0 */
#define     da0     da0_addr

unsigned char   da1_addr;               /* D/A register 1 */
#define     da1     da1_addr

/********************************************************
*   declare  SFR short                                  *
********************************************************/
/*---------------------------------------------------------------------
    Timer registers ; Read and write to this register in 16-bit units.
-----------------------------------------------------------------------*/
unsigned short   ta11_addr;             /* Timer A1-1 register */
#define     ta11     ta11_addr

unsigned short   ta21_addr;             /* Timer A2-1 register */
#define     ta21     ta21_addr

unsigned short   ta41_addr;             /* Timer A4-1 register */
#define     ta41     ta41_addr

unsigned short   tb3_addr;              /* Timer B3 register */
#define     tb3     tb3_addr

unsigned short   tb4_addr;              /* Timer B4 register */
#define     tb4     tb4_addr

unsigned short   tb5_addr;              /* Timer B5 register */
#define     tb5     tb5_addr

unsigned short   ta0_addr;              /* Timer A0 register */
#define     ta0     ta0_addr

unsigned short   ta1_addr;              /* Timer A1 register */
#define     ta1     ta1_addr

unsigned short   ta2_addr;              /* Timer A2 register */
#define     ta2     ta2_addr

unsigned short   ta3_addr;              /* Timer A3 register */
#define     ta3     ta3_addr

unsigned short   ta4_addr;              /* Timer A4 register */
#define     ta4     ta4_addr

unsigned short   tb0_addr;              /* Timer B0 register */
#define     tb0     tb0_addr

unsigned short   tb1_addr;              /* Timer B1 register */
#define     tb1     tb1_addr

unsigned short   tb2_addr;              /* Timer B2 register */
#define     tb2     tb2_addr

/*---------------------------------------------------------------------
    IIO registers ; Read and write to this register in 16-bit units.
-----------------------------------------------------------------------*/
union{
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}g0bt_addr,g1bt_addr,
 g0tm0_addr,g0tm1_addr,g0tm2_addr,g0tm3_addr,g0tm4_addr,g0tm5_addr,g0tm6_addr,g0tm7_addr,
 g1tm0_addr,g1tm1_addr,g1tm2_addr,g1tm3_addr,g1tm4_addr,g1tm5_addr,g1tm6_addr,g1tm7_addr,
 g0po0_addr,g0po1_addr,g0po2_addr,g0po3_addr,g0po4_addr,g0po5_addr,g0po6_addr,g0po7_addr,
 g1po0_addr,g1po1_addr,g1po2_addr,g1po3_addr,g1po4_addr,g1po5_addr,g1po6_addr,g1po7_addr,
 g0tcrc_addr,g1tcrc_addr,g0rcrc_addr,g1rcrc_addr,
 g2bt_addr,
 g2po0_addr,g2po1_addr,g2po2_addr,g2po3_addr,g2po4_addr,g2po5_addr,g2po6_addr,g2po7_addr,
 iear_addr,
 g3bt_addr,
 g3po0_addr,g3po1_addr,g3po2_addr,g3po3_addr,g3po4_addr,g3po5_addr,g3po6_addr,g3po7_addr,
 g3mk4_addr,g3mk5_addr,g3mk6_addr,g3mk7_addr,
 g3tb_addr,g3rb_addr,hcnt_addr,hadr0_addr,hadr1_addr,hadr2_addr,hadr3_addr,
 hmsk0_addr,hmsk1_addr,hmsk2_addr,hmsk3_addr;

/********************************************************
*   group 0 and 1                                       *
********************************************************/
#define     g0bt        g0bt_addr.word      /* Group 0 base timer register */
#define     g0btl       g0bt_addr.byte.low
#define     g0bth       g0bt_addr.byte.high

#define     g1bt        g1bt_addr.word      /* Group 1 base timer register */
#define     g1btl       g1bt_addr.byte.low
#define     g1bth       g1bt_addr.byte.high

#define     g0tm0        g0tm0_addr.word      /* Group 0 time measurement register 0 */
#define     g0tm0l       g0tm0_addr.byte.low
#define     g0tm0h       g0tm0_addr.byte.high

#define     g0tm1        g0tm1_addr.word      /* Group 0 time measurement register 1 */
#define     g0tm1l       g0tm1_addr.byte.low
#define     g0tm1h       g0tm1_addr.byte.high

#define     g0tm2        g0tm2_addr.word      /* Group 0 time measurement register 2 */
#define     g0tm2l       g0tm2_addr.byte.low
#define     g0tm2h       g0tm2_addr.byte.high

#define     g0tm3        g0tm3_addr.word      /* Group 0 time measurement register 3 */
#define     g0tm3l       g0tm3_addr.byte.low
#define     g0tm3h       g0tm3_addr.byte.high

#define     g0tm4        g0tm4_addr.word      /* Group 0 time measurement register 4 */
#define     g0tm4l       g0tm4_addr.byte.low
#define     g0tm4h       g0tm4_addr.byte.high

#define     g0tm5        g0tm5_addr.word      /* Group 0 time measurement register 5 */
#define     g0tm5l       g0tm5_addr.byte.low
#define     g0tm5h       g0tm5_addr.byte.high

#define     g0tm6        g0tm6_addr.word      /* Group 0 time measurement register 6 */
#define     g0tm6l       g0tm6_addr.byte.low
#define     g0tm6h       g0tm6_addr.byte.high

#define     g0tm7        g0tm7_addr.word      /* Group 0 time measurement register 7 */
#define     g0tm7l       g0tm7_addr.byte.low
#define     g0tm7h       g0tm7_addr.byte.high

#define     g1tm0        g1tm0_addr.word      /* Group 1 time measurement register 0 */
#define     g1tm0l       g1tm0_addr.byte.low
#define     g1tm0h       g1tm0_addr.byte.high

#define     g1tm1        g1tm1_addr.word      /* Group 1 time measurement register 1 */
#define     g1tm1l       g1tm1_addr.byte.low
#define     g1tm1h       g1tm1_addr.byte.high

#define     g1tm2        g1tm2_addr.word      /* Group 1 time measurement register 2 */
#define     g1tm2l       g1tm2_addr.byte.low
#define     g1tm2h       g1tm2_addr.byte.high

#define     g1tm3        g1tm3_addr.word      /* Group 1 time measurement register 3 */
#define     g1tm3l       g1tm3_addr.byte.low
#define     g1tm3h       g1tm3_addr.byte.high

#define     g1tm4        g1tm4_addr.word      /* Group 1 time measurement register 4 */
#define     g1tm4l       g1tm4_addr.byte.low
#define     g1tm4h       g1tm4_addr.byte.high

#define     g1tm5        g1tm5_addr.word      /* Group 1 time measurement register 5 */
#define     g1tm5l       g1tm5_addr.byte.low
#define     g1tm5h       g1tm5_addr.byte.high

#define     g1tm6        g1tm6_addr.word      /* Group 1 time measurement register 6 */
#define     g1tm6l       g1tm6_addr.byte.low
#define     g1tm6h       g1tm6_addr.byte.high

#define     g1tm7        g1tm7_addr.word      /* Group 1 time measurement register 7 */
#define     g1tm7l       g1tm7_addr.byte.low
#define     g1tm7h       g1tm7_addr.byte.high

#define     g0po0        g0po0_addr.word      /* Group 0 waveform generate register 0 */
#define     g0po0l       g0po0_addr.byte.low
#define     g0po0h       g0po0_addr.byte.high

#define     g0po1        g0po1_addr.word      /* Group 0 waveform generate register 1 */
#define     g0po1l       g0po1_addr.byte.low
#define     g0po1h       g0po1_addr.byte.high

#define     g0po2        g0po2_addr.word      /* Group 0 waveform generate register 2 */
#define     g0po2l       g0po2_addr.byte.low
#define     g0po2h       g0po2_addr.byte.high

#define     g0po3        g0po3_addr.word      /* Group 0 waveform generate register 3 */
#define     g0po3l       g0po3_addr.byte.low
#define     g0po3h       g0po3_addr.byte.high

#define     g0po4        g0po4_addr.word      /* Group 0 waveform generate register 4 */
#define     g0po4l       g0po4_addr.byte.low
#define     g0po4h       g0po4_addr.byte.high

#define     g0po5        g0po5_addr.word      /* Group 0 waveform generate register 5 */
#define     g0po5l       g0po5_addr.byte.low
#define     g0po5h       g0po5_addr.byte.high

#define     g0po6        g0po6_addr.word      /* Group 0 waveform generate register 6 */
#define     g0po6l       g0po6_addr.byte.low
#define     g0po6h       g0po6_addr.byte.high

#define     g0po7        g0po7_addr.word      /* Group 0 waveform generate register 7 */
#define     g0po7l       g0po7_addr.byte.low
#define     g0po7h       g0po7_addr.byte.high

#define     g1po0        g1po0_addr.word      /* Group 1 waveform generate register 0 */
#define     g1po0l       g1po0_addr.byte.low
#define     g1po0h       g1po0_addr.byte.high

#define     g1po1        g1po1_addr.word      /* Group 1 waveform generate register 1 */
#define     g1po1l       g1po1_addr.byte.low
#define     g1po1h       g1po1_addr.byte.high

#define     g1po2        g1po2_addr.word      /* Group 1 waveform generate register 2 */
#define     g1po2l       g1po2_addr.byte.low
#define     g1po2h       g1po2_addr.byte.high

#define     g1po3        g1po3_addr.word      /* Group 1 waveform generate register 3 */
#define     g1po3l       g1po3_addr.byte.low
#define     g1po3h       g1po3_addr.byte.high

#define     g1po4        g1po4_addr.word      /* Group 1 waveform generate register 4 */
#define     g1po4l       g1po4_addr.byte.low
#define     g1po4h       g1po4_addr.byte.high

#define     g1po5        g1po5_addr.word      /* Group 1 waveform generate register 5 */
#define     g1po5l       g1po5_addr.byte.low
#define     g1po5h       g1po5_addr.byte.high

#define     g1po6        g1po6_addr.word      /* Group 1 waveform generate register 6 */
#define     g1po6l       g1po6_addr.byte.low
#define     g1po6h       g1po6_addr.byte.high

#define     g1po7        g1po7_addr.word      /* Group 1 waveform generate register 7 */
#define     g1po7l       g1po7_addr.byte.low
#define     g1po7h       g1po7_addr.byte.high


/*------------------------------------------------------
    SI/O receive buffer register
------------------------------------------------------*/
union{
    struct{
        char    b0:1;
        char    b1:1;
        char    b2:1;
        char    b3:1;
        char    b4:1;
        char    b5:1;
        char    b6:1;
        char    b7:1;
        char    b8:1;
        char    b9:1;
        char    b10:1;
        char    b11:1;
        char    oer:1;              /* Overrun error flag */
        char    fer:1;              /* Framing error flag */
        char    per:1;              /* Parity error flag */
        char    sum:1;              /* Error sum flag */
    }bit;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}g0rb_addr,g1rb_addr;

/*------------------------------------------------------
     g0rb
------------------------------------------------------*/
#define     g0rb        g0rb_addr.word
#define     g0rbl       g0rb_addr.byte.low
#define     g0rbh       g0rb_addr.byte.high

#define     oer_g0rb    g0rb_addr.bit.oer   /* Overrun error flag */
#define     fer_g0rb    g0rb_addr.bit.fer   /* Framing error flag */
//#define     per_g0rb    g0rb_addr.bit.per   /* Parity error flag */
//#define     sum_g0rb    g0rb_addr.bit.sum   /* Error sum flag */

/*------------------------------------------------------
     g1rb
------------------------------------------------------*/
#define     g1rb        g1rb_addr.word
#define     g1rbl       g1rb_addr.byte.low
#define     g1rbh       g1rb_addr.byte.high

#define     oer_g1rb    g1rb_addr.bit.oer   /* Overrun error flag */
#define     fer_g1rb    g1rb_addr.bit.fer   /* Framing error flag */
//#define     per_g1rb    g1rb_addr.bit.per   /* Parity error flag */
//#define     sum_g1rb    g1rb_addr.bit.sum   /* Error sum flag */


#define     g0tcrc        g0tcrc_addr.word      /* Group 0 transmit CRC code register */
#define     g0tcrcl       g0tcrc_addr.byte.low
#define     g0tcrch       g0tcrc_addr.byte.high

#define     g1tcrc        g1tcrc_addr.word      /* Group 1 transmit CRC code register */
#define     g1tcrcl       g1tcrc_addr.byte.low
#define     g1tcrch       g1tcrc_addr.byte.high


#define     g0rcrc        g0rcrc_addr.word      /* Group 0 receive CRC code register */
#define     g0rcrcl       g0rcrc_addr.byte.low
#define     g0rcrch       g0rcrc_addr.byte.high

#define     g1rcrc        g1rcrc_addr.word       /* Group 1 receive CRC code register */
#define     g1rcrcl       g1rcrc_addr.byte.low
#define     g1rcrch       g1rcrc_addr.byte.high

/********************************************************
*   group 2                                             *
********************************************************/

#define     g2bt        g2bt_addr.word      /* Group 2 base timer register */
#define     g2btl       g2bt_addr.byte.low
#define     g2bth       g2bt_addr.byte.high

#define     g2po0        g2po0_addr.word      /* Group 2 waveform generate register 0 */
#define     g2po0l       g2po0_addr.byte.low
#define     g2po0h       g2po0_addr.byte.high

#define     g2po1        g2po1_addr.word      /* Group 2 waveform generate register 1 */
#define     g2po1l       g2po1_addr.byte.low
#define     g2po1h       g2po1_addr.byte.high

#define     g2po2        g2po2_addr.word      /* Group 2 waveform generate register 2 */
#define     g2po2l       g2po2_addr.byte.low
#define     g2po2h       g2po2_addr.byte.high

#define     g2po3        g2po3_addr.word      /* Group 2 waveform generate register 3 */
#define     g2po3l       g2po3_addr.byte.low
#define     g2po3h       g2po3_addr.byte.high

#define     g2po4        g2po4_addr.word      /* Group 2 waveform generate register 4 */
#define     g2po4l       g2po4_addr.byte.low
#define     g2po4h       g2po4_addr.byte.high

#define     g2po5        g2po5_addr.word      /* Group 2 waveform generate register 5 */
#define     g2po5l       g2po5_addr.byte.low
#define     g2po5h       g2po5_addr.byte.high

#define     g2po6        g2po6_addr.word      /* Group 2 waveform generate register 6 */
#define     g2po6l       g2po6_addr.byte.low
#define     g2po6h       g2po6_addr.byte.high

#define     g2po7        g2po7_addr.word      /* Group 2 waveform generate register 7 */
#define     g2po7l       g2po7_addr.byte.low
#define     g2po7h       g2po7_addr.byte.high

/*------------------------------------------------------
     Group 2 SI/O transmit buffer register
------------------------------------------------------*/
union{
    struct{
        char    b0:1;
        char    b1:1;
        char    b2:1;
        char    b3:1;
        char    b4:1;
        char    b5:1;
        char    b6:1;
        char    b7:1;
        char    sz0:1;
        char    sz1:1;
        char    sz2:1;
        char    b11:1;
        char    b12:1;
        char    a:1;
        char    pc:1;
        char    p:1;
    }bit;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}g2tb_addr;

/*------------------------------------------------------
     g2tb
------------------------------------------------------*/
#define     g2tb        g2tb_addr.word
#define     g2tbl       g2tb_addr.byte.low
#define     g2tbh       g2tb_addr.byte.high

#define     sz0_g2tb    g2tb_addr.bit.sz0
#define     sz1_g2tb    g2tb_addr.bit.sz1
#define     sz2_g2tb    g2tb_addr.bit.sz2
#define     a_g2tb      g2tb_addr.bit.a
#define     pc_g2tb     g2tb_addr.bit.pc
#define     p_g2tb      g2tb_addr.bit.p

/*------------------------------------------------------
    Group 2 SI/O receive buffer register
------------------------------------------------------*/
union{
    struct{
        char    b0:1;
        char    b1:1;
        char    b2:1;
        char    b3:1;
        char    b4:1;
        char    b5:1;
        char    b6:1;
        char    b7:1;
        char    b8:1;
        char    b9:1;
        char    b10:1;
        char    b11:1;
        char    oer:1;
        char    b13:1;
        char    b14:1;
        char    b15:1;
    }bit;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}g2rb_addr;

/*------------------------------------------------------
     g2rb
------------------------------------------------------*/
#define     g2rb        g2rb_addr.word
#define     g2rbl       g2rb_addr.byte.low
#define     g2rbh       g2rb_addr.byte.high

#define     oer_g2rb    g2rb_addr.bit.oer

#define     iear        iear_addr.word		 /* Group 2 IEBus address register */
#define     iearl       iear_addr.byte.low
#define     iearh       iear_addr.byte.high


/********************************************************
*   group 3                                             *
********************************************************/

#define     g3bt        g3bt_addr.word      /* Group 3 base timer register */
#define     g3btl       g3bt_addr.byte.low
#define     g3bth       g3bt_addr.byte.high

#define     g3po0        g3po0_addr.word      /* Group 3 waveform generate register 0 */
#define     g3po0l       g3po0_addr.byte.low
#define     g3po0h       g3po0_addr.byte.high

#define     g3po1        g3po1_addr.word      /* Group 3 waveform generate register 1 */
#define     g3po1l       g3po1_addr.byte.low
#define     g3po1h       g3po1_addr.byte.high

#define     g3po2        g3po2_addr.word      /* Group 3 waveform generate register 2 */
#define     g3po2l       g3po2_addr.byte.low
#define     g3po2h       g3po2_addr.byte.high

#define     g3po3        g3po3_addr.word      /* Group 3 waveform generate register 3 */
#define     g3po3l       g3po3_addr.byte.low
#define     g3po3h       g3po3_addr.byte.high

#define     g3po4        g3po4_addr.word      /* Group 3 waveform generate register 4 */
#define     g3po4l       g3po4_addr.byte.low
#define     g3po4h       g3po4_addr.byte.high

#define     g3po5        g3po5_addr.word      /* Group 3 waveform generate register 5 */
#define     g3po5l       g3po5_addr.byte.low
#define     g3po5h       g3po5_addr.byte.high

#define     g3po6        g3po6_addr.word      /* Group 3 waveform generate register 6 */
#define     g3po6l       g3po6_addr.byte.low
#define     g3po6h       g3po6_addr.byte.high

#define     g3po7        g3po7_addr.word      /* Group 3 waveform generate register 7 */
#define     g3po7l       g3po7_addr.byte.low
#define     g3po7h       g3po7_addr.byte.high


#define     g3mk4        g3mk4_addr.word     /* Group 3 waveform generate mask register 4 */
#define     g3mk4l       g3mk4_addr.byte.low
#define     g3mk4h       g3mk4_addr.byte.high

#define     g3mk5        g3mk5_addr.word     /* Group 3 waveform generate mask register 5 */
#define     g3mk5l       g3mk5_addr.byte.low
#define     g3mk5h       g3mk5_addr.byte.high

#define     g3mk6        g3mk6_addr.word     /* Group 3 waveform generate mask register 6 */
#define     g3mk6l       g3mk6_addr.byte.low
#define     g3mk6h       g3mk6_addr.byte.high

#define     g3mk7        g3mk7_addr.word      /* Group 3 waveform generate mask register 7 */
#define     g3mk7l       g3mk7_addr.byte.low
#define     g3mk7h       g3mk7_addr.byte.high


#define     g3tb        g3tb_addr.word      /* Group 3 SI/O transmit buffer register */
#define     g3tbl       g3tb_addr.byte.low
#define     g3tbh       g3tb_addr.byte.high

#define     g3rb        g3rb_addr.word      /* Group 3 SI/O receive buffer register */
#define     g3rbl       g3rb_addr.byte.low
#define     g3rbh       g3rb_addr.byte.high

#define     hcnt        hcnt_addr.word     /* Group 3 high-speed HDLC transmit counter */
#define     hcntl       hcnt_addr.byte.low
#define     hcnth       hcnt_addr.byte.high

#define     hadr0        hadr0_addr.word   /* Group 3 high-speed HDLC data compare register 0 */
#define     hadr0l       hadr0_addr.byte.low
#define     hadr0h       hadr0_addr.byte.high

#define     hadr1        hadr1_addr.word   /* Group 3 high-speed HDLC data compare register 1 */
#define     hadr1l       hadr1_addr.byte.low
#define     hadr1h       hadr1_addr.byte.high

#define     hadr2        hadr2_addr.word   /* Group 3 high-speed HDLC data compare register 2 */
#define     hadr2l       hadr2_addr.byte.low
#define     hadr2h       hadr2_addr.byte.high

#define     hadr3        hadr3_addr.word   /* Group 3 high-speed HDLC data compare register 3 */
#define     hadr3l       hadr3_addr.byte.low
#define     hadr3h       hadr3_addr.byte.high

#define     hmsk0        hmsk0_addr.word   /* Group 3 high-speed HDLC data mask register 0 */
#define     hmsk0l       hmsk0_addr.byte.low
#define     hmsk0h       hmsk0_addr.byte.high

#define     hmsk1        hmsk1_addr.word   /* Group 3 high-speed HDLC data mask register 1 */
#define     hmsk1l       hmsk1_addr.byte.low
#define     hmsk1h       hmsk1_addr.byte.high

#define     hmsk2        hmsk2_addr.word   /* Group 3 high-speed HDLC data mask register 2 */
#define     hmsk2l       hmsk2_addr.byte.low
#define     hmsk2h       hmsk2_addr.byte.high

#define     hmsk3        hmsk3_addr.word   /* Group 3 high-speed HDLC data mask register 3 */
#define     hmsk3l       hmsk3_addr.byte.low
#define     hmsk3h       hmsk3_addr.byte.high


/********************************************************
*   declare SFR bit                                     *
********************************************************/
struct bit_def {
        char    b0:1;
        char    b1:1;
        char    b2:1;
        char    b3:1;
        char    b4:1;
        char    b5:1;
        char    b6:1;
        char    b7:1;
};
union byte_def{
    struct bit_def bit;
    char    byte;
};

/*------------------------------------------------------
    DRAM control register
------------------------------------------------------*/
union byte_def dramcont_addr;
#define     dramcont        dramcont_addr.byte

#define     wt_dramcont      dramcont_addr.bit.b0
#define     ar0_dramcont     dramcont_addr.bit.b1
#define     ar1_dramcont     dramcont_addr.bit.b2
#define     ar2_dramcont     dramcont_addr.bit.b3
#define     sref_dramcont    dramcont_addr.bit.b7

/*------------------------------------------------------
    DRAM refresh interval set register
------------------------------------------------------*/
union byte_def refcnt_addr;
#define     refcnt      refcnt_addr.byte

//#define     refcnt0     refcnt_addr.bit.b0
//#define     refcnt1     refcnt_addr.bit.b1
//#define     refcnt2     refcnt_addr.bit.b2
//#define     refcnt3     refcnt_addr.bit.b3
//#define     refcnt4     refcnt_addr.bit.b4
//#define     refcnt5     refcnt_addr.bit.b5
//#define     refcnt6     refcnt_addr.bit.b6
//#define     refcnt7     refcnt_addr.bit.b7

/*------------------------------------------------------
    Flash Memory Control Register 2
------------------------------------------------------*/
union byte_def fmr2_addr;
#define     fmr2      fmr2_addr.byte

#define     fmr20     fmr2_addr.bit.b0
#define     fmr22     fmr2_addr.bit.b2

/*------------------------------------------------------
    Flash Memory Control Register 1
------------------------------------------------------*/
union byte_def fmr1_addr;
#define     fmr1      fmr1_addr.byte

#define     fmr10     fmr1_addr.bit.b0
#define     fmr11     fmr1_addr.bit.b1
#define     fmr14     fmr1_addr.bit.b4
#define     fmr15     fmr1_addr.bit.b5

/*------------------------------------------------------
    Flash Memory Control Register 0
------------------------------------------------------*/
union byte_def fmr0_addr;
#define     fmr0      fmr0_addr.byte

#define     fmr00     fmr0_addr.bit.b0
#define     fmr01     fmr0_addr.bit.b1
#define     fmr02     fmr0_addr.bit.b2
#define     fmr03     fmr0_addr.bit.b3
//#define     fmr04     fmr0_addr.bit.b4
//#define     fmr05     fmr0_addr.bit.b5
#define     fmr06     fmr0_addr.bit.b6
//#define     fmr07     fmr0_addr.bit.b7

/*------------------------------------------------------
    Processor mode register 0
------------------------------------------------------*/
union byte_def pm0_addr;
#define     pm0     pm0_addr.byte

#define     pm00        pm0_addr.bit.b0     /* Processor mode bit */
#define     pm01        pm0_addr.bit.b1     /* Processor mode bit */
#define     pm02        pm0_addr.bit.b2     /* R/W mode select bit */
#define     pm03        pm0_addr.bit.b3     /* Software reset bit */
#define     pm04        pm0_addr.bit.b4     /* Multiplexed bus space select bit */
#define     pm05        pm0_addr.bit.b5     /* Multiplexed bus space select bit */
//#define     pm06        pm0_addr.bit.b6     /* Reserved bit */
#define     pm07        pm0_addr.bit.b7     /* BCLK output function select bit */

/*------------------------------------------------------
    Processor mode register 1
------------------------------------------------------*/
union byte_def pm1_addr;
#define     pm1     pm1_addr.byte

#define     pm10        pm1_addr.bit.b0     /* External memory area mode bit */
#define     pm11        pm1_addr.bit.b1     /* External memory area mode bit */
#define     pm12        pm1_addr.bit.b2     /* Internal memory wait bit */
#define     pm13        pm1_addr.bit.b3     /* SFR wait bit */
#define     pm14        pm1_addr.bit.b4     /* ALE pin select bit */
#define     pm15        pm1_addr.bit.b5     /* ALE pin select bit */
#define		pm17		pm1_addr.bit.b7		/* Reserved bit */

/*------------------------------------------------------
    System clock control register 0
------------------------------------------------------*/
union byte_def cm0_addr;
#define     cm0     cm0_addr.byte

#define     cm00        cm0_addr.bit.b0     /* Clock output function select bit */
#define     cm01        cm0_addr.bit.b1     /* Clock output function select bit */
#define     cm02        cm0_addr.bit.b2     /* WAIT peripheral function clock stop bit */
#define     cm04        cm0_addr.bit.b4     /* Port Xc select bit */
#define     cm05        cm0_addr.bit.b5     /* Main clock stop bit */
#define     cm06        cm0_addr.bit.b6     /* WDT function select bit */
#define     cm07        cm0_addr.bit.b7     /* System clock select bit (Xin-Xout or Xcin-Xcout)*/

/*------------------------------------------------------
    System clock control register 1
------------------------------------------------------*/
union byte_def cm1_addr;
#define     cm1     cm1_addr.byte

#define     cm10        cm1_addr.bit.b0     /* All clock stop control bit */
//#define     cm15        cm1_addr.bit.b5     /* Xin-Xout drive capacity select bit */
#define		cm17		cm1_addr.bit.b7		/* System clock select bit (Xin-Xout or PLL clock) */

/*------------------------------------------------------
    Oscillation stop detect register
------------------------------------------------------*/
union byte_def cm2_addr;
#define     cm2     cm2_addr.byte

#define     cm20        cm2_addr.bit.b0     
#define     cm21        cm2_addr.bit.b1     
#define     cm22        cm2_addr.bit.b2     
#define     cm23        cm2_addr.bit.b3     
#define     cm24        cm2_addr.bit.b4     
#define     cm25        cm2_addr.bit.b5     
#define     cm26        cm2_addr.bit.b6     
#define     cm27        cm2_addr.bit.b7     

/*------------------------------------------------------
    Wait control register
------------------------------------------------------*/
union byte_def wcr_addr;
#define     wcr     wcr_addr.byte

#define     wcr0        wcr_addr.bit.b0
#define     wcr1        wcr_addr.bit.b1
#define     wcr2        wcr_addr.bit.b2
#define     wcr3        wcr_addr.bit.b3
#define     wcr4        wcr_addr.bit.b4
#define     wcr5        wcr_addr.bit.b5
#define     wcr6        wcr_addr.bit.b6
#define     wcr7        wcr_addr.bit.b7

/*------------------------------------------------------
    Address match interrupt enable register
------------------------------------------------------*/
union byte_def aier_addr;
#define     aier        aier_addr.byte

#define     aier0       aier_addr.bit.b0    /* Address match interrupt 0 enable bit */
#define     aier1       aier_addr.bit.b1    /* Address match interrupt 1 enable bit */
#define     aier2       aier_addr.bit.b2    /* Address match interrupt 2 enable bit */  /*99.08.30*/
#define     aier3       aier_addr.bit.b3    /* Address match interrupt 3 enable bit */  /*99.08.30*/

/*------------------------------------------------------
    X-Y control register
------------------------------------------------------*/
union byte_def xyc_addr;
#define     xyc     xyc_addr.byte

#define     xyc0        xyc_addr.bit.b0
#define     xyc1        xyc_addr.bit.b1

/*------------------------------------------------------
    Protect register
------------------------------------------------------*/
union byte_def prcr_addr;
#define     prcr        prcr_addr.byte

#define     prc0        prcr_addr.bit.b0    /* Enables writing to system clock control register 0 and 1 */
#define     prc1        prcr_addr.bit.b1    /* Enables writing to processor mode register 0 and 1 */
#define     prc2        prcr_addr.bit.b2    /* Enables writing to port P9 direction register and function select register A3 */
#define		prc3		prcr_addr.bit.b3	/* Enables writing VDC control register and PLL VDC control register */

/*------------------------------------------------------
    External data bus width control register
------------------------------------------------------*/
union byte_def ds_addr;
#define     ds      ds_addr.byte

#define     ds0     ds_addr.bit.b0
#define     ds1     ds_addr.bit.b1
#define     ds2     ds_addr.bit.b2
#define     ds3     ds_addr.bit.b3

/*------------------------------------------------------
    Main clock division register
------------------------------------------------------*/
union byte_def mcd_addr;
#define     mcd     mcd_addr.byte

#define     mcd0        mcd_addr.bit.b0
#define     mcd1        mcd_addr.bit.b1
#define     mcd2        mcd_addr.bit.b2
#define     mcd3        mcd_addr.bit.b3
#define     mcd4        mcd_addr.bit.b4

/*------------------------------------------------------
    PLL control register 0
------------------------------------------------------*/
union byte_def plc0_addr;
#define     plc0     plc0_addr.byte

#define     plc00        plc0_addr.bit.b0
#define     plc01        plc0_addr.bit.b1
#define     plc02        plc0_addr.bit.b2
//#define     plc03        plc0_addr.bit.b3
#define     plc04        plc0_addr.bit.b4
#define     plc05        plc0_addr.bit.b5
#define     plc07        plc0_addr.bit.b7

/*------------------------------------------------------
    PLL control register 1
------------------------------------------------------*/
union byte_def plc1_addr;
#define     plc1     plc1_addr.byte

//#define     plc10        plc1_addr.bit.b0
#define     plc11        plc1_addr.bit.b1
//#define     plc12        plc1_addr.bit.b2

/*------------------------------------------------------
   Count source prescaler register
------------------------------------------------------*/
union byte_def tcspr_addr;
#define     tcspr     tcspr_addr.byte

#define     cnt0        tcspr_addr.bit.b0
#define     cnt1        tcspr_addr.bit.b1
#define     cnt2        tcspr_addr.bit.b2
#define     cnt3        tcspr_addr.bit.b3
#define     cst         tcspr_addr.bit.b7

/*------------------------------------------------------
    Exit priority register
------------------------------------------------------*/
union byte_def rlvl_addr;
#define     rlvl        rlvl_addr.byte

#define     rlvl0       rlvl_addr.bit.b0
#define     rlvl1       rlvl_addr.bit.b1
#define     rlvl2       rlvl_addr.bit.b2
#define     fsit        rlvl_addr.bit.b3
#define		dmaii		rlvl_addr.bit.b5

/*------------------------------------------------------
    Interrupt cause select register
------------------------------------------------------*/
union byte_def ifsr_addr;
#define     ifsr        ifsr_addr.byte

#define     ifsr0       ifsr_addr.bit.b0
#define     ifsr1       ifsr_addr.bit.b1
#define     ifsr2       ifsr_addr.bit.b2
#define     ifsr3       ifsr_addr.bit.b3
#define     ifsr4       ifsr_addr.bit.b4
#define     ifsr5       ifsr_addr.bit.b5
#define     ifsr6       ifsr_addr.bit.b6
#define     ifsr7       ifsr_addr.bit.b7

/*------------------------------------------------------
    Timer B2 special mode register
------------------------------------------------------*/
union byte_def tb2sc_addr;
#define     tb2sc     tb2sc_addr.byte

#define     pwcon     tb2sc_addr.bit.b0     

/*------------------------------------------------------
    Watchdog timer start register
------------------------------------------------------*/
union byte_def wdts_addr;
#define     wdts        wdts_addr.byte

/*------------------------------------------------------
    CRC input register
------------------------------------------------------*/
union byte_def crcin_addr;
#define     crcin       crcin_addr.byte

/*------------------------------------------------------
    Watchdog timer control register
------------------------------------------------------*/
union byte_def wdc_addr;
#define     wdc     wdc_addr.byte

//#define		wdc5		wdc_addr.bit.b5
//#define		wdc6		wdc_addr.bit.b6
#define     wdc7        wdc_addr.bit.b7     /* Prescaler select bit */

/*------------------------------------------------------
    PLL VDC control register
------------------------------------------------------*/
union byte_def plv_addr;
#define     plv     plv_addr.byte

#define		plv00		plv_addr.bit.b0		
//#define		plv01		plv_addr.bit.b1

/*------------------------------------------------------
    Count start flag
------------------------------------------------------*/
union byte_def tabsr_addr;
#define     tabsr       tabsr_addr.byte

#define     ta0s        tabsr_addr.bit.b0   /* Timer A0 count start flag */
#define     ta1s        tabsr_addr.bit.b1   /* Timer A1 count start flag */
#define     ta2s        tabsr_addr.bit.b2   /* Timer A2 count start flag */
#define     ta3s        tabsr_addr.bit.b3   /* Timer A3 count start flag */
#define     ta4s        tabsr_addr.bit.b4   /* Timer A4 count start flag */
#define     tb0s        tabsr_addr.bit.b5   /* Timer B0 count start flag */
#define     tb1s        tabsr_addr.bit.b6   /* Timer B1 count start flag */
#define     tb2s        tabsr_addr.bit.b7   /* Timer B2 count start flag */

/*------------------------------------------------------
    Timer B3,4,5 count start flag
------------------------------------------------------*/
union byte_def tbsr_addr;
#define     tbsr        tbsr_addr.byte

#define     tb3s        tbsr_addr.bit.b5    /* Timer B3 count start flag */
#define     tb4s        tbsr_addr.bit.b6    /* Timer B4 count start flag */
#define     tb5s        tbsr_addr.bit.b7    /* Timer B5 count start flag */

/*------------------------------------------------------
    Three-phase PWM control regester 0
------------------------------------------------------*/
union byte_def invc0_addr;
#define     invc0       invc0_addr.byte

#define     inv00       invc0_addr.bit.b0
#define     inv01       invc0_addr.bit.b1
#define     inv02       invc0_addr.bit.b2
#define     inv03       invc0_addr.bit.b3
#define     inv04       invc0_addr.bit.b4
#define     inv05       invc0_addr.bit.b5
#define     inv06       invc0_addr.bit.b6
#define     inv07       invc0_addr.bit.b7

/*------------------------------------------------------
    Three-phase PWM control regester 1
------------------------------------------------------*/
union byte_def invc1_addr;
#define     invc1       invc1_addr.byte

#define     inv10       invc1_addr.bit.b0
#define     inv11       invc1_addr.bit.b1
#define     inv12       invc1_addr.bit.b2
#define     inv13       invc1_addr.bit.b3
#define     inv14       invc1_addr.bit.b4
#define     inv15       invc1_addr.bit.b5
//#define     inv16       invc1_addr.bit.b6
#define     inv17       invc1_addr.bit.b7

/*------------------------------------------------------
    Three-phase output buffer register 0
------------------------------------------------------*/
union byte_def idb0_addr;
#define     idb0        idb0_addr.byte

#define     du0         idb0_addr.bit.b0
#define     dub0        idb0_addr.bit.b1
#define     dv0         idb0_addr.bit.b2
#define     dvb0        idb0_addr.bit.b3
#define     dw0         idb0_addr.bit.b4
#define     dwb0        idb0_addr.bit.b5

/*------------------------------------------------------
    Three-phase output buffer register 1
------------------------------------------------------*/
union byte_def idb1_addr;
#define     idb1        idb1_addr.byte

#define     du1         idb1_addr.bit.b0
#define     dub1        idb1_addr.bit.b1
#define     dv1         idb1_addr.bit.b2
#define     dvb1        idb1_addr.bit.b3
#define     dw1         idb1_addr.bit.b4
#define     dwb1        idb1_addr.bit.b5

/*------------------------------------------------------
     Dead time timer ; Use "MOV" instruction when writing to this register.
------------------------------------------------------*/
union byte_def dtt_addr;
#define     dtt     dtt_addr.byte

/*------------------------------------------------------
    Timer B2 interrupt occurrences frequency set counter ; Use "MOV" instruction when writing to this register.
------------------------------------------------------*/
union byte_def ictb2_addr;
#define     ictb2       ictb2_addr.byte

/*------------------------------------------------------
    One-shot start flag
------------------------------------------------------*/
union byte_def onsf_addr;
#define     onsf        onsf_addr.byte

#define     ta0os       onsf_addr.bit.b0    /* Timer A0 one-shot start flag */
#define     ta1os       onsf_addr.bit.b1    /* Timer A1 one-shot start flag */
#define     ta2os       onsf_addr.bit.b2    /* Timer A2 one-shot start flag */
#define     ta3os       onsf_addr.bit.b3    /* Timer A3 one-shot start flag */
#define     ta4os       onsf_addr.bit.b4    /* Timer A4 one-shot start flag */
#define     tazie       onsf_addr.bit.b5    /* Timer A4 Z-phase input valid bit */
#define     ta0tgl      onsf_addr.bit.b6    /* Timer A0 event/trigger select bit */
#define     ta0tgh      onsf_addr.bit.b7    /* Timer A0 event/trigger select bit */

/*------------------------------------------------------
    Clock prescaler reset flag
------------------------------------------------------*/
union byte_def cpsrf_addr;
#define     cpsrf       cpsrf_addr.byte

#define     cpsr        cpsrf_addr.bit.b7   /* Clock prescaler reset flag */

/*------------------------------------------------------
    Trigger select register
------------------------------------------------------*/
union byte_def trgsr_addr;
#define     trgsr       trgsr_addr.byte

#define     ta1tgl      trgsr_addr.bit.b0   /* Timer A1 event/trigger select bit */
#define     ta1tgh      trgsr_addr.bit.b1   /* Timer A1 event/trigger select bit */
#define     ta2tgl      trgsr_addr.bit.b2   /* Timer A2 event/trigger select bit */
#define     ta2tgh      trgsr_addr.bit.b3   /* Timer A2 event/trigger select bit */
#define     ta3tgl      trgsr_addr.bit.b4   /* Timer A3 event/trigger select bit */
#define     ta3tgh      trgsr_addr.bit.b5   /* Timer A3 event/trigger select bit */
#define     ta4tgl      trgsr_addr.bit.b6   /* Timer A4 event/trigger select bit */
#define     ta4tgh      trgsr_addr.bit.b7   /* Timer A4 event/trigger select bit */

/*------------------------------------------------------
    Up Down Flag
------------------------------------------------------*/
union byte_def   udf_addr;               /* Up/down flag */
#define     udf     udf_addr.byte

#define		ta0ud	udf_addr.bit.b0
#define		ta1ud	udf_addr.bit.b1
#define		ta2ud	udf_addr.bit.b2
#define		ta3ud	udf_addr.bit.b3
#define		ta4ud	udf_addr.bit.b4
#define		ta2p	udf_addr.bit.b5
#define		ta3p	udf_addr.bit.b6
#define		ta4p	udf_addr.bit.b7

/*------------------------------------------------------
    UART0 transmit/receive control register 1
------------------------------------------------------*/
union byte_def u0c1_addr;
#define     u0c1        u0c1_addr.byte
#define     te_u0c1     u0c1_addr.bit.b0    /* Transmit enable bit */
#define     ti_u0c1     u0c1_addr.bit.b1    /* Transmit buffer empty flag */
#define     re_u0c1     u0c1_addr.bit.b2    /* Receive enable bit */
#define     ri_u0c1     u0c1_addr.bit.b3    /* Receive complete flag */
#define     u0irs_u0c1       u0c1_addr.bit.b4    /* UART2 transmit interrupt cause select bit */
#define     u0rrm_u0c1       u0c1_addr.bit.b5    /* UART2 continuous receive mode enable bit */
#define     u0lch_u0c1       u0c1_addr.bit.b6    /* Data logic select bit */
#define     sclkstpb_u0c1 u0c1_addr.bit.b7   /* Clock divide synchronizing stop bit */
#define     u0ere_u0c1       u0c1_addr.bit.b7    /* Error signal output enable bit */

/*------------------------------------------------------
    UART1 transmit/receive control register 1
------------------------------------------------------*/
union byte_def u1c1_addr;
#define     u1c1        u1c1_addr.byte
#define     te_u1c1     u1c1_addr.bit.b0    /* Transmit enable bit */
#define     ti_u1c1     u1c1_addr.bit.b1    /* Transmit buffer empty flag */
#define     re_u1c1     u1c1_addr.bit.b2    /* Receive enable bit */
#define     ri_u1c1     u1c1_addr.bit.b3    /* Receive complete flag */
#define     u1irs_u1c1  u1c1_addr.bit.b4    /* UART2 transmit interrupt cause select bit */
#define     u1rrm_u1c1  u1c1_addr.bit.b5    /* UART2 continuous receive mode enable bit */
#define     u1lch_u1c1  u1c1_addr.bit.b6    /* Data logic select bit */
#define     sclkstpb_u1c1 u1c1_addr.bit.b7    /* Clock divide synchronizing stop bit */
#define     u1ere_u1c1    u1c1_addr.bit.b7    /* Error signal output enable bit */

/*------------------------------------------------------
    UART2 transmit/receive control register 1
------------------------------------------------------*/
union byte_def u2c1_addr;
#define     u2c1        u2c1_addr.byte
#define     te_u2c1     u2c1_addr.bit.b0    /* Transmit enable bit */
#define     ti_u2c1     u2c1_addr.bit.b1    /* Transmit buffer empty flag */
#define     re_u2c1     u2c1_addr.bit.b2    /* Receive enable bit */
#define     ri_u2c1     u2c1_addr.bit.b3    /* Receive complete flag */
#define     u2irs_u2c1       u2c1_addr.bit.b4    /* UART2 transmit interrupt cause select bit */
#define     u2rrm_u2c1       u2c1_addr.bit.b5    /* UART2 continuous receive mode enable bit */
#define     u2lch_u2c1       u2c1_addr.bit.b6    /* Data logic select bit */
#define     sclkstpb_u2c1 u2c1_addr.bit.b7   /* Clock divide synchronizing stop bit */
#define     u2ere_u2c1       u2c1_addr.bit.b7    /* Error signal output enable bit */

/*------------------------------------------------------
    UART3 transmit/receive control register 1
------------------------------------------------------*/
union byte_def u3c1_addr;
#define     u3c1        u3c1_addr.byte
#define     te_u3c1     u3c1_addr.bit.b0    /* Transmit enable bit */
#define     ti_u3c1     u3c1_addr.bit.b1    /* Transmit buffer empty flag */
#define     re_u3c1     u3c1_addr.bit.b2    /* Receive enable bit */
#define     ri_u3c1     u3c1_addr.bit.b3    /* Receive complete flag */
#define     u3irs_u3c1       u3c1_addr.bit.b4    /* UART3 transmit interrupt cause select bit */
#define     u3rrm_u3c1       u3c1_addr.bit.b5    /* UART3 continuous receive mode enable bit */
#define     u3lch_u3c1       u3c1_addr.bit.b6    /* Data logic select bit */
#define     sclkstpb_u3c1 u3c1_addr.bit.b7   /* Clock divide synchronizing stop bit */
#define     u3ere_u3c1       u3c1_addr.bit.b7    /* Error signal output enable bit */

/*------------------------------------------------------
    UART4 transmit/receive control register 1
------------------------------------------------------*/
union byte_def u4c1_addr;
#define     u4c1        u4c1_addr.byte
#define     te_u4c1     u4c1_addr.bit.b0    /* Transmit enable bit */
#define     ti_u4c1     u4c1_addr.bit.b1    /* Transmit buffer empty flag */
#define     re_u4c1     u4c1_addr.bit.b2    /* Receive enable bit */
#define     ri_u4c1     u4c1_addr.bit.b3    /* Receive complete flag */
#define     u4irs_u4c1  u4c1_addr.bit.b4    /* UART4 transmit interrupt cause select bit */
#define     u4rrm_u4c1  u4c1_addr.bit.b5    /* UART4 continuous receive mode enable bit */
#define     u4lch_u4c1  u4c1_addr.bit.b6    /* Data logic select bit */
#define     sclkstpb_u4c1 u4c1_addr.bit.b7    /* Clock divide synchronizing stop bit */
#define     u4ere_u4c1   u4c1_addr.bit.b7    /* Error signal output enable bit */

/*------------------------------------------------------
    A/D0 control register 0
------------------------------------------------------*/
union byte_def ad0con0_addr;
#define     ad0con0      ad0con0_addr.byte

#define     ch0_ad0con0     ad0con0_addr.bit.b0  /* Analog input pin select bit */
#define     ch1_ad0con0     ad0con0_addr.bit.b1  /* Analog input pin select bit */
#define     ch2_ad0con0     ad0con0_addr.bit.b2  /* Analog input pin select bit */
#define     md0_ad0con0     ad0con0_addr.bit.b3  /* A/D operation mode select bit 0 */
#define     md1_ad0con0     ad0con0_addr.bit.b4  /* A/D operation mode select bit 0 */
#define     trg_ad0con0     ad0con0_addr.bit.b5  /* Trigger select bit */
#define     adst_ad0con0    ad0con0_addr.bit.b6  /* A/D conversion start flag */
#define     cks0_ad0con0    ad0con0_addr.bit.b7  /* Frequency select bit 0 */

/*------------------------------------------------------
    A/D0 control  register 1
------------------------------------------------------*/
union byte_def ad0con1_addr;
#define     ad0con1      ad0con1_addr.byte

#define     scan0_ad0con1       ad0con1_addr.bit.b0  /* A/D sweep pin select bit */
#define     scan1_ad0con1       ad0con1_addr.bit.b1  /* A/D sweep pin select bit */
#define     md2_ad0con1         ad0con1_addr.bit.b2  /* A/D operation mode select bit 1 */
#define     bits_ad0con1        ad0con1_addr.bit.b3  /* 8/10-bit mode select bit */
#define     cks1_ad0con1        ad0con1_addr.bit.b4  /* Frequency select bit 1 */
#define     vcut_ad0con1        ad0con1_addr.bit.b5  /* Vref connect bit */
#define     opa0_ad0con1        ad0con1_addr.bit.b6  /* External op-amp connection mode bit */
#define     opa1_ad0con1        ad0con1_addr.bit.b7  /* External op-amp connection mode bit */

/*------------------------------------------------------
    A/D0 control register 2
------------------------------------------------------*/
union byte_def ad0con2_addr;
#define     ad0con2      ad0con2_addr.byte

#define     smp_ad0con2         ad0con2_addr.bit.b0  /* A/D conversion method select bit */
#define     ads_ad0con2         ad0con2_addr.bit.b4  
#define     trg0_ad0con2        ad0con2_addr.bit.b5  
#define     trg1_ad0con2        ad0con2_addr.bit.b6  
#define     pst_ad0con2         ad0con2_addr.bit.b7  

/*------------------------------------------------------
    A/D1 control register 0
------------------------------------------------------*/
union byte_def ad1con0_addr;
#define     ad1con0      ad1con0_addr.byte

#define     ch0_ad1con0     ad1con0_addr.bit.b0  /* Analog input pin select bit */
#define     ch1_ad1con0     ad1con0_addr.bit.b1  /* Analog input pin select bit */
#define     ch2_ad1con0     ad1con0_addr.bit.b2  /* Analog input pin select bit */
#define     md0_ad1con0     ad1con0_addr.bit.b3  /* A/D operation mode select bit 0 */
#define     md1_ad1con0     ad1con0_addr.bit.b4  /* A/D operation mode select bit 0 */
#define     trg_ad1con0     ad1con0_addr.bit.b5  /* Trigger select bit */
#define     adst_ad1con0    ad1con0_addr.bit.b6  /* A/D conversion start flag */
#define     cks0_ad1con0    ad1con0_addr.bit.b7  /* Frequency select bit 0 */

/*------------------------------------------------------
    A/D1 control  register 1
------------------------------------------------------*/
union byte_def ad1con1_addr;
#define     ad1con1      ad1con1_addr.byte

#define     scan0_ad1con1       ad1con1_addr.bit.b0  /* A/D sweep pin select bit */
#define     scan1_ad1con1       ad1con1_addr.bit.b1  /* A/D sweep pin select bit */
#define     md2_ad1con1         ad1con1_addr.bit.b2  /* A/D operation mode select bit 1 */
#define     bits_ad1con1        ad1con1_addr.bit.b3  /* 8/10-bit mode select bit */
#define     cks1_ad1con1        ad1con1_addr.bit.b4  /* Frequency select bit 1 */
#define     vcut_ad1con1        ad1con1_addr.bit.b5  /* Vref connect bit */

/*------------------------------------------------------
    A/D1 control register 2
------------------------------------------------------*/
union byte_def ad1con2_addr;
#define     ad1con2      ad1con2_addr.byte

#define     smp_ad1con2         ad1con2_addr.bit.b0  /* A/D conversion method select bit */
#define     aps0_ad1con2        ad1con2_addr.bit.b1  
#define     aps1_ad1con2        ad1con2_addr.bit.b2  
#define		trg0_ad1con2		ad1con2_addr.bit.b5
#define		trg1_ad1con2		ad1con2_addr.bit.b6

/*------------------------------------------------------
    D/A control register
------------------------------------------------------*/
union byte_def dacon_addr;
#define     dacon       dacon_addr.byte

#define     da0e        dacon_addr.bit.b0   /* D/A0 output enable bit */
#define     da1e        dacon_addr.bit.b1   /* D/A1 output enable bit */

/*------------------------------------------------------
    Base timer start register
------------------------------------------------------*/
union byte_def btsr_addr;
#define     btsr       btsr_addr.byte

#define     bt0s        btsr_addr.bit.b0
#define     bt1s        btsr_addr.bit.b1
#define     bt2s        btsr_addr.bit.b2
#define     bt3s        btsr_addr.bit.b3

/*------------------------------------------------------
    Group 0 base timer control register 0
------------------------------------------------------*/
union byte_def g0bcr0_addr;
#define     g0bcr0       g0bcr0_addr.byte

#define     bck0_g0bcr0        g0bcr0_addr.bit.b0
#define     bck1_g0bcr0        g0bcr0_addr.bit.b1
#define     div0_g0bcr0        g0bcr0_addr.bit.b2
#define     div1_g0bcr0        g0bcr0_addr.bit.b3
#define     div2_g0bcr0        g0bcr0_addr.bit.b4
#define     div3_g0bcr0        g0bcr0_addr.bit.b5
#define     div4_g0bcr0        g0bcr0_addr.bit.b6
#define     it_g0bcr0          g0bcr0_addr.bit.b7

/*------------------------------------------------------
    Group 0 base timer control register 1
------------------------------------------------------*/
union byte_def g0bcr1_addr;
#define     g0bcr1       g0bcr1_addr.byte

#define     rst0_g0bcr1        g0bcr1_addr.bit.b0
#define     rst1_g0bcr1        g0bcr1_addr.bit.b1
#define     rst2_g0bcr1        g0bcr1_addr.bit.b2
#define		rst3_g0bcr1		   g0bcr1_addr.bit.b3
#define     bts_g0bcr1         g0bcr1_addr.bit.b4
#define     ud0_g0bcr1         g0bcr1_addr.bit.b5
#define     ud1_g0bcr1         g0bcr1_addr.bit.b6
#define     cas_g0bcr1         g0bcr1_addr.bit.b7

/*------------------------------------------------------
    Group 0 time measurement control register 0
------------------------------------------------------*/
union byte_def g0tmcr0_addr;
#define     g0tmcr0       g0tmcr0_addr.byte

#define     cts0_g0tmcr0      g0tmcr0_addr.bit.b0
#define     cts1_g0tmcr0      g0tmcr0_addr.bit.b1
#define     df0_g0tmcr0       g0tmcr0_addr.bit.b2
#define     df1_g0tmcr0       g0tmcr0_addr.bit.b3
#define     gt_g0tmcr0        g0tmcr0_addr.bit.b4
#define     goc_g0tmcr0       g0tmcr0_addr.bit.b5
#define     gsc_g0tmcr0       g0tmcr0_addr.bit.b6
#define     pr_g0tmcr0        g0tmcr0_addr.bit.b7

/*------------------------------------------------------
    Group 0 time measurement control register 1
------------------------------------------------------*/
union byte_def g0tmcr1_addr;
#define     g0tmcr1       g0tmcr1_addr.byte

#define     cts0_g0tmcr1      g0tmcr1_addr.bit.b0
#define     cts1_g0tmcr1      g0tmcr1_addr.bit.b1
#define     df0_g0tmcr1       g0tmcr1_addr.bit.b2
#define     df1_g0tmcr1       g0tmcr1_addr.bit.b3
#define     gt_g0tmcr1        g0tmcr1_addr.bit.b4
#define     goc_g0tmcr1       g0tmcr1_addr.bit.b5
#define     gsc_g0tmcr1       g0tmcr1_addr.bit.b6
#define     pr_g0tmcr1        g0tmcr1_addr.bit.b7

/*------------------------------------------------------
    Group 0 time measurement control register 2
------------------------------------------------------*/
union byte_def g0tmcr2_addr;
#define     g0tmcr2       g0tmcr2_addr.byte

#define     cts0_g0tmcr2      g0tmcr2_addr.bit.b0
#define     cts1_g0tmcr2      g0tmcr2_addr.bit.b1
#define     df0_g0tmcr2       g0tmcr2_addr.bit.b2
#define     df1_g0tmcr2       g0tmcr2_addr.bit.b3
#define     gt_g0tmcr2        g0tmcr2_addr.bit.b4
#define     goc_g0tmcr2       g0tmcr2_addr.bit.b5
#define     gsc_g0tmcr2       g0tmcr2_addr.bit.b6
#define     pr_g0tmcr2        g0tmcr2_addr.bit.b7

/*------------------------------------------------------
    Group 0 time measurement control register 3
------------------------------------------------------*/
union byte_def g0tmcr3_addr;
#define     g0tmcr3       g0tmcr3_addr.byte

#define     cts0_g0tmcr3      g0tmcr3_addr.bit.b0
#define     cts1_g0tmcr3      g0tmcr3_addr.bit.b1
#define     df0_g0tmcr3       g0tmcr3_addr.bit.b2
#define     df1_g0tmcr3       g0tmcr3_addr.bit.b3
#define     gt_g0tmcr3        g0tmcr3_addr.bit.b4
#define     goc_g0tmcr3       g0tmcr3_addr.bit.b5
#define     gsc_g0tmcr3       g0tmcr3_addr.bit.b6
#define     pr_g0tmcr3        g0tmcr3_addr.bit.b7

/*------------------------------------------------------
    Group 0 time measurement control register 4
------------------------------------------------------*/
union byte_def g0tmcr4_addr;
#define     g0tmcr4       g0tmcr4_addr.byte

#define     cts0_g0tmcr4      g0tmcr4_addr.bit.b0
#define     cts1_g0tmcr4      g0tmcr4_addr.bit.b1
#define     df0_g0tmcr4       g0tmcr4_addr.bit.b2
#define     df1_g0tmcr4       g0tmcr4_addr.bit.b3
#define     gt_g0tmcr4        g0tmcr4_addr.bit.b4
#define     goc_g0tmcr4       g0tmcr4_addr.bit.b5
#define     gsc_g0tmcr4       g0tmcr4_addr.bit.b6
#define     pr_g0tmcr4        g0tmcr4_addr.bit.b7

/*------------------------------------------------------
    Group 0 time measurement control register 5
------------------------------------------------------*/
union byte_def g0tmcr5_addr;
#define     g0tmcr5       g0tmcr5_addr.byte

#define     cts0_g0tmcr5      g0tmcr5_addr.bit.b0
#define     cts1_g0tmcr5      g0tmcr5_addr.bit.b1
#define     df0_g0tmcr5       g0tmcr5_addr.bit.b2
#define     df1_g0tmcr5       g0tmcr5_addr.bit.b3
#define     gt_g0tmcr5        g0tmcr5_addr.bit.b4
#define     goc_g0tmcr5       g0tmcr5_addr.bit.b5
#define     gsc_g0tmcr5       g0tmcr5_addr.bit.b6
#define     pr_g0tmcr5        g0tmcr5_addr.bit.b7

/*------------------------------------------------------
    Group 0 time measurement control register 6
------------------------------------------------------*/
union byte_def g0tmcr6_addr;
#define     g0tmcr6       g0tmcr6_addr.byte

#define     cts0_g0tmcr6      g0tmcr6_addr.bit.b0
#define     cts1_g0tmcr6      g0tmcr6_addr.bit.b1
#define     df0_g0tmcr6       g0tmcr6_addr.bit.b2
#define     df1_g0tmcr6       g0tmcr6_addr.bit.b3
#define     gt_g0tmcr6        g0tmcr6_addr.bit.b4
#define     goc_g0tmcr6       g0tmcr6_addr.bit.b5
#define     gsc_g0tmcr6       g0tmcr6_addr.bit.b6
#define     pr_g0tmcr6        g0tmcr6_addr.bit.b7

/*------------------------------------------------------
    Group 0 time measurement control register 7
------------------------------------------------------*/
union byte_def g0tmcr7_addr;
#define     g0tmcr7       g0tmcr7_addr.byte

#define     cts0_g0tmcr7      g0tmcr7_addr.bit.b0
#define     cts1_g0tmcr7      g0tmcr7_addr.bit.b1
#define     df0_g0tmcr7       g0tmcr7_addr.bit.b2
#define     df1_g0tmcr7       g0tmcr7_addr.bit.b3
#define     gt_g0tmcr7        g0tmcr7_addr.bit.b4
#define     goc_g0tmcr7       g0tmcr7_addr.bit.b5
#define     gsc_g0tmcr7       g0tmcr7_addr.bit.b6
#define     pr_g0tmcr7        g0tmcr7_addr.bit.b7

/*------------------------------------------------------
    Group 0 time measurement prescaler register 6
------------------------------------------------------*/
union byte_def g0tpr6_addr;
#define     g0tpr6       g0tpr6_addr.byte

/*------------------------------------------------------
    Group 0 time measurement prescaler register 7
------------------------------------------------------*/
union byte_def g0tpr7_addr;
#define     g0tpr7       g0tpr7_addr.byte

/*------------------------------------------------------
    Group 0 waveform generate control register 0
------------------------------------------------------*/
union byte_def g0pocr0_addr;
#define     g0pocr0       g0pocr0_addr.byte

#define     mod0_g0pocr0        g0pocr0_addr.bit.b0
#define     mod1_g0pocr0        g0pocr0_addr.bit.b1
#define     mod2_g0pocr0        g0pocr0_addr.bit.b2
#define     ivl_g0pocr0         g0pocr0_addr.bit.b4
#define     rld_g0pocr0         g0pocr0_addr.bit.b5
#define     inv_g0pocr0         g0pocr0_addr.bit.b7

/*------------------------------------------------------
    Group 0 waveform generate control register 1
------------------------------------------------------*/
union byte_def g0pocr1_addr;
#define     g0pocr1       g0pocr1_addr.byte

#define     mod0_g0pocr1        g0pocr1_addr.bit.b0
#define     mod1_g0pocr1        g0pocr1_addr.bit.b1
#define     mod2_g0pocr1        g0pocr1_addr.bit.b2
#define     ivl_g0pocr1         g0pocr1_addr.bit.b4
#define     rld_g0pocr1         g0pocr1_addr.bit.b5
#define     inv_g0pocr1         g0pocr1_addr.bit.b7


/*------------------------------------------------------
    Group 0 waveform generate control register 2
------------------------------------------------------*/
union byte_def g0pocr2_addr;
#define     g0pocr2       g0pocr2_addr.byte

#define     mod0_g0pocr2        g0pocr2_addr.bit.b0
#define     mod1_g0pocr2        g0pocr2_addr.bit.b1
#define     mod2_g0pocr2        g0pocr2_addr.bit.b2
#define     ivl_g0pocr2         g0pocr2_addr.bit.b4
#define     rld_g0pocr2         g0pocr2_addr.bit.b5
#define     inv_g0pocr2         g0pocr2_addr.bit.b7


/*------------------------------------------------------
    Group 0 waveform generate control register 3
------------------------------------------------------*/
union byte_def g0pocr3_addr;
#define     g0pocr3       g0pocr3_addr.byte

#define     mod0_g0pocr3        g0pocr3_addr.bit.b0
#define     mod1_g0pocr3        g0pocr3_addr.bit.b1
#define     mod2_g0pocr3        g0pocr3_addr.bit.b2
#define     ivl_g0pocr3         g0pocr3_addr.bit.b4
#define     rld_g0pocr3         g0pocr3_addr.bit.b5
#define     inv_g0pocr3         g0pocr3_addr.bit.b7


/*------------------------------------------------------
    Group 0 waveform generate control register 4
------------------------------------------------------*/
union byte_def g0pocr4_addr;
#define     g0pocr4       g0pocr4_addr.byte

#define     mod0_g0pocr4        g0pocr4_addr.bit.b0
#define     mod1_g0pocr4        g0pocr4_addr.bit.b1
#define     mod2_g0pocr4        g0pocr4_addr.bit.b2
#define     ivl_g0pocr4         g0pocr4_addr.bit.b4
#define     rld_g0pocr4         g0pocr4_addr.bit.b5
#define     inv_g0pocr4         g0pocr4_addr.bit.b7


/*------------------------------------------------------
    Group 0 waveform generate control register 5
------------------------------------------------------*/
union byte_def g0pocr5_addr;
#define     g0pocr5       g0pocr5_addr.byte

#define     mod0_g0pocr5        g0pocr5_addr.bit.b0
#define     mod1_g0pocr5        g0pocr5_addr.bit.b1
#define     mod2_g0pocr5        g0pocr5_addr.bit.b2
#define     ivl_g0pocr5         g0pocr5_addr.bit.b4
#define     rld_g0pocr5         g0pocr5_addr.bit.b5
#define     inv_g0pocr5         g0pocr5_addr.bit.b7

/*------------------------------------------------------
    Group 0 waveform generate control register 6
------------------------------------------------------*/
union byte_def g0pocr6_addr;
#define     g0pocr6       g0pocr6_addr.byte

#define     mod0_g0pocr6        g0pocr6_addr.bit.b0
#define     mod1_g0pocr6        g0pocr6_addr.bit.b1
#define     mod2_g0pocr6        g0pocr6_addr.bit.b2
#define     ivl_g0pocr6         g0pocr6_addr.bit.b4
#define     rld_g0pocr6         g0pocr6_addr.bit.b5
#define     inv_g0pocr6         g0pocr6_addr.bit.b7


/*------------------------------------------------------
    Group 0 waveform generate control register 7
------------------------------------------------------*/
union byte_def g0pocr7_addr;
#define     g0pocr7       g0pocr7_addr.byte

#define     mod0_g0pocr7        g0pocr7_addr.bit.b0
#define     mod1_g0pocr7        g0pocr7_addr.bit.b1
#define     mod2_g0pocr7        g0pocr7_addr.bit.b2
#define     ivl_g0pocr7         g0pocr7_addr.bit.b4
#define     rld_g0pocr7         g0pocr7_addr.bit.b5
#define     inv_g0pocr7         g0pocr7_addr.bit.b7


/*------------------------------------------------------
    Group 0 function select register
------------------------------------------------------*/
union byte_def g0fs_addr;
#define     g0fs       g0fs_addr.byte

#define     fsc0_g0fs          g0fs_addr.bit.b0
#define     fsc1_g0fs          g0fs_addr.bit.b1
#define     fsc2_g0fs          g0fs_addr.bit.b2
#define     fsc3_g0fs          g0fs_addr.bit.b3
#define     fsc4_g0fs          g0fs_addr.bit.b4
#define     fsc5_g0fs          g0fs_addr.bit.b5
#define     fsc6_g0fs          g0fs_addr.bit.b6
#define     fsc7_g0fs          g0fs_addr.bit.b7

/*------------------------------------------------------
    Group 0 function enable register
------------------------------------------------------*/
union byte_def g0fe_addr;
#define     g0fe       g0fe_addr.byte

#define     ife0_g0fe          g0fe_addr.bit.b0
#define     ife1_g0fe          g0fe_addr.bit.b1
#define     ife2_g0fe          g0fe_addr.bit.b2
#define     ife3_g0fe          g0fe_addr.bit.b3
#define     ife4_g0fe          g0fe_addr.bit.b4
#define     ife5_g0fe          g0fe_addr.bit.b5
#define     ife6_g0fe          g0fe_addr.bit.b6
#define     ife7_g0fe          g0fe_addr.bit.b7

/*------------------------------------------------------
    Group 0 SI/O communication mode register
------------------------------------------------------*/
union byte_def g0mr_addr;
#define     g0mr       g0mr_addr.byte

#define     gmd0_g0mr          g0mr_addr.bit.b0
#define     gmd1_g0mr          g0mr_addr.bit.b1
#define     ckdir_g0mr         g0mr_addr.bit.b2
#define     stps_g0mr          g0mr_addr.bit.b3
//#define     pry_g0mr           g0mr_addr.bit.b4
//#define     prye_g0mr          g0mr_addr.bit.b5
#define     uform_g0mr         g0mr_addr.bit.b6
#define     irs_g0mr           g0mr_addr.bit.b7

/*------------------------------------------------------
    Group 0 SI/O communication control register
------------------------------------------------------*/
union byte_def g0cr_addr;
#define     g0cr       g0cr_addr.byte

#define     ti_g0cr             g0cr_addr.bit.b0
#define     txept_g0cr          g0cr_addr.bit.b1
#define     ri_g0cr             g0cr_addr.bit.b2
#define     te_g0cr             g0cr_addr.bit.b4
#define     re_g0cr             g0cr_addr.bit.b5
#define     ipol_g0cr           g0cr_addr.bit.b6
#define     opol_g0cr           g0cr_addr.bit.b7

/*------------------------------------------------------
    Group 0 SI/O expansion mode register
------------------------------------------------------*/
union byte_def g0emr_addr;
#define     g0emr       g0emr_addr.byte

#define     smode_g0emr         g0emr_addr.bit.b0
#define     crcv_g0emr          g0emr_addr.bit.b1
#define     acrc_g0emr          g0emr_addr.bit.b2
#define     bsint_g0emr         g0emr_addr.bit.b3
#define     rxsl_g0emr          g0emr_addr.bit.b4
#define     txsl_g0emr          g0emr_addr.bit.b5
#define     crc0_g0emr          g0emr_addr.bit.b6
#define     crc1_g0emr          g0emr_addr.bit.b7

/*------------------------------------------------------
    Group 0 SI/O expansion transmit control register
------------------------------------------------------*/
union byte_def g0etc_addr;
#define     g0etc       g0etc_addr.byte

#define     sof_g0etc         g0etc_addr.bit.b3
#define     tcrce_g0etc       g0etc_addr.bit.b4
#define     abte_g0etc        g0etc_addr.bit.b5
#define     tbsf0_g0etc       g0etc_addr.bit.b6
#define     tbsf1_g0etc       g0etc_addr.bit.b7

/*------------------------------------------------------
    Group 0 SI/O communication mode register
------------------------------------------------------*/
union byte_def g0erc_addr;
#define     g0erc       g0erc_addr.byte

#define     cmp0e_g0erc       g0erc_addr.bit.b0
#define     cmp1e_g0erc       g0erc_addr.bit.b1
#define     cmp2e_g0erc       g0erc_addr.bit.b2
#define     cmp3e_g0erc       g0erc_addr.bit.b3
#define     rcrce_g0erc       g0erc_addr.bit.b4
#define     rshte_g0erc       g0erc_addr.bit.b5
#define     rbsf0_g0erc       g0erc_addr.bit.b6
#define     rbsf1_g0erc       g0erc_addr.bit.b7

/*------------------------------------------------------
    Group 0 SI/O special communication 
            interrupt detect register
------------------------------------------------------*/
union byte_def g0irf_addr;
#define     g0irf       g0irf_addr.byte

#define     bserr_g0irf       g0irf_addr.bit.b2
#define     abt_g0irf         g0irf_addr.bit.b3
#define     irf0_g0irf        g0irf_addr.bit.b4
#define     irf1_g0irf        g0irf_addr.bit.b5
#define     irf2_g0irf        g0irf_addr.bit.b6
#define     irf3_g0irf        g0irf_addr.bit.b7

/*------------------------------------------------------
    Group 0 receive data register
------------------------------------------------------*/
/* union byte_def g0dr_addr;
#define     g0dr       g0dr_addr.byte
*/

/*------------------------------------------------------
    Group 0 transmitting buffer register
------------------------------------------------------*/
union byte_def g0tb_addr;
#define     g0tb       g0tb_addr.byte

/*------------------------------------------------------
    Group 0 data compare register 0
------------------------------------------------------*/
union byte_def g0cmp0_addr;
#define     g0cmp0       g0cmp0_addr.byte

/*------------------------------------------------------
    Group 0 data compare register 1
------------------------------------------------------*/
union byte_def g0cmp1_addr;
#define     g0cmp1       g0cmp1_addr.byte

/*------------------------------------------------------
    Group 0 data compare register 2
------------------------------------------------------*/
union byte_def g0cmp2_addr;
#define     g0cmp2       g0cmp2_addr.byte

/*------------------------------------------------------
    Group 0 data compare register 3
------------------------------------------------------*/
union byte_def g0cmp3_addr;
#define     g0cmp3       g0cmp3_addr.byte

/*------------------------------------------------------
    Group 0 data mask register 0
------------------------------------------------------*/
union byte_def g0msk0_addr;
#define     g0msk0       g0msk0_addr.byte

/*------------------------------------------------------
    Group 0 data mask register 1
------------------------------------------------------*/
union byte_def g0msk1_addr;
#define     g0msk1       g0msk1_addr.byte

/*------------------------------------------------------
    Group 0 transmit output register
------------------------------------------------------*/
union byte_def g0to_addr;
#define     g0to       g0to_addr.byte

/*------------------------------------------------------
    Group 0 receive input register
------------------------------------------------------*/
union byte_def g0ri_addr;
#define     g0ri       g0ri_addr.byte

/*------------------------------------------------------
    Group 1 base timer control register 0
------------------------------------------------------*/
union byte_def g1bcr0_addr;
#define     g1bcr0       g1bcr0_addr.byte

#define     bck0_g1bcr0        g1bcr0_addr.bit.b0
#define     bck1_g1bcr0        g1bcr0_addr.bit.b1
#define     div0_g1bcr0        g1bcr0_addr.bit.b2
#define     div1_g1bcr0        g1bcr0_addr.bit.b3
#define     div2_g1bcr0        g1bcr0_addr.bit.b4
#define     div3_g1bcr0        g1bcr0_addr.bit.b5
#define     div4_g1bcr0        g1bcr0_addr.bit.b6
#define     it_g1bcr0          g1bcr0_addr.bit.b7

/*------------------------------------------------------
    Group 1 base timer control register 1
------------------------------------------------------*/
union byte_def g1bcr1_addr;
#define     g1bcr1       g1bcr1_addr.byte

#define     rst0_g1bcr1        g1bcr1_addr.bit.b0
#define     rst1_g1bcr1        g1bcr1_addr.bit.b1
#define     rst2_g1bcr1        g1bcr1_addr.bit.b2
#define		rst3_g1bcr1		   g1bcr1_addr.bit.b3
#define     bts_g1bcr1         g1bcr1_addr.bit.b4
#define     ud0_g1bcr1         g1bcr1_addr.bit.b5
#define     ud1_g1bcr1         g1bcr1_addr.bit.b6
#define     cas_g1bcr1         g1bcr1_addr.bit.b7

/*------------------------------------------------------
    Group 1 time measurement control register 0
------------------------------------------------------*/
union byte_def g1tmcr0_addr;
#define     g1tmcr0       g1tmcr0_addr.byte

#define     cts0_g1tmcr0      g1tmcr0_addr.bit.b0
#define     cts1_g1tmcr0      g1tmcr0_addr.bit.b1
#define     df0_g1tmcr0       g1tmcr0_addr.bit.b2
#define     df1_g1tmcr0       g1tmcr0_addr.bit.b3
#define     gt_g1tmcr0        g1tmcr0_addr.bit.b4
#define     goc_g1tmcr0       g1tmcr0_addr.bit.b5
#define     gsc_g1tmcr0       g1tmcr0_addr.bit.b6
#define     pr_g1tmcr0        g1tmcr0_addr.bit.b7


/*------------------------------------------------------
    Group 1 time measurement control register 1
------------------------------------------------------*/
union byte_def g1tmcr1_addr;
#define     g1tmcr1       g1tmcr1_addr.byte

#define     cts0_g1tmcr1      g1tmcr1_addr.bit.b0
#define     cts1_g1tmcr1      g1tmcr1_addr.bit.b1
#define     df0_g1tmcr1       g1tmcr1_addr.bit.b2
#define     df1_g1tmcr1       g1tmcr1_addr.bit.b3
#define     gt_g1tmcr1        g1tmcr1_addr.bit.b4
#define     goc_g1tmcr1       g1tmcr1_addr.bit.b5
#define     gsc_g1tmcr1       g1tmcr1_addr.bit.b6
#define     pr_g1tmcr1        g1tmcr1_addr.bit.b7

/*------------------------------------------------------
    Group 1 time measurement control register 2
------------------------------------------------------*/
union byte_def g1tmcr2_addr;
#define     g1tmcr2       g1tmcr2_addr.byte

#define     cts0_g1tmcr2      g1tmcr2_addr.bit.b0
#define     cts1_g1tmcr2      g1tmcr2_addr.bit.b1
#define     df0_g1tmcr2       g1tmcr2_addr.bit.b2
#define     df1_g1tmcr2       g1tmcr2_addr.bit.b3
#define     gt_g1tmcr2        g1tmcr2_addr.bit.b4
#define     goc_g1tmcr2       g1tmcr2_addr.bit.b5
#define     gsc_g1tmcr2       g1tmcr2_addr.bit.b6
#define     pr_g1tmcr2        g1tmcr2_addr.bit.b7

/*------------------------------------------------------
    Group 1 time measurement control register 3
------------------------------------------------------*/
union byte_def g1tmcr3_addr;
#define     g1tmcr3       g1tmcr3_addr.byte

#define     cts0_g1tmcr3      g1tmcr3_addr.bit.b0
#define     cts1_g1tmcr3      g1tmcr3_addr.bit.b1
#define     df0_g1tmcr3       g1tmcr3_addr.bit.b2
#define     df1_g1tmcr3       g1tmcr3_addr.bit.b3
#define     gt_g1tmcr3        g1tmcr3_addr.bit.b4
#define     goc_g1tmcr3       g1tmcr3_addr.bit.b5
#define     gsc_g1tmcr3       g1tmcr3_addr.bit.b6
#define     pr_g1tmcr3        g1tmcr3_addr.bit.b7


/*------------------------------------------------------
    Group 1 time measurement control register 4
------------------------------------------------------*/
union byte_def g1tmcr4_addr;
#define     g1tmcr4       g1tmcr4_addr.byte

#define     cts0_g1tmcr4      g1tmcr4_addr.bit.b0
#define     cts1_g1tmcr4      g1tmcr4_addr.bit.b1
#define     df0_g1tmcr4       g1tmcr4_addr.bit.b2
#define     df1_g1tmcr4       g1tmcr4_addr.bit.b3
#define     gt_g1tmcr4        g1tmcr4_addr.bit.b4
#define     goc_g1tmcr4       g1tmcr4_addr.bit.b5
#define     gsc_g1tmcr4       g1tmcr4_addr.bit.b6
#define     pr_g1tmcr4        g1tmcr4_addr.bit.b7


/*------------------------------------------------------
    Group 1 time measurement control register 5
------------------------------------------------------*/
union byte_def g1tmcr5_addr;
#define     g1tmcr5       g1tmcr5_addr.byte

#define     cts0_g1tmcr5      g1tmcr5_addr.bit.b0
#define     cts1_g1tmcr5      g1tmcr5_addr.bit.b1
#define     df0_g1tmcr5       g1tmcr5_addr.bit.b2
#define     df1_g1tmcr5       g1tmcr5_addr.bit.b3
#define     gt_g1tmcr5        g1tmcr5_addr.bit.b4
#define     goc_g1tmcr5       g1tmcr5_addr.bit.b5
#define     gsc_g1tmcr5       g1tmcr5_addr.bit.b6
#define     pr_g1tmcr5        g1tmcr5_addr.bit.b7


/*------------------------------------------------------
    Group 1 time measurement control register 6
------------------------------------------------------*/
union byte_def g1tmcr6_addr;
#define     g1tmcr6       g1tmcr6_addr.byte

#define     cts0_g1tmcr6      g1tmcr6_addr.bit.b0
#define     cts1_g1tmcr6      g1tmcr6_addr.bit.b1
#define     df0_g1tmcr6       g1tmcr6_addr.bit.b2
#define     df1_g1tmcr6       g1tmcr6_addr.bit.b3
#define     gt_g1tmcr6        g1tmcr6_addr.bit.b4
#define     goc_g1tmcr6       g1tmcr6_addr.bit.b5
#define     gsc_g1tmcr6       g1tmcr6_addr.bit.b6
#define     pr_g1tmcr6        g1tmcr6_addr.bit.b7

/*------------------------------------------------------
    Group 1 time measurement control register 7
------------------------------------------------------*/
union byte_def g1tmcr7_addr;
#define     g1tmcr7       g1tmcr7_addr.byte

#define     cts0_g1tmcr7      g1tmcr7_addr.bit.b0
#define     cts1_g1tmcr7      g1tmcr7_addr.bit.b1
#define     df0_g1tmcr7       g1tmcr7_addr.bit.b2
#define     df1_g1tmcr7       g1tmcr7_addr.bit.b3
#define     gt_g1tmcr7        g1tmcr7_addr.bit.b4
#define     goc_g1tmcr7       g1tmcr7_addr.bit.b5
#define     gsc_g1tmcr7       g1tmcr7_addr.bit.b6
#define     pr_g1tmcr7        g1tmcr7_addr.bit.b7

/*------------------------------------------------------
    Group 1 time measurement prescaler register 6
------------------------------------------------------*/
union byte_def g1tpr6_addr;
#define     g1tpr6       g1tpr6_addr.byte

/*------------------------------------------------------
    Group 1 time measurement prescaler register 7
------------------------------------------------------*/
union byte_def g1tpr7_addr;
#define     g1tpr7       g1tpr7_addr.byte

/*------------------------------------------------------
    Group 1 waveform generate control register 0
------------------------------------------------------*/
union byte_def g1pocr0_addr;
#define     g1pocr0       g1pocr0_addr.byte

#define     mod0_g1pocr0        g1pocr0_addr.bit.b0
#define     mod1_g1pocr0        g1pocr0_addr.bit.b1
#define     mod2_g1pocr0        g1pocr0_addr.bit.b2
#define     ivl_g1pocr0         g1pocr0_addr.bit.b4
#define     rld_g1pocr0         g1pocr0_addr.bit.b5
#define     inv_g1pocr0         g1pocr0_addr.bit.b7

/*------------------------------------------------------
    Group 1 waveform generate control register 1
------------------------------------------------------*/
union byte_def g1pocr1_addr;
#define     g1pocr1       g1pocr1_addr.byte

#define     mod0_g1pocr1        g1pocr1_addr.bit.b0
#define     mod1_g1pocr1        g1pocr1_addr.bit.b1
#define     mod2_g1pocr1        g1pocr1_addr.bit.b2
#define     ivl_g1pocr1         g1pocr1_addr.bit.b4
#define     rld_g1pocr1         g1pocr1_addr.bit.b5
#define     inv_g1pocr1         g1pocr1_addr.bit.b7


/*------------------------------------------------------
    Group 1 waveform generate control register 2
------------------------------------------------------*/
union byte_def g1pocr2_addr;
#define     g1pocr2       g1pocr2_addr.byte

#define     mod0_g1pocr2        g1pocr2_addr.bit.b0
#define     mod1_g1pocr2        g1pocr2_addr.bit.b1
#define     mod2_g1pocr2        g1pocr2_addr.bit.b2
#define     ivl_g1pocr2         g1pocr2_addr.bit.b4
#define     rld_g1pocr2         g1pocr2_addr.bit.b5
#define     inv_g1pocr2         g1pocr2_addr.bit.b7

/*------------------------------------------------------
    Group 1 waveform generate control register 3
------------------------------------------------------*/
union byte_def g1pocr3_addr;
#define     g1pocr3       g1pocr3_addr.byte

#define     mod0_g1pocr3        g1pocr3_addr.bit.b0
#define     mod1_g1pocr3        g1pocr3_addr.bit.b1
#define     mod2_g1pocr3        g1pocr3_addr.bit.b2
#define     ivl_g1pocr3         g1pocr3_addr.bit.b4
#define     rld_g1pocr3         g1pocr3_addr.bit.b5
#define     inv_g1pocr3         g1pocr3_addr.bit.b7


/*------------------------------------------------------
    Group 1 waveform generate control register 4
------------------------------------------------------*/
union byte_def g1pocr4_addr;
#define     g1pocr4       g1pocr4_addr.byte

#define     mod0_g1pocr4        g1pocr4_addr.bit.b0
#define     mod1_g1pocr4        g1pocr4_addr.bit.b1
#define     mod2_g1pocr4        g1pocr4_addr.bit.b2
#define     ivl_g1pocr4         g1pocr4_addr.bit.b4
#define     rld_g1pocr4         g1pocr4_addr.bit.b5
#define     inv_g1pocr4         g1pocr4_addr.bit.b7


/*------------------------------------------------------
    Group 1 waveform generate control register 5
------------------------------------------------------*/
union byte_def g1pocr5_addr;
#define     g1pocr5       g1pocr5_addr.byte

#define     mod0_g1pocr5        g1pocr5_addr.bit.b0
#define     mod1_g1pocr5        g1pocr5_addr.bit.b1
#define     mod2_g1pocr5        g1pocr5_addr.bit.b2
#define     ivl_g1pocr5         g1pocr5_addr.bit.b4
#define     rld_g1pocr5         g1pocr5_addr.bit.b5
#define     inv_g1pocr5         g1pocr5_addr.bit.b7

/*------------------------------------------------------
    Group 1 waveform generate control register 6
------------------------------------------------------*/
union byte_def g1pocr6_addr;
#define     g1pocr6       g1pocr6_addr.byte

#define     mod0_g1pocr6        g1pocr6_addr.bit.b0
#define     mod1_g1pocr6        g1pocr6_addr.bit.b1
#define     mod2_g1pocr6        g1pocr6_addr.bit.b2
#define     ivl_g1pocr6         g1pocr6_addr.bit.b4
#define     rld_g1pocr6         g1pocr6_addr.bit.b5
#define     inv_g1pocr6         g1pocr6_addr.bit.b7

/*------------------------------------------------------
    Group 1 waveform generate control register 7
------------------------------------------------------*/
union byte_def g1pocr7_addr;
#define     g1pocr7       g1pocr7_addr.byte

#define     mod0_g1pocr7        g1pocr7_addr.bit.b0
#define     mod1_g1pocr7        g1pocr7_addr.bit.b1
#define     mod2_g1pocr7        g1pocr7_addr.bit.b2
#define     ivl_g1pocr7         g1pocr7_addr.bit.b4
#define     rld_g1pocr7         g1pocr7_addr.bit.b5
#define     inv_g1pocr7         g1pocr7_addr.bit.b7

/*------------------------------------------------------
    Group 1 function select register
------------------------------------------------------*/
union byte_def g1fs_addr;
#define     g1fs       g1fs_addr.byte

#define     fsc0_g1fs          g1fs_addr.bit.b0
#define     fsc1_g1fs          g1fs_addr.bit.b1
#define     fsc2_g1fs          g1fs_addr.bit.b2
#define     fsc3_g1fs          g1fs_addr.bit.b3
#define     fsc4_g1fs          g1fs_addr.bit.b4
#define     fsc5_g1fs          g1fs_addr.bit.b5
#define     fsc6_g1fs          g1fs_addr.bit.b6
#define     fsc7_g1fs          g1fs_addr.bit.b7

/*------------------------------------------------------
    Group 1 function enable register
------------------------------------------------------*/
union byte_def g1fe_addr;
#define     g1fe       g1fe_addr.byte

#define     ife0_g1fe          g1fe_addr.bit.b0
#define     ife1_g1fe          g1fe_addr.bit.b1
#define     ife2_g1fe          g1fe_addr.bit.b2
#define     ife3_g1fe          g1fe_addr.bit.b3
#define     ife4_g1fe          g1fe_addr.bit.b4
#define     ife5_g1fe          g1fe_addr.bit.b5
#define     ife6_g1fe          g1fe_addr.bit.b6
#define     ife7_g1fe          g1fe_addr.bit.b7

/*------------------------------------------------------
    Group 1 SI/O communication mode register
------------------------------------------------------*/
union byte_def g1mr_addr;
#define     g1mr       g1mr_addr.byte

#define     gmd0_g1mr          g1mr_addr.bit.b0
#define     gmd1_g1mr          g1mr_addr.bit.b1
#define     ckdir_g1mr         g1mr_addr.bit.b2
#define     stps_g1mr          g1mr_addr.bit.b3
//#define     pry_g1mr           g1mr_addr.bit.b4
//#define     prye_g1mr          g1mr_addr.bit.b5
#define     uform_g1mr         g1mr_addr.bit.b6
#define     irs_g1mr           g1mr_addr.bit.b7

/*------------------------------------------------------
    Group 1 SI/O communication control register
------------------------------------------------------*/
union byte_def g1cr_addr;
#define     g1cr       g1cr_addr.byte

#define     ti_g1cr             g1cr_addr.bit.b0
#define     txept_g1cr          g1cr_addr.bit.b1
#define     ri_g1cr             g1cr_addr.bit.b2
#define     te_g1cr             g1cr_addr.bit.b4
#define     re_g1cr             g1cr_addr.bit.b5
#define     ipol_g1cr           g1cr_addr.bit.b6
#define     opol_g1cr           g1cr_addr.bit.b7

/*------------------------------------------------------
    Group 1 SI/O expansion mode register
------------------------------------------------------*/
union byte_def g1emr_addr;
#define     g1emr       g1emr_addr.byte

#define     smode_g1emr         g1emr_addr.bit.b0
#define     crcv_g1emr          g1emr_addr.bit.b1
#define     acrc_g1emr          g1emr_addr.bit.b2
#define     bsint_g1emr         g1emr_addr.bit.b3
#define     rxsl_g1emr          g1emr_addr.bit.b4
#define     txsl_g1emr          g1emr_addr.bit.b5
#define     crc0_g1emr          g1emr_addr.bit.b6
#define     crc1_g1emr          g1emr_addr.bit.b7

/*------------------------------------------------------
    Group 1 SI/O expansion transmit control register
------------------------------------------------------*/
union byte_def g1etc_addr;
#define     g1etc       g1etc_addr.byte

#define     sof_g1etc         g1etc_addr.bit.b3
#define     tcrce_g1etc       g1etc_addr.bit.b4
#define     abte_g1etc        g1etc_addr.bit.b5
#define     tbsf0_g1etc       g1etc_addr.bit.b6
#define     tbsf1_g1etc       g1etc_addr.bit.b7

/*------------------------------------------------------
    Group 1 SI/O communication mode register
------------------------------------------------------*/
union byte_def g1erc_addr;
#define     g1erc       g1erc_addr.byte

#define     cmp0e_g1erc       g1erc_addr.bit.b0
#define     cmp1e_g1erc       g1erc_addr.bit.b1
#define     cmp2e_g1erc       g1erc_addr.bit.b2
#define     cmp3e_g1erc       g1erc_addr.bit.b3
#define     rcrce_g1erc       g1erc_addr.bit.b4
#define     rshte_g1erc       g1erc_addr.bit.b5
#define     rbsf0_g1erc       g1erc_addr.bit.b6
#define     rbsf1_g1erc       g1erc_addr.bit.b7

/*------------------------------------------------------
    Group 1 SI/O special communication 
            interrupt detect register
------------------------------------------------------*/
union byte_def g1irf_addr;
#define     g1irf       g1irf_addr.byte

#define     bserr_g1irf       g1irf_addr.bit.b2
#define     abt_g1irf         g1irf_addr.bit.b3
#define     irf0_g1irf        g1irf_addr.bit.b4
#define     irf1_g1irf        g1irf_addr.bit.b5
#define     irf2_g1irf        g1irf_addr.bit.b6
#define     irf3_g1irf        g1irf_addr.bit.b7

/*------------------------------------------------------
    Group 1 receive data register
------------------------------------------------------*/
/* union byte_def g1dr_addr;
#define     g1dr       g1dr_addr.byte
*/

/*------------------------------------------------------
    Group 1 SI/O transmitting buffer register
------------------------------------------------------*/
union byte_def g1tb_addr;
#define     g1tb       g1tb_addr.byte

/*------------------------------------------------------
    Group 1 data compare register 0
------------------------------------------------------*/
union byte_def g1cmp0_addr;
#define     g1cmp0       g1cmp0_addr.byte

/*------------------------------------------------------
    Group 1 data compare register 1
------------------------------------------------------*/
union byte_def g1cmp1_addr;
#define     g1cmp1       g1cmp1_addr.byte

/*------------------------------------------------------
    Group 1 data compare register 2
------------------------------------------------------*/
union byte_def g1cmp2_addr;
#define     g1cmp2       g1cmp2_addr.byte

/*------------------------------------------------------
    Group 1 data compare register 3
------------------------------------------------------*/
union byte_def g1cmp3_addr;
#define     g1cmp3       g1cmp3_addr.byte

/*------------------------------------------------------
    Group 1 data mask register 0
------------------------------------------------------*/
union byte_def g1msk0_addr;
#define     g1msk0       g1msk0_addr.byte

/*------------------------------------------------------
    Group 1 data mask register 1
------------------------------------------------------*/
union byte_def g1msk1_addr;
#define     g1msk1       g1msk1_addr.byte

/*------------------------------------------------------
    Group 1 transmit output register
------------------------------------------------------*/
union byte_def g1to_addr;
#define     g1to       g1to_addr.byte

/*------------------------------------------------------
    Group 1 receive input register
------------------------------------------------------*/
union byte_def g1ri_addr;
#define     g1ri       g1ri_addr.byte


/*------------------------------------------------------
    Group 2 base timer control register 0
------------------------------------------------------*/
union byte_def g2bcr0_addr;
#define     g2bcr0       g2bcr0_addr.byte

#define     bck0_g2bcr0        g2bcr0_addr.bit.b0
#define     bck1_g2bcr0        g2bcr0_addr.bit.b1
#define     div0_g2bcr0        g2bcr0_addr.bit.b2
#define     div1_g2bcr0        g2bcr0_addr.bit.b3
#define     div2_g2bcr0        g2bcr0_addr.bit.b4
#define     div3_g2bcr0        g2bcr0_addr.bit.b5
#define     div4_g2bcr0        g2bcr0_addr.bit.b6
#define     it_g2bcr0          g2bcr0_addr.bit.b7

/*------------------------------------------------------
    Group 2 base timer control register 1
------------------------------------------------------*/
union byte_def g2bcr1_addr;
#define     g2bcr1       g2bcr1_addr.byte

#define     rst0_g2bcr1        g2bcr1_addr.bit.b0
#define     rst1_g2bcr1        g2bcr1_addr.bit.b1
#define     rst2_g2bcr1        g2bcr1_addr.bit.b2
//#define		rst3_g2bcr1		   g2bcr1_addr.bit.b3
#define     bst_g2bcr1         g2bcr1_addr.bit.b4
//#define		ud0_g2bcr1		   g2bcr1_addr.bit.b5
//#define		ud1_g2bcr1		   g2bcr1_addr.bit.b6
#define     prp_g2bcr1         g2bcr1_addr.bit.b7

/*------------------------------------------------------
    Group 2 waveform generate control register 0
------------------------------------------------------*/
union byte_def g2pocr0_addr;
#define     g2pocr0       g2pocr0_addr.byte

#define     mod0_g2pocr0        g2pocr0_addr.bit.b0
#define     mod1_g2pocr0        g2pocr0_addr.bit.b1
#define     mod2_g2pocr0        g2pocr0_addr.bit.b2
#define     prt_g2pocr0         g2pocr0_addr.bit.b3
#define     ivl_g2pocr0         g2pocr0_addr.bit.b4
#define     rld_g2pocr0         g2pocr0_addr.bit.b5
#define     rtp_g2pocr0         g2pocr0_addr.bit.b6
#define     inv_g2pocr0         g2pocr0_addr.bit.b7

/*------------------------------------------------------
    Group 2 waveform generate control register 1
------------------------------------------------------*/
union byte_def g2pocr1_addr;
#define     g2pocr1       g2pocr1_addr.byte

#define     mod0_g2pocr1        g2pocr1_addr.bit.b0
#define     mod1_g2pocr1        g2pocr1_addr.bit.b1
#define     mod2_g2pocr1        g2pocr1_addr.bit.b2
#define     prt_g2pocr1         g2pocr1_addr.bit.b3
#define     ivl_g2pocr1         g2pocr1_addr.bit.b4
#define     rld_g2pocr1         g2pocr1_addr.bit.b5
#define     rtp_g2pocr1         g2pocr1_addr.bit.b6
#define     inv_g2pocr1         g2pocr1_addr.bit.b7

/*------------------------------------------------------
    Group 2 waveform generate control register 2
------------------------------------------------------*/
union byte_def g2pocr2_addr;
#define     g2pocr2       g2pocr2_addr.byte

#define     mod0_g2pocr2        g2pocr2_addr.bit.b0
#define     mod1_g2pocr2        g2pocr2_addr.bit.b1
#define     mod2_g2pocr2        g2pocr2_addr.bit.b2
#define     prt_g2pocr2         g2pocr2_addr.bit.b3
#define     ivl_g2pocr2         g2pocr2_addr.bit.b4
#define     rld_g2pocr2         g2pocr2_addr.bit.b5
#define     rtp_g2pocr2         g2pocr2_addr.bit.b6
#define     inv_g2pocr2         g2pocr2_addr.bit.b7

/*------------------------------------------------------
    Group 2 waveform generate control register 3
------------------------------------------------------*/
union byte_def g2pocr3_addr;
#define     g2pocr3       g2pocr3_addr.byte

#define     mod0_g2pocr3        g2pocr3_addr.bit.b0
#define     mod1_g2pocr3        g2pocr3_addr.bit.b1
#define     mod2_g2pocr3        g2pocr3_addr.bit.b2
#define     prt_g2pocr3         g2pocr3_addr.bit.b3
#define     ivl_g2pocr3         g2pocr3_addr.bit.b4
#define     rld_g2pocr3         g2pocr3_addr.bit.b5
#define     rtp_g2pocr3         g2pocr3_addr.bit.b6
#define     inv_g2pocr3         g2pocr3_addr.bit.b7

/*------------------------------------------------------
    Group 2 waveform generate control register 4
------------------------------------------------------*/
union byte_def g2pocr4_addr;
#define     g2pocr4       g2pocr4_addr.byte

#define     mod0_g2pocr4        g2pocr4_addr.bit.b0
#define     mod1_g2pocr4        g2pocr4_addr.bit.b1
#define     mod2_g2pocr4        g2pocr4_addr.bit.b2
#define     prt_g2pocr4         g2pocr4_addr.bit.b3
#define     ivl_g2pocr4         g2pocr4_addr.bit.b4
#define     rld_g2pocr4         g2pocr4_addr.bit.b5
#define     rtp_g2pocr4         g2pocr4_addr.bit.b6
#define     inv_g2pocr4         g2pocr4_addr.bit.b7

/*------------------------------------------------------
    Group 2 waveform generate control register 5
------------------------------------------------------*/
union byte_def g2pocr5_addr;
#define     g2pocr5       g2pocr5_addr.byte

#define     mod0_g2pocr5        g2pocr5_addr.bit.b0
#define     mod1_g2pocr5        g2pocr5_addr.bit.b1
#define     mod2_g2pocr5        g2pocr5_addr.bit.b2
#define     prt_g2pocr5         g2pocr5_addr.bit.b3
#define     ivl_g2pocr5         g2pocr5_addr.bit.b4
#define     rld_g2pocr5         g2pocr5_addr.bit.b5
#define     rtp_g2pocr5         g2pocr5_addr.bit.b6
#define     inv_g2pocr5         g2pocr5_addr.bit.b7

/*------------------------------------------------------
    Group 2 waveform generate control register 6
------------------------------------------------------*/
union byte_def g2pocr6_addr;
#define     g2pocr6       g2pocr6_addr.byte

#define     mod0_g2pocr6        g2pocr6_addr.bit.b0
#define     mod1_g2pocr6        g2pocr6_addr.bit.b1
#define     mod2_g2pocr6        g2pocr6_addr.bit.b2
#define     prt_g2pocr6         g2pocr6_addr.bit.b3
#define     ivl_g2pocr6         g2pocr6_addr.bit.b4
#define     rld_g2pocr6         g2pocr6_addr.bit.b5
#define     rtp_g2pocr6         g2pocr6_addr.bit.b6
#define     inv_g2pocr6         g2pocr6_addr.bit.b7

/*------------------------------------------------------
    Group 2 waveform generate control register 7
------------------------------------------------------*/
union byte_def g2pocr7_addr;
#define     g2pocr7       g2pocr7_addr.byte

#define     mod0_g2pocr7        g2pocr7_addr.bit.b0
#define     mod1_g2pocr7        g2pocr7_addr.bit.b1
#define     mod2_g2pocr7        g2pocr7_addr.bit.b2
#define     prt_g2pocr7         g2pocr7_addr.bit.b3
#define     ivl_g2pocr7         g2pocr7_addr.bit.b4
#define     rld_g2pocr7         g2pocr7_addr.bit.b5
#define     rtp_g2pocr7         g2pocr7_addr.bit.b6
#define     inv_g2pocr7         g2pocr7_addr.bit.b7

/*------------------------------------------------------
    Group 2 RTP output buffer register
------------------------------------------------------*/
union byte_def g2rtp_addr;
#define     g2rtp       g2rtp_addr.byte

#define     rtp0_g2rtp        g2rtp_addr.bit.b0
#define     rtp1_g2rtp        g2rtp_addr.bit.b1
#define     rtp2_g2rtp        g2rtp_addr.bit.b2
#define     rtp3_g2rtp        g2rtp_addr.bit.b3
#define     rtp4_g2rtp        g2rtp_addr.bit.b4
#define     rtp5_g2rtp        g2rtp_addr.bit.b5
#define     rtp6_g2rtp        g2rtp_addr.bit.b6
#define     rtp7_g2rtp        g2rtp_addr.bit.b7

/*------------------------------------------------------
    Group 2 function enable register
------------------------------------------------------*/
union byte_def g2fe_addr;
#define     g2fe       g2fe_addr.byte

#define     ife0_g2fe        g2fe_addr.bit.b0
#define     ife1_g2fe        g2fe_addr.bit.b1
#define     ife2_g2fe        g2fe_addr.bit.b2
#define     ife3_g2fe        g2fe_addr.bit.b3
#define     ife4_g2fe        g2fe_addr.bit.b4
#define     ife5_g2fe        g2fe_addr.bit.b5
#define     ife6_g2fe        g2fe_addr.bit.b6
#define     ife7_g2fe        g2fe_addr.bit.b7

/*------------------------------------------------------
    Group 2 SI/O communication mode register
------------------------------------------------------*/
union byte_def g2mr_addr;
#define     g2mr       g2mr_addr.byte

#define     gmd0_g2mr         g2mr_addr.bit.b0
#define     gmd1_g2mr         g2mr_addr.bit.b1
#define     ckdir_g2mr        g2mr_addr.bit.b2
#define     uform_g2mr        g2mr_addr.bit.b6
#define     irs_g2mr          g2mr_addr.bit.b7

/*------------------------------------------------------
    Group 2 SI/O communication control register
------------------------------------------------------*/
union byte_def g2cr_addr;
#define     g2cr       g2cr_addr.byte

#define     te_g2cr             g2cr_addr.bit.b0
#define     txept_g2cr          g2cr_addr.bit.b1
#define     ti_g2cr             g2cr_addr.bit.b2
#define     re_g2cr             g2cr_addr.bit.b4
#define     ri_g2cr             g2cr_addr.bit.b5
#define     opol_g2cr           g2cr_addr.bit.b6
#define     ipol_g2cr           g2cr_addr.bit.b7

/*------------------------------------------------------
    Group 2 IEBus control register
------------------------------------------------------*/
union byte_def iecr_addr;
#define     iecr       iecr_addr.byte

#define     ieb            iecr_addr.bit.b0
#define     iets           iecr_addr.bit.b1
#define     iebbs          iecr_addr.bit.b2
#define     df             iecr_addr.bit.b6
#define     iem            iecr_addr.bit.b7

/*------------------------------------------------------
    Group 2 IEBus receive interrupt cause detect register
------------------------------------------------------*/
union byte_def ierif_addr;
#define     ierif       ierif_addr.byte

#define     iernf          ierif_addr.bit.b0
#define     iepar          ierif_addr.bit.b1
#define     iermb          ierif_addr.bit.b2
#define     iert           ierif_addr.bit.b3
#define     ieretc         ierif_addr.bit.b4

/*------------------------------------------------------
    Group 2 IEBus receive interrupt cause detect register
------------------------------------------------------*/
union byte_def ietif_addr;
#define     ietif       ietif_addr.byte

#define     ietnf          ietif_addr.bit.b0
#define     ieack          ietif_addr.bit.b1
#define     ietmb          ietif_addr.bit.b2
#define     iett           ietif_addr.bit.b3
#define     ieabl          ietif_addr.bit.b4

/*------------------------------------------------------
    Group 3 base timer control register 0
------------------------------------------------------*/
union byte_def g3bcr0_addr;
#define     g3bcr0       g3bcr0_addr.byte

#define     bck0_g3bcr0        g3bcr0_addr.bit.b0
#define     bck1_g3bcr0        g3bcr0_addr.bit.b1
#define     div0_g3bcr0        g3bcr0_addr.bit.b2
#define     div1_g3bcr0        g3bcr0_addr.bit.b3
#define     div2_g3bcr0        g3bcr0_addr.bit.b4
#define     div3_g3bcr0        g3bcr0_addr.bit.b5
#define     div4_g3bcr0        g3bcr0_addr.bit.b6
#define     it_g3bcr0          g3bcr0_addr.bit.b7

/*------------------------------------------------------
    Group 3 base timer control register 1
------------------------------------------------------*/
union byte_def g3bcr1_addr;
#define     g3bcr1       g3bcr1_addr.byte

#define     rst0_g3bcr1        g3bcr1_addr.bit.b0
#define     rst1_g3bcr1        g3bcr1_addr.bit.b1
#define     rst2_g3bcr1        g3bcr1_addr.bit.b2
//#define		rst3_g3bcr1		   g3bcr1_addr.bit.b3
#define     bts_g3bcr1         g3bcr1_addr.bit.b4
//#define		ud0_g3bcr1		   g3bcr1_addr.bit.b5
//#define		ud1_g3bcr1		   g3bcr1_addr.bit.b6
#define     prp_g3bcr1         g3bcr1_addr.bit.b7

/*------------------------------------------------------
    Group 3 waveform generate control register 0
------------------------------------------------------*/
union byte_def g3pocr0_addr;
#define     g3pocr0       g3pocr0_addr.byte

#define     mod0_g3pocr0        g3pocr0_addr.bit.b0
#define     mod1_g3pocr0        g3pocr0_addr.bit.b1
#define     mod2_g3pocr0        g3pocr0_addr.bit.b2
#define     prt_g3pocr0         g3pocr0_addr.bit.b3
#define     ivl_g3pocr0         g3pocr0_addr.bit.b4
#define     rld_g3pocr0         g3pocr0_addr.bit.b5
#define     rtp_g3pocr0         g3pocr0_addr.bit.b6
#define     inv_g3pocr0         g3pocr0_addr.bit.b7


/*------------------------------------------------------
    Group 3 waveform generate control register 1
------------------------------------------------------*/
union byte_def g3pocr1_addr;
#define     g3pocr1       g3pocr1_addr.byte

#define     mod0_g3pocr1        g3pocr1_addr.bit.b0
#define     mod1_g3pocr1        g3pocr1_addr.bit.b1
#define     mod2_g3pocr1        g3pocr1_addr.bit.b2
#define     prt_g3pocr1         g3pocr1_addr.bit.b3
#define     ivl_g3pocr1         g3pocr1_addr.bit.b4
#define     rld_g3pocr1         g3pocr1_addr.bit.b5
#define     rtp_g3pocr1         g3pocr1_addr.bit.b6
#define     inv_g3pocr1         g3pocr1_addr.bit.b7

/*------------------------------------------------------
    Group 3 waveform generate control register 2
------------------------------------------------------*/
union byte_def g3pocr2_addr;
#define     g3pocr2       g3pocr2_addr.byte

#define     mod0_g3pocr2        g3pocr2_addr.bit.b0
#define     mod1_g3pocr2        g3pocr2_addr.bit.b1
#define     mod2_g3pocr2        g3pocr2_addr.bit.b2
#define     prt_g3pocr2         g3pocr2_addr.bit.b3
#define     ivl_g3pocr2         g3pocr2_addr.bit.b4
#define     rld_g3pocr2         g3pocr2_addr.bit.b5
#define     rtp_g3pocr2         g3pocr2_addr.bit.b6
#define     inv_g3pocr2         g3pocr2_addr.bit.b7

/*------------------------------------------------------
    Group 3 waveform generate control register 3
------------------------------------------------------*/
union byte_def g3pocr3_addr;
#define     g3pocr3       g3pocr3_addr.byte

#define     mod0_g3pocr3        g3pocr3_addr.bit.b0
#define     mod1_g3pocr3        g3pocr3_addr.bit.b1
#define     mod2_g3pocr3        g3pocr3_addr.bit.b2
#define     prt_g3pocr3         g3pocr3_addr.bit.b3
#define     ivl_g3pocr3         g3pocr3_addr.bit.b4
#define     rld_g3pocr3         g3pocr3_addr.bit.b5
#define     rtp_g3pocr3         g3pocr3_addr.bit.b6
#define     inv_g3pocr3         g3pocr3_addr.bit.b7

/*------------------------------------------------------
    Group 3 waveform generate control register 4
------------------------------------------------------*/
union byte_def g3pocr4_addr;
#define     g3pocr4       g3pocr4_addr.byte

#define     mod0_g3pocr4        g3pocr4_addr.bit.b0
#define     mod1_g3pocr4        g3pocr4_addr.bit.b1
#define     mod2_g3pocr4        g3pocr4_addr.bit.b2
#define     prt_g3pocr4         g3pocr4_addr.bit.b3
#define     ivl_g3pocr4         g3pocr4_addr.bit.b4
#define     rld_g3pocr4         g3pocr4_addr.bit.b5
#define     rtp_g3pocr4         g3pocr4_addr.bit.b6
#define     inv_g3pocr4         g3pocr4_addr.bit.b7

/*------------------------------------------------------
    Group 3 waveform generate control register 5
------------------------------------------------------*/
union byte_def g3pocr5_addr;
#define     g3pocr5       g3pocr5_addr.byte

#define     mod0_g3pocr5        g3pocr5_addr.bit.b0
#define     mod1_g3pocr5        g3pocr5_addr.bit.b1
#define     mod2_g3pocr5        g3pocr5_addr.bit.b2
#define     prt_g3pocr5         g3pocr5_addr.bit.b3
#define     ivl_g3pocr5         g3pocr5_addr.bit.b4
#define     rld_g3pocr5         g3pocr5_addr.bit.b5
#define     rtp_g3pocr5         g3pocr5_addr.bit.b6
#define     inv_g3pocr5         g3pocr5_addr.bit.b7

/*------------------------------------------------------
    Group 3 waveform generate control register 6
------------------------------------------------------*/
union byte_def g3pocr6_addr;
#define     g3pocr6       g3pocr6_addr.byte

#define     mod0_g3pocr6        g3pocr6_addr.bit.b0
#define     mod1_g3pocr6        g3pocr6_addr.bit.b1
#define     mod2_g3pocr6        g3pocr6_addr.bit.b2
#define     prt_g3pocr6         g3pocr6_addr.bit.b3
#define     ivl_g3pocr6         g3pocr6_addr.bit.b4
#define     rld_g3pocr6         g3pocr6_addr.bit.b5
#define     rtp_g3pocr6         g3pocr6_addr.bit.b6
#define     inv_g3pocr6         g3pocr6_addr.bit.b7

/*------------------------------------------------------
    Group 3 waveform generate control register 7
------------------------------------------------------*/
union byte_def g3pocr7_addr;
#define     g3pocr7       g3pocr7_addr.byte

#define     mod0_g3pocr7        g3pocr7_addr.bit.b0
#define     mod1_g3pocr7        g3pocr7_addr.bit.b1
#define     mod2_g3pocr7        g3pocr7_addr.bit.b2
#define     prt_g3pocr7         g3pocr7_addr.bit.b3
#define     ivl_g3pocr7         g3pocr7_addr.bit.b4
#define     rld_g3pocr7         g3pocr7_addr.bit.b5
#define     rtp_g3pocr7         g3pocr7_addr.bit.b6
#define     inv_g3pocr7         g3pocr7_addr.bit.b7

/*------------------------------------------------------
    Group 3 RTP output buffer register
------------------------------------------------------*/
union byte_def g3rtp_addr;
#define     g3rtp       g3rtp_addr.byte

#define     rtp0_g3rtp        g3rtp_addr.bit.b0
#define     rtp1_g3rtp        g3rtp_addr.bit.b1
#define     rtp2_g3rtp        g3rtp_addr.bit.b2
#define     rtp3_g3rtp        g3rtp_addr.bit.b3
#define     rtp4_g3rtp        g3rtp_addr.bit.b4
#define     rtp5_g3rtp        g3rtp_addr.bit.b5
#define     rtp6_g3rtp        g3rtp_addr.bit.b6
#define     rtp7_g3rtp        g3rtp_addr.bit.b7

/*------------------------------------------------------
    Group 3 function enable register
------------------------------------------------------*/
union byte_def g3fe_addr;
#define     g3fe       g3fe_addr.byte

#define     ife0_g3fe        g3fe_addr.bit.b0
#define     ife1_g3fe        g3fe_addr.bit.b1
#define     ife2_g3fe        g3fe_addr.bit.b2
#define     ife3_g3fe        g3fe_addr.bit.b3
#define     ife4_g3fe        g3fe_addr.bit.b4
#define     ife5_g3fe        g3fe_addr.bit.b5
#define     ife6_g3fe        g3fe_addr.bit.b6
#define     ife7_g3fe        g3fe_addr.bit.b7

/*------------------------------------------------------
    Group 3 SI/O communication mode register
------------------------------------------------------*/
union byte_def g3mr_addr;
#define     g3mr       g3mr_addr.byte

#define     gmd0_g3mr        g3mr_addr.bit.b0
#define     gmd1_g3mr        g3mr_addr.bit.b1
#define     ckdir_g3mr       g3mr_addr.bit.b2
#define     tld_g3mr         g3mr_addr.bit.b3
#define     uform_g3mr       g3mr_addr.bit.b6
#define     irs_g3mr         g3mr_addr.bit.b7

/*------------------------------------------------------
    Group 3 SI/O communication control register
------------------------------------------------------*/
union byte_def g3cr_addr;
#define     g3cr       g3cr_addr.byte

#define     te_g3cr        g3cr_addr.bit.b0
#define     txept_g3cr     g3cr_addr.bit.b1
#define     ti_g3cr        g3cr_addr.bit.b2
#define     re_g3cr        g3cr_addr.bit.b4
#define     ri_g3cr        g3cr_addr.bit.b5
#define     opol_g3cr      g3cr_addr.bit.b6
#define     ipol_g3cr      g3cr_addr.bit.b7

/*------------------------------------------------------
    Group 3 high-speed HDLC communication control register 1
------------------------------------------------------*/
//union byte_def hdlc1_addr;
//#define     hdlc1       hdlc1_addr.byte

//#define     dfcs_hdlc1          hdlc1_addr.bit.b0
//#define     hdlc16_hdlc1  	    hdlc1_addr.bit.b6
//#define     hdlc17_hdlc1        hdlc1_addr.bit.b7

/*------------------------------------------------------
    Group 3 high-speed HDLC communication control register
------------------------------------------------------*/
union byte_def hdlc_addr;
#define     hdlc       hdlc_addr.byte

#define     df_hdlc       hdlc_addr.bit.b0
#define     cnv_hdlc      hdlc_addr.bit.b1
#define     fn0_hdlc      hdlc_addr.bit.b2
#define     fn1_hdlc      hdlc_addr.bit.b3
#define     bse_hdlc      hdlc_addr.bit.b4
//#define     bt0_hdlc      hdlc_addr.bit.b4
//#define     bt1_hdlc      hdlc_addr.bit.b5
//#define     tdn_hdlc      hdlc_addr.bit.b6
#define     ace_hdlc      hdlc_addr.bit.b7

/*------------------------------------------------------
    Group 3 si/o communication flag register
------------------------------------------------------*/
union byte_def g3flg_addr;
#define     g3flg       g3flg_addr.byte

#define     roer_g3flg    g3flg_addr.bit.b0
#define     rnf_g3flg     g3flg_addr.bit.b1
#define     abt_g3flg     g3flg_addr.bit.b2
#define     crc_g3flg     g3flg_addr.bit.b3
//#define     odd_g3flg     g3flg_addr.bit.b4
#define     add_g3flg     g3flg_addr.bit.b5
#define     toer_g3flg    g3flg_addr.bit.b6
#define     tnf_g3flg     g3flg_addr.bit.b7


/*------------------------------------------------------
    Input function select register
------------------------------------------------------*/
union byte_def ips_addr;
#define     ips       ips_addr.byte

#define     ips0     ips_addr.bit.b0
#define     ips1     ips_addr.bit.b1
#define     ips4     ips_addr.bit.b4
#define     ips5     ips_addr.bit.b5
#define     ips6     ips_addr.bit.b6
#define     ips7     ips_addr.bit.b7

/*------------------------------------------------------
    VDC control  register 0
------------------------------------------------------*/
union byte_def vdc0_addr;
#define     vdc0       vdc0_addr.byte

#define     vdc00     vdc0_addr.bit.b0
#define     vdc01     vdc0_addr.bit.b1
#define     vdc02     vdc0_addr.bit.b2
#define     vdc03     vdc0_addr.bit.b3
#define     vdc04     vdc0_addr.bit.b4
#define     vdc05     vdc0_addr.bit.b5
#define     vdc06     vdc0_addr.bit.b6
#define     vdc07     vdc0_addr.bit.b7

/*------------------------------------------------------
    VDC control  register 1
------------------------------------------------------*/
union byte_def vdc1_addr;
#define     vdc1       vdc1_addr.byte

#define     vdc10     vdc1_addr.bit.b0
#define     vdc11     vdc1_addr.bit.b1
#define     vdc12     vdc1_addr.bit.b2
#define     vdc13     vdc1_addr.bit.b3
#define     vdc14     vdc1_addr.bit.b4
#define     vdc15     vdc1_addr.bit.b5
#define     vdc16     vdc1_addr.bit.b6
#define     vdc17     vdc1_addr.bit.b7

/*------------------------------------------------------
	Emulator Exclusive Use Interrupt
		Distinction Register
------------------------------------------------------*/
union byte_def eitd_addr;
#define     eitd       eitd_addr.byte

#define     eitd0     eitd_addr.bit.b0
#define     eitd1     eitd_addr.bit.b1

/*------------------------------------------------------
	Emulator Exclusive Use Protect Register
------------------------------------------------------*/
union byte_def eprr_addr;
#define     eprr       eprr_addr.byte

#define     eprr0     eprr_addr.bit.b0

/*------------------------------------------------------
	Emulator Setting Register
------------------------------------------------------*/
union byte_def emu_addr;
#define     emu       emu_addr.byte

#define     emu0     emu_addr.bit.b0
#define     emu1     emu_addr.bit.b1
#define     emu2     emu_addr.bit.b2

/*------------------------------------------------------
	ROM Area Setting Register
------------------------------------------------------*/
union byte_def roa_addr;
#define     roa       roa_addr.byte

#define     roa0     roa_addr.bit.b0
#define     roa1     roa_addr.bit.b1
#define     roa2     roa_addr.bit.b2

/*------------------------------------------------------
	Debugging Monitor Setting Register
------------------------------------------------------*/
union byte_def dba_addr;
#define     dba       dba_addr.byte

/*------------------------------------------------------
	Expansion Area Setting Register 0
------------------------------------------------------*/
union byte_def exa0_addr;
#define     exa0       exa0_addr.byte

#define     exa00     exa0_addr.bit.b0
#define     exa01     exa0_addr.bit.b1
#define     exa02     exa0_addr.bit.b2
#define     exa03     exa0_addr.bit.b3
#define     exa04     exa0_addr.bit.b4
#define     exa05     exa0_addr.bit.b5
#define     exa06     exa0_addr.bit.b6
#define     exa07     exa0_addr.bit.b7

/*------------------------------------------------------
	Expansion Area Setting Register 1
------------------------------------------------------*/
union byte_def exa1_addr;
#define     exa1       exa1_addr.byte

#define     exa10     exa1_addr.bit.b0
#define     exa11     exa1_addr.bit.b1
#define     exa12     exa1_addr.bit.b2
#define     exa13     exa1_addr.bit.b3
#define     exa14     exa1_addr.bit.b4
#define     exa15     exa1_addr.bit.b5
#define     exa16     exa1_addr.bit.b6
#define     exa17     exa1_addr.bit.b7

/*------------------------------------------------------
	Expansion Area Setting Register 2
------------------------------------------------------*/
union byte_def exa2_addr;
#define     exa2       exa2_addr.byte

#define     exa20     exa2_addr.bit.b0
#define     exa21     exa2_addr.bit.b1
#define     exa22     exa2_addr.bit.b2
#define     exa23     exa2_addr.bit.b3
#define     exa24     exa2_addr.bit.b4
#define     exa25     exa2_addr.bit.b5
#define     exa26     exa2_addr.bit.b6
#define     exa27     exa2_addr.bit.b7

/*------------------------------------------------------
	Expansion Area Setting Register 3
------------------------------------------------------*/
union byte_def exa3_addr;
#define     exa3       exa3_addr.byte

#define     exa30     exa3_addr.bit.b0
#define     exa31     exa3_addr.bit.b1
#define     exa32     exa3_addr.bit.b2
#define     exa33     exa3_addr.bit.b3
#define     exa34     exa3_addr.bit.b4
#define     exa35     exa3_addr.bit.b5
#define     exa36     exa3_addr.bit.b6
#define     exa37     exa3_addr.bit.b7

/*------------------------------------------------------
    Port P0
------------------------------------------------------*/
union byte_def p0_addr;
#define     p0      p0_addr.byte

#define     p0_0        p0_addr.bit.b0      /* Port P0  bit0 */
#define     p0_1        p0_addr.bit.b1      /* Port P0  bit1 */
#define     p0_2        p0_addr.bit.b2      /* Port P0  bit2 */
#define     p0_3        p0_addr.bit.b3      /* Port P0  bit3 */
#define     p0_4        p0_addr.bit.b4      /* Port P0  bit4 */
#define     p0_5        p0_addr.bit.b5      /* Port P0  bit5 */
#define     p0_6        p0_addr.bit.b6      /* Port P0  bit6 */
#define     p0_7        p0_addr.bit.b7      /* Port P0  bit7 */

/*------------------------------------------------------
    Port P0 direction register
------------------------------------------------------*/
union byte_def pd0_addr;
#define     pd0     pd0_addr.byte

#define     pd0_0       pd0_addr.bit.b0     /* P0 direction register  bit0 */
#define     pd0_1       pd0_addr.bit.b1     /* P0 direction register  bit1 */
#define     pd0_2       pd0_addr.bit.b2     /* P0 direction register  bit2 */
#define     pd0_3       pd0_addr.bit.b3     /* P0 direction register  bit3 */
#define     pd0_4       pd0_addr.bit.b4     /* P0 direction register  bit4 */
#define     pd0_5       pd0_addr.bit.b5     /* P0 direction register  bit5 */
#define     pd0_6       pd0_addr.bit.b6     /* P0 direction register  bit6 */
#define     pd0_7       pd0_addr.bit.b7     /* P0 direction register  bit7 */

/*------------------------------------------------------
    Port P1
------------------------------------------------------*/
union byte_def p1_addr;
#define     p1      p1_addr.byte

#define     p1_0        p1_addr.bit.b0      /* Port P1  bit0 */
#define     p1_1        p1_addr.bit.b1      /* Port P1  bit1 */
#define     p1_2        p1_addr.bit.b2      /* Port P1  bit2 */
#define     p1_3        p1_addr.bit.b3      /* Port P1  bit3 */
#define     p1_4        p1_addr.bit.b4      /* Port P1  bit4 */
#define     p1_5        p1_addr.bit.b5      /* Port P1  bit5 */
#define     p1_6        p1_addr.bit.b6      /* Port P1  bit6 */
#define     p1_7        p1_addr.bit.b7      /* Port P1  bit7 */

/*------------------------------------------------------
    Port P1 direction register
------------------------------------------------------*/
union byte_def pd1_addr;
#define     pd1     pd1_addr.byte

#define     pd1_0       pd1_addr.bit.b0     /* P1 direction register  bit0 */
#define     pd1_1       pd1_addr.bit.b1     /* P1 direction register  bit1 */
#define     pd1_2       pd1_addr.bit.b2     /* P1 direction register  bit2 */
#define     pd1_3       pd1_addr.bit.b3     /* P1 direction register  bit3 */
#define     pd1_4       pd1_addr.bit.b4     /* P1 direction register  bit4 */
#define     pd1_5       pd1_addr.bit.b5     /* P1 direction register  bit5 */
#define     pd1_6       pd1_addr.bit.b6     /* P1 direction register  bit6 */
#define     pd1_7       pd1_addr.bit.b7     /* P1 direction register  bit7 */

/*------------------------------------------------------
    Port P2
------------------------------------------------------*/
union byte_def p2_addr;
#define     p2      p2_addr.byte

#define     p2_0        p2_addr.bit.b0      /* Port P2  bit0 */
#define     p2_1        p2_addr.bit.b1      /* Port P2  bit1 */
#define     p2_2        p2_addr.bit.b2      /* Port P2  bit2 */
#define     p2_3        p2_addr.bit.b3      /* Port P2  bit3 */
#define     p2_4        p2_addr.bit.b4      /* Port P2  bit4 */
#define     p2_5        p2_addr.bit.b5      /* Port P2  bit5 */
#define     p2_6        p2_addr.bit.b6      /* Port P2  bit6 */
#define     p2_7        p2_addr.bit.b7      /* Port P2  bit7 */

/*------------------------------------------------------
    Port P2 direction register
------------------------------------------------------*/
union byte_def pd2_addr;
#define     pd2     pd2_addr.byte

#define     pd2_0       pd2_addr.bit.b0     /* P2 direction register  bit0 */
#define     pd2_1       pd2_addr.bit.b1     /* P2 direction register  bit1 */
#define     pd2_2       pd2_addr.bit.b2     /* P2 direction register  bit2 */
#define     pd2_3       pd2_addr.bit.b3     /* P2 direction register  bit3 */
#define     pd2_4       pd2_addr.bit.b4     /* P2 direction register  bit4 */
#define     pd2_5       pd2_addr.bit.b5     /* P2 direction register  bit5 */
#define     pd2_6       pd2_addr.bit.b6     /* P2 direction register  bit6 */
#define     pd2_7       pd2_addr.bit.b7     /* P2 direction register  bit7 */

/*------------------------------------------------------
    Port P3
------------------------------------------------------*/
union byte_def p3_addr;
#define     p3      p3_addr.byte

#define     p3_0        p3_addr.bit.b0      /* Port P3  bit0 */
#define     p3_1        p3_addr.bit.b1      /* Port P3  bit1 */
#define     p3_2        p3_addr.bit.b2      /* Port P3  bit2 */
#define     p3_3        p3_addr.bit.b3      /* Port P3  bit3 */
#define     p3_4        p3_addr.bit.b4      /* Port P3  bit4 */
#define     p3_5        p3_addr.bit.b5      /* Port P3  bit5 */
#define     p3_6        p3_addr.bit.b6      /* Port P3  bit6 */
#define     p3_7        p3_addr.bit.b7      /* Port P3  bit7 */

/*------------------------------------------------------
    Port P3 direction register
------------------------------------------------------*/
union byte_def pd3_addr;
#define     pd3     pd3_addr.byte

#define     pd3_0       pd3_addr.bit.b0     /* P3 direction register  bit0 */
#define     pd3_1       pd3_addr.bit.b1     /* P3 direction register  bit1 */
#define     pd3_2       pd3_addr.bit.b2     /* P3 direction register  bit2 */
#define     pd3_3       pd3_addr.bit.b3     /* P3 direction register  bit3 */
#define     pd3_4       pd3_addr.bit.b4     /* P3 direction register  bit4 */
#define     pd3_5       pd3_addr.bit.b5     /* P3 direction register  bit5 */
#define     pd3_6       pd3_addr.bit.b6     /* P3 direction register  bit6 */
#define     pd3_7       pd3_addr.bit.b7     /* P3 direction register  bit7 */

/*------------------------------------------------------
    Port P4
------------------------------------------------------*/
union byte_def p4_addr;
#define     p4      p4_addr.byte

#define     p4_0        p4_addr.bit.b0      /* Port P4  bit0 */
#define     p4_1        p4_addr.bit.b1      /* Port P4  bit1 */
#define     p4_2        p4_addr.bit.b2      /* Port P4  bit2 */
#define     p4_3        p4_addr.bit.b3      /* Port P4  bit3 */
#define     p4_4        p4_addr.bit.b4      /* Port P4  bit4 */
#define     p4_5        p4_addr.bit.b5      /* Port P4  bit5 */
#define     p4_6        p4_addr.bit.b6      /* Port P4  bit6 */
#define     p4_7        p4_addr.bit.b7      /* Port P4  bit7 */

/*------------------------------------------------------
    Port P4 direction register
------------------------------------------------------*/
union byte_def pd4_addr;
#define     pd4     pd4_addr.byte

#define     pd4_0       pd4_addr.bit.b0     /* P4 direction register  bit0 */
#define     pd4_1       pd4_addr.bit.b1     /* P4 direction register  bit1 */
#define     pd4_2       pd4_addr.bit.b2     /* P4 direction register  bit2 */
#define     pd4_3       pd4_addr.bit.b3     /* P4 direction register  bit3 */
#define     pd4_4       pd4_addr.bit.b4     /* P4 direction register  bit4 */
#define     pd4_5       pd4_addr.bit.b5     /* P4 direction register  bit5 */
#define     pd4_6       pd4_addr.bit.b6     /* P4 direction register  bit6 */
#define     pd4_7       pd4_addr.bit.b7     /* P4 direction register  bit7 */

/*------------------------------------------------------
    Port P5
------------------------------------------------------*/
union byte_def p5_addr;
#define     p5      p5_addr.byte

#define     p5_0        p5_addr.bit.b0      /* Port P5  bit0 */
#define     p5_1        p5_addr.bit.b1      /* Port P5  bit1 */
#define     p5_2        p5_addr.bit.b2      /* Port P5  bit2 */
#define     p5_3        p5_addr.bit.b3      /* Port P5  bit3 */
#define     p5_4        p5_addr.bit.b4      /* Port P5  bit4 */
#define     p5_5        p5_addr.bit.b5      /* Port P5  bit5 */
#define     p5_6        p5_addr.bit.b6      /* Port P5  bit6 */
#define     p5_7        p5_addr.bit.b7      /* Port P5  bit7 */

/*------------------------------------------------------
    Port P5 direction register
------------------------------------------------------*/
union byte_def pd5_addr;
#define     pd5     pd5_addr.byte

#define     pd5_0       pd5_addr.bit.b0     /* P5 direction register  bit0 */
#define     pd5_1       pd5_addr.bit.b1     /* P5 direction register  bit1 */
#define     pd5_2       pd5_addr.bit.b2     /* P5 direction register  bit2 */
#define     pd5_3       pd5_addr.bit.b3     /* P5 direction register  bit3 */
#define     pd5_4       pd5_addr.bit.b4     /* P5 direction register  bit4 */
#define     pd5_5       pd5_addr.bit.b5     /* P5 direction register  bit5 */
#define     pd5_6       pd5_addr.bit.b6     /* P5 direction register  bit6 */
#define     pd5_7       pd5_addr.bit.b7     /* P5 direction register  bit7 */

/*------------------------------------------------------
    Port P6
------------------------------------------------------*/
union byte_def p6_addr;
#define     p6      p6_addr.byte

#define     p6_0        p6_addr.bit.b0      /* Port P6  bit0 */
#define     p6_1        p6_addr.bit.b1      /* Port P6  bit1 */
#define     p6_2        p6_addr.bit.b2      /* Port P6  bit2 */
#define     p6_3        p6_addr.bit.b3      /* Port P6  bit3 */
#define     p6_4        p6_addr.bit.b4      /* Port P6  bit4 */
#define     p6_5        p6_addr.bit.b5      /* Port P6  bit5 */
#define     p6_6        p6_addr.bit.b6      /* Port P6  bit6 */
#define     p6_7        p6_addr.bit.b7      /* Port P6  bit7 */

/*------------------------------------------------------
    Port P6 direction register
------------------------------------------------------*/
union byte_def pd6_addr;
#define     pd6     pd6_addr.byte

#define     pd6_0       pd6_addr.bit.b0     /* P6 direction register  bit0 */
#define     pd6_1       pd6_addr.bit.b1     /* P6 direction register  bit1 */
#define     pd6_2       pd6_addr.bit.b2     /* P6 direction register  bit2 */
#define     pd6_3       pd6_addr.bit.b3     /* P6 direction register  bit3 */
#define     pd6_4       pd6_addr.bit.b4     /* P6 direction register  bit4 */
#define     pd6_5       pd6_addr.bit.b5     /* P6 direction register  bit5 */
#define     pd6_6       pd6_addr.bit.b6     /* P6 direction register  bit6 */
#define     pd6_7       pd6_addr.bit.b7     /* P6 direction register  bit7 */

/*------------------------------------------------------
    Port P7
------------------------------------------------------*/
union byte_def p7_addr;
#define     p7      p7_addr.byte

#define     p7_0        p7_addr.bit.b0      /* Port P7  bit0 */
#define     p7_1        p7_addr.bit.b1      /* Port P7  bit1 */
#define     p7_2        p7_addr.bit.b2      /* Port P7  bit2 */
#define     p7_3        p7_addr.bit.b3      /* Port P7  bit3 */
#define     p7_4        p7_addr.bit.b4      /* Port P7  bit4 */
#define     p7_5        p7_addr.bit.b5      /* Port P7  bit5 */
#define     p7_6        p7_addr.bit.b6      /* Port P7  bit6 */
#define     p7_7        p7_addr.bit.b7      /* Port P7  bit7 */

/*------------------------------------------------------
    Port P7 direction register
------------------------------------------------------*/
union byte_def pd7_addr;
#define     pd7     pd7_addr.byte

#define     pd7_0       pd7_addr.bit.b0     /* P7 direction register  bit0 */
#define     pd7_1       pd7_addr.bit.b1     /* P7 direction register  bit1 */
#define     pd7_2       pd7_addr.bit.b2     /* P7 direction register  bit2 */
#define     pd7_3       pd7_addr.bit.b3     /* P7 direction register  bit3 */
#define     pd7_4       pd7_addr.bit.b4     /* P7 direction register  bit4 */
#define     pd7_5       pd7_addr.bit.b5     /* P7 direction register  bit5 */
#define     pd7_6       pd7_addr.bit.b6     /* P7 direction register  bit6 */
#define     pd7_7       pd7_addr.bit.b7     /* P7 direction register  bit7 */

/*------------------------------------------------------
    Port P8
------------------------------------------------------*/
union byte_def p8_addr;
#define     p8      p8_addr.byte

#define     p8_0        p8_addr.bit.b0      /* Port P8  bit0 */
#define     p8_1        p8_addr.bit.b1      /* Port P8  bit1 */
#define     p8_2        p8_addr.bit.b2      /* Port P8  bit2 */
#define     p8_3        p8_addr.bit.b3      /* Port P8  bit3 */
#define     p8_4        p8_addr.bit.b4      /* Port P8  bit4 */
#define     p8_5        p8_addr.bit.b5      /* Port P8  bit5 */
#define     p8_6        p8_addr.bit.b6      /* Port P8  bit6 */
#define     p8_7        p8_addr.bit.b7      /* Port P8  bit7 */

/*------------------------------------------------------
    Port P8 direction register
------------------------------------------------------*/
union byte_def pd8_addr;
#define     pd8     pd8_addr.byte

#define     pd8_0       pd8_addr.bit.b0     /* P8 direction register  bit0 */
#define     pd8_1       pd8_addr.bit.b1     /* P8 direction register  bit1 */
#define     pd8_2       pd8_addr.bit.b2     /* P8 direction register  bit2 */
#define     pd8_3       pd8_addr.bit.b3     /* P8 direction register  bit3 */
#define     pd8_4       pd8_addr.bit.b4     /* P8 direction register  bit4 */
#define     pd8_6       pd8_addr.bit.b6     /* P8 direction register  bit6 */
#define     pd8_7       pd8_addr.bit.b7     /* P8 direction register  bit7 */

/*------------------------------------------------------
    Port P9
------------------------------------------------------*/
union byte_def p9_addr;
#define     p9      p9_addr.byte

#define     p9_0        p9_addr.bit.b0      /* Port P9  bit0 */
#define     p9_1        p9_addr.bit.b1      /* Port P9  bit1 */
#define     p9_2        p9_addr.bit.b2      /* Port P9  bit2 */
#define     p9_3        p9_addr.bit.b3      /* Port P9  bit3 */
#define     p9_4        p9_addr.bit.b4      /* Port P9  bit4 */
#define     p9_5        p9_addr.bit.b5      /* Port P9  bit5 */
#define     p9_6        p9_addr.bit.b6      /* Port P9  bit6 */
#define     p9_7        p9_addr.bit.b7      /* Port P9  bit7 */

/*------------------------------------------------------
    Port P9 direction register
------------------------------------------------------*/
union byte_def pd9_addr;
#define     pd9     pd9_addr.byte

#define     pd9_0       pd9_addr.bit.b0     /* P9 direction register  bit0 */
#define     pd9_1       pd9_addr.bit.b1     /* P9 direction register  bit1 */
#define     pd9_2       pd9_addr.bit.b2     /* P9 direction register  bit2 */
#define     pd9_3       pd9_addr.bit.b3     /* P9 direction register  bit3 */
#define     pd9_4       pd9_addr.bit.b4     /* P9 direction register  bit4 */
#define     pd9_5       pd9_addr.bit.b5     /* P9 direction register  bit5 */
#define     pd9_6       pd9_addr.bit.b6     /* P9 direction register  bit6 */
#define     pd9_7       pd9_addr.bit.b7     /* P9 direction register  bit7 */

/*------------------------------------------------------
    Port P10
------------------------------------------------------*/
union byte_def p10_addr;
#define     p10     p10_addr.byte

#define     p10_0       p10_addr.bit.b0     /* Port P10  bit0 */
#define     p10_1       p10_addr.bit.b1     /* Port P10  bit1 */
#define     p10_2       p10_addr.bit.b2     /* Port P10  bit2 */
#define     p10_3       p10_addr.bit.b3     /* Port P10  bit3 */
#define     p10_4       p10_addr.bit.b4     /* Port P10  bit4 */
#define     p10_5       p10_addr.bit.b5     /* Port P10  bit5 */
#define     p10_6       p10_addr.bit.b6     /* Port P10  bit6 */
#define     p10_7       p10_addr.bit.b7     /* Port P10  bit7 */

/*------------------------------------------------------
    Port P10 direction register
------------------------------------------------------*/
union byte_def pd10_addr;
#define     pd10        pd10_addr.byte

#define     pd10_0      pd10_addr.bit.b0    /* P10 direction register  bit0 */
#define     pd10_1      pd10_addr.bit.b1    /* P10 direction register  bit1 */
#define     pd10_2      pd10_addr.bit.b2    /* P10 direction register  bit2 */
#define     pd10_3      pd10_addr.bit.b3    /* P10 direction register  bit3 */
#define     pd10_4      pd10_addr.bit.b4    /* P10 direction register  bit4 */
#define     pd10_5      pd10_addr.bit.b5    /* P10 direction register  bit5 */
#define     pd10_6      pd10_addr.bit.b6    /* P10 direction register  bit6 */
#define     pd10_7      pd10_addr.bit.b7    /* P10 direction register  bit7 */

/*------------------------------------------------------
    Port P11
------------------------------------------------------*/
union byte_def p11_addr;
#define     p11     p11_addr.byte

#define     p11_0       p11_addr.bit.b0     /* Port P11  bit0 */
#define     p11_1       p11_addr.bit.b1     /* Port P11  bit1 */
#define     p11_2       p11_addr.bit.b2     /* Port P11  bit2 */
#define     p11_3       p11_addr.bit.b3     /* Port P11  bit3 */
#define     p11_4       p11_addr.bit.b4     /* Port P11  bit4 */

/*------------------------------------------------------
    Port P11 direction register
------------------------------------------------------*/
union byte_def pd11_addr;
#define     pd11        pd11_addr.byte

#define     pd11_0      pd11_addr.bit.b0    /* P11 direction register  bit0 */
#define     pd11_1      pd11_addr.bit.b1    /* P11 direction register  bit1 */
#define     pd11_2      pd11_addr.bit.b2    /* P11 direction register  bit2 */
#define     pd11_3      pd11_addr.bit.b3    /* P11 direction register  bit3 */
#define     pd11_4      pd11_addr.bit.b4    /* P11 direction register  bit4 */

/*------------------------------------------------------
    Port P12
------------------------------------------------------*/
union byte_def p12_addr;
#define     p12     p12_addr.byte

#define     p12_0       p12_addr.bit.b0     /* Port P12  bit0 */
#define     p12_1       p12_addr.bit.b1     /* Port P12  bit1 */
#define     p12_2       p12_addr.bit.b2     /* Port P12  bit2 */
#define     p12_3       p12_addr.bit.b3     /* Port P12  bit3 */
#define     p12_4       p12_addr.bit.b4     /* Port P12  bit4 */
#define     p12_5       p12_addr.bit.b5     /* Port P12  bit5 */
#define     p12_6       p12_addr.bit.b6     /* Port P12  bit6 */
#define     p12_7       p12_addr.bit.b7     /* Port P12  bit7 */

/*------------------------------------------------------
    Port P12 direction register
------------------------------------------------------*/
union byte_def pd12_addr;
#define     pd12        pd12_addr.byte

#define     pd12_0      pd12_addr.bit.b0    /* P12 direction register  bit0 */
#define     pd12_1      pd12_addr.bit.b1    /* P12 direction register  bit1 */
#define     pd12_2      pd12_addr.bit.b2    /* P12 direction register  bit2 */
#define     pd12_3      pd12_addr.bit.b3    /* P12 direction register  bit3 */
#define     pd12_4      pd12_addr.bit.b4    /* P12 direction register  bit4 */
#define     pd12_5      pd12_addr.bit.b5    /* P12 direction register  bit5 */
#define     pd12_6      pd12_addr.bit.b6    /* P12 direction register  bit6 */
#define     pd12_7      pd12_addr.bit.b7    /* P12 direction register  bit7 */

/*------------------------------------------------------
    Port P13
------------------------------------------------------*/
union byte_def p13_addr;
#define     p13     p13_addr.byte

#define     p13_0       p13_addr.bit.b0     /* Port P13  bit0 */
#define     p13_1       p13_addr.bit.b1     /* Port P13  bit1 */
#define     p13_2       p13_addr.bit.b2     /* Port P13  bit2 */
#define     p13_3       p13_addr.bit.b3     /* Port P13  bit3 */
#define     p13_4       p13_addr.bit.b4     /* Port P13  bit4 */
#define     p13_5       p13_addr.bit.b5     /* Port P13  bit5 */
#define     p13_6       p13_addr.bit.b6     /* Port P13  bit6 */
#define     p13_7       p13_addr.bit.b7     /* Port P13  bit7 */

/*------------------------------------------------------
    Port P13 direction register
------------------------------------------------------*/
union byte_def pd13_addr;
#define     pd13        pd13_addr.byte

#define     pd13_0      pd13_addr.bit.b0    /* P13 direction register  bit0 */
#define     pd13_1      pd13_addr.bit.b1    /* P13 direction register  bit1 */
#define     pd13_2      pd13_addr.bit.b2    /* P13 direction register  bit2 */
#define     pd13_3      pd13_addr.bit.b3    /* P13 direction register  bit3 */
#define     pd13_4      pd13_addr.bit.b4    /* P13 direction register  bit4 */
#define     pd13_5      pd13_addr.bit.b5    /* P13 direction register  bit5 */
#define     pd13_6      pd13_addr.bit.b6    /* P13 direction register  bit6 */
#define     pd13_7      pd13_addr.bit.b7    /* P13 direction register  bit7 */

/*------------------------------------------------------
    Port P14
------------------------------------------------------*/
union byte_def p14_addr;
#define     p14     p14_addr.byte

#define     p14_0       p14_addr.bit.b0     /* Port P14  bit0 */
#define     p14_1       p14_addr.bit.b1     /* Port P14  bit1 */
#define     p14_2       p14_addr.bit.b2     /* Port P14  bit2 */
#define     p14_3       p14_addr.bit.b3     /* Port P14  bit3 */
#define     p14_4       p14_addr.bit.b4     /* Port P14  bit4 */
#define     p14_5       p14_addr.bit.b5     /* Port P14  bit5 */
#define     p14_6       p14_addr.bit.b6     /* Port P14  bit6 */

/*------------------------------------------------------
    Port P14 direction register
------------------------------------------------------*/
union byte_def pd14_addr;
#define     pd14        pd14_addr.byte

#define     pd14_0      pd14_addr.bit.b0    /* P14 direction register  bit0 */
#define     pd14_1      pd14_addr.bit.b1    /* P14 direction register  bit1 */
#define     pd14_2      pd14_addr.bit.b2    /* P14 direction register  bit2 */
#define     pd14_3      pd14_addr.bit.b3    /* P14 direction register  bit3 */
#define     pd14_4      pd14_addr.bit.b4    /* P14 direction register  bit4 */
#define     pd14_5      pd14_addr.bit.b5    /* P14 direction register  bit5 */
#define     pd14_6      pd14_addr.bit.b6    /* P14 direction register  bit6 */

/*------------------------------------------------------
    Port P15
------------------------------------------------------*/
union byte_def p15_addr;
#define     p15     p15_addr.byte

#define     p15_0       p15_addr.bit.b0     /* Port P15  bit0 */
#define     p15_1       p15_addr.bit.b1     /* Port P15  bit1 */
#define     p15_2       p15_addr.bit.b2     /* Port P15  bit2 */
#define     p15_3       p15_addr.bit.b3     /* Port P15  bit3 */
#define     p15_4       p15_addr.bit.b4     /* Port P15  bit4 */
#define     p15_5       p15_addr.bit.b5     /* Port P15  bit5 */
#define     p15_6       p15_addr.bit.b6     /* Port P15  bit6 */
#define     p15_7       p15_addr.bit.b7     /* Port P15  bit7 */

/*------------------------------------------------------
    Port P15 direction register
------------------------------------------------------*/
union byte_def pd15_addr;
#define     pd15        pd15_addr.byte

#define     pd15_0      pd15_addr.bit.b0    /* P15 direction register  bit0 */
#define     pd15_1      pd15_addr.bit.b1    /* P15 direction register  bit1 */
#define     pd15_2      pd15_addr.bit.b2    /* P15 direction register  bit2 */
#define     pd15_3      pd15_addr.bit.b3    /* P15 direction register  bit3 */
#define     pd15_4      pd15_addr.bit.b4    /* P15 direction register  bit4 */
#define     pd15_5      pd15_addr.bit.b5    /* P15 direction register  bit5 */
#define     pd15_6      pd15_addr.bit.b6    /* P15 direction register  bit6 */
#define     pd15_7      pd15_addr.bit.b7    /* P15 direction register  bit7 */

/*------------------------------------------------------
    Pull-up control register 0
------------------------------------------------------*/
union byte_def pur0_addr;
#define     pur0        pur0_addr.byte

#define     pu00        pur0_addr.bit.b0    /* Pull-up P00 to P03 */
#define     pu01        pur0_addr.bit.b1    /* Pull-up P04 to P07 */
#define     pu02        pur0_addr.bit.b2    /* Pull-up P10 to P13 */
#define     pu03        pur0_addr.bit.b3    /* Pull-up P14 to P17 */
#define     pu04        pur0_addr.bit.b4    /* Pull-up P20 to P23 */
#define     pu05        pur0_addr.bit.b5    /* Pull-up P24 to P27 */
#define     pu06        pur0_addr.bit.b6    /* Pull-up P30 to P33 */
#define     pu07        pur0_addr.bit.b7    /* Pull-up P34 to P37 */

/*------------------------------------------------------
    Pull-up control register 1
------------------------------------------------------*/
union byte_def pur1_addr;
#define     pur1        pur1_addr.byte

#define     pu10        pur1_addr.bit.b0    /* Pull-up P40 to P43 */
#define     pu11        pur1_addr.bit.b1    /* Pull-up P44 to P47 */
#define     pu12        pur1_addr.bit.b2    /* Pull-up P50 to P53 */
#define     pu13        pur1_addr.bit.b3    /* Pull-up P54 to P57 */

/*------------------------------------------------------
    Pull-up control register 2
------------------------------------------------------*/
union byte_def pur2_addr;
#define     pur2        pur2_addr.byte

#define     pu20        pur2_addr.bit.b0    /* Pull-up P60 to P63 */
#define     pu21        pur2_addr.bit.b1    /* Pull-up P64 to P67 */
#define     pu22        pur2_addr.bit.b2    /* Pull-up P70 to P73 ; Except P70,P71 */
#define     pu23        pur2_addr.bit.b3    /* Pull-up P74 to P77 */
#define     pu24        pur2_addr.bit.b4    /* Pull-up P80 to P83 */
#define     pu25        pur2_addr.bit.b5    /* Pull-up P84 to P87 ; Except P85 */
#define     pu26        pur2_addr.bit.b6    /* Pull-up P90 to P93 */
#define     pu27        pur2_addr.bit.b7    /* Pull-up P94 to P97 */

/*------------------------------------------------------
    Pull-up control register 3
------------------------------------------------------*/
union byte_def pur3_addr;
#define     pur3        pur3_addr.byte

#define     pu30        pur3_addr.bit.b0    /* Pull-up P100 to P103 */
#define     pu31        pur3_addr.bit.b1    /* Pull-up P104 to P107 */
#define     pu32        pur3_addr.bit.b2    /* Pull-up P110 to P113 */
#define     pu33        pur3_addr.bit.b3    /* Pull-up P114 */
#define     pu34        pur3_addr.bit.b4    /* Pull-up P120 to P123 */
#define     pu35        pur3_addr.bit.b5    /* Pull-up P124 to P127 */
#define     pu36        pur3_addr.bit.b6    /* Pull-up P130 to P133 */
#define     pu37        pur3_addr.bit.b7    /* Pull-up P134 to P137 */

/*------------------------------------------------------
    Pull-up control register 4
------------------------------------------------------*/
union byte_def pur4_addr;
#define     pur4        pur4_addr.byte

#define     pu40        pur4_addr.bit.b0    /* Pull-up P140 to P143 */
#define     pu41        pur4_addr.bit.b1    /* Pull-up P144 to P146 */
#define     pu42        pur4_addr.bit.b2    /* Pull-up P150 to P153 */
#define     pu43        pur4_addr.bit.b3    /* Pull-up P154 to P157 */

/*------------------------------------------------------
    Port control register
------------------------------------------------------*/
union byte_def pcr_addr;
#define     pcr     pcr_addr.byte

#define     pcr0        pcr_addr.bit.b0     /* Port P1 control register */

/*------------------------------------------------------
    Function select register A0
------------------------------------------------------*/
union byte_def ps0_addr;
#define     ps0     ps0_addr.byte

#define     ps0_0       ps0_addr.bit.b0
#define     ps0_1       ps0_addr.bit.b1
#define     ps0_2       ps0_addr.bit.b2
#define     ps0_3       ps0_addr.bit.b3
#define     ps0_4       ps0_addr.bit.b4
#define     ps0_5       ps0_addr.bit.b5
#define     ps0_6       ps0_addr.bit.b6
#define     ps0_7       ps0_addr.bit.b7

/*------------------------------------------------------
    Function select register A1
------------------------------------------------------*/
union byte_def ps1_addr;
#define     ps1     ps1_addr.byte

#define     ps1_0       ps1_addr.bit.b0
#define     ps1_1       ps1_addr.bit.b1
#define     ps1_2       ps1_addr.bit.b2
#define     ps1_3       ps1_addr.bit.b3
#define     ps1_4       ps1_addr.bit.b4
#define     ps1_5       ps1_addr.bit.b5
#define		ps1_6		ps1_addr.bit.b6
#define     ps1_7       ps1_addr.bit.b7

/*------------------------------------------------------
    Function select register A2
------------------------------------------------------*/
union byte_def ps2_addr;
#define     ps2     ps2_addr.byte

#define     ps2_0       ps2_addr.bit.b0
#define     ps2_1       ps2_addr.bit.b1
#define     ps2_2       ps2_addr.bit.b2
//#define		ps2_3		ps2_addr.bit.b3
//#define		ps2_4		ps2_addr.bit.b4

/*------------------------------------------------------
    Function select register A3
------------------------------------------------------*/
union byte_def ps3_addr;
#define     ps3     ps3_addr.byte

#define     ps3_0       ps3_addr.bit.b0
#define     ps3_1       ps3_addr.bit.b1
#define     ps3_2       ps3_addr.bit.b2
#define     ps3_3       ps3_addr.bit.b3
#define     ps3_4       ps3_addr.bit.b4
#define     ps3_5       ps3_addr.bit.b5
#define     ps3_6       ps3_addr.bit.b6
#define     ps3_7       ps3_addr.bit.b7

/*------------------------------------------------------
    Function select register A5
------------------------------------------------------*/
union byte_def ps5_addr;
#define     ps5     ps5_addr.byte

#define     ps5_0       ps5_addr.bit.b0
#define     ps5_1       ps5_addr.bit.b1
#define     ps5_2       ps5_addr.bit.b2
#define     ps5_3       ps5_addr.bit.b3

/*------------------------------------------------------
    Function select register A6
------------------------------------------------------*/
union byte_def ps6_addr;
#define     ps6     ps6_addr.byte

#define     ps6_0       ps6_addr.bit.b0
#define     ps6_1       ps6_addr.bit.b1
#define     ps6_2       ps6_addr.bit.b2
#define     ps6_3       ps6_addr.bit.b3
#define     ps6_4       ps6_addr.bit.b4
#define     ps6_5       ps6_addr.bit.b5
#define     ps6_6       ps6_addr.bit.b6
#define     ps6_7       ps6_addr.bit.b7

/*------------------------------------------------------
    Function select register A7
------------------------------------------------------*/
union byte_def ps7_addr;
#define     ps7     ps7_addr.byte

#define     ps7_0       ps7_addr.bit.b0
#define     ps7_1       ps7_addr.bit.b1
#define     ps7_2       ps7_addr.bit.b2
#define     ps7_3       ps7_addr.bit.b3
#define     ps7_4       ps7_addr.bit.b4
#define     ps7_5       ps7_addr.bit.b5
#define     ps7_6       ps7_addr.bit.b6
#define     ps7_7       ps7_addr.bit.b7

/*------------------------------------------------------
    Function select register A8
------------------------------------------------------*/
union byte_def ps8_addr;
#define     ps8     ps8_addr.byte

#define     ps8_0       ps8_addr.bit.b0
#define     ps8_1       ps8_addr.bit.b1
#define     ps8_2       ps8_addr.bit.b2
#define     ps8_3       ps8_addr.bit.b3

/*------------------------------------------------------
    Function select register A9
------------------------------------------------------*/
union byte_def ps9_addr;
#define     ps9     ps9_addr.byte

#define     ps9_0       ps9_addr.bit.b0
#define     ps9_1       ps9_addr.bit.b1
//#define     ps9_2       ps9_addr.bit.b2
//#define     ps9_3       ps9_addr.bit.b3
#define     ps9_4       ps9_addr.bit.b4
#define     ps9_5       ps9_addr.bit.b5
//#define     ps9_6       ps9_addr.bit.b6
//#define     ps9_7       ps9_addr.bit.b7

/*------------------------------------------------------
    Function select register B0
------------------------------------------------------*/
union byte_def psl0_addr;
#define     psl0        psl0_addr.byte

#define     psl0_2      psl0_addr.bit.b2
#define     psl0_4      psl0_addr.bit.b4
#define     psl0_6      psl0_addr.bit.b6

/*------------------------------------------------------
    Function select register B1
------------------------------------------------------*/
union byte_def psl1_addr;
#define     psl1        psl1_addr.byte

#define     psl1_0      psl1_addr.bit.b0
#define     psl1_1      psl1_addr.bit.b1
#define     psl1_2      psl1_addr.bit.b2
#define     psl1_3      psl1_addr.bit.b3
#define     psl1_4      psl1_addr.bit.b4
#define     psl1_5      psl1_addr.bit.b5
#define     psl1_6      psl1_addr.bit.b6

/*------------------------------------------------------
    Function select register B2
------------------------------------------------------*/
union byte_def psl2_addr;
#define     psl2        psl2_addr.byte

#define     psl2_0      psl2_addr.bit.b0
#define     psl2_1      psl2_addr.bit.b1
#define     psl2_2      psl2_addr.bit.b2

/*------------------------------------------------------
    Function select register B3
------------------------------------------------------*/
union byte_def psl3_addr;
#define     psl3        psl3_addr.byte

#define     psl3_1      psl3_addr.bit.b1
#define     psl3_2      psl3_addr.bit.b2
#define     psl3_3      psl3_addr.bit.b3
#define     psl3_4      psl3_addr.bit.b4
#define     psl3_5      psl3_addr.bit.b5
#define     psl3_6      psl3_addr.bit.b6
#define     psl3_7      psl3_addr.bit.b7

/*------------------------------------------------------
    Function select register C
------------------------------------------------------*/
union byte_def psc_addr;
#define     psc     psc_addr.byte

#define     psc_0       psc_addr.bit.b0
#define     psc_1       psc_addr.bit.b1
#define     psc_2       psc_addr.bit.b2
#define     psc_3       psc_addr.bit.b3
#define     psc_4       psc_addr.bit.b4
#define     psc_6       psc_addr.bit.b6
#define     psc_7       psc_addr.bit.b7

/*------------------------------------------------------
    UARTi bit rate generators ; Use "MOV" instruction when writing to these registers.
------------------------------------------------------*/
union byte_def u0brg_addr;
#define     u0brg       u0brg_addr.byte

union byte_def u1brg_addr;
#define     u1brg       u1brg_addr.byte

union byte_def u2brg_addr;
#define     u2brg       u2brg_addr.byte

union byte_def u3brg_addr;
#define     u3brg       u3brg_addr.byte

union byte_def u4brg_addr;
#define     u4brg       u4brg_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data0	
------------------------------------------------------*/
union byte_def c0slot0_0_addr;
#define     c0slot0_0     c0slot0_0_addr.byte

#define     sid6_c0slot0_0 	      c0slot0_0_addr.bit.b0
#define     sid7_c0slot0_0        c0slot0_0_addr.bit.b1
#define     sid8_c0slot0_0        c0slot0_0_addr.bit.b2
#define     sid9_c0slot0_0        c0slot0_0_addr.bit.b3
#define     sid10_c0slot0_0       c0slot0_0_addr.bit.b4

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data1
------------------------------------------------------*/
union byte_def c0slot0_1_addr;
#define     c0slot0_1     c0slot0_1_addr.byte

#define     sid0_c0slot0_1 	      c0slot0_1_addr.bit.b0
#define     sid1_c0slot0_1        c0slot0_1_addr.bit.b1
#define     sid2_c0slot0_1        c0slot0_1_addr.bit.b2
#define     sid3_c0slot0_1        c0slot0_1_addr.bit.b3
#define     sid4_c0slot0_1        c0slot0_1_addr.bit.b4
#define     sid5_c0slot0_1        c0slot0_1_addr.bit.b5

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data2
------------------------------------------------------*/
union byte_def c0slot0_2_addr;
#define     c0slot0_2     c0slot0_2_addr.byte

#define     eid14_c0slot0_2        c0slot0_2_addr.bit.b0
#define     eid15_c0slot0_2        c0slot0_2_addr.bit.b1
#define     eid16_c0slot0_2        c0slot0_2_addr.bit.b2
#define     eid17_c0slot0_2        c0slot0_2_addr.bit.b3

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data3
------------------------------------------------------*/
union byte_def c0slot0_3_addr;
#define     c0slot0_3     c0slot0_3_addr.byte

#define     eid6_c0slot0_3	 	   c0slot0_3_addr.bit.b0
#define     eid7_c0slot0_3         c0slot0_3_addr.bit.b1
#define     eid8_c0slot0_3         c0slot0_3_addr.bit.b2
#define     eid9_c0slot0_3         c0slot0_3_addr.bit.b3
#define     eid10_c0slot0_3        c0slot0_3_addr.bit.b4
#define     eid11_c0slot0_3        c0slot0_3_addr.bit.b5
#define		eid12_c0slot0_3		   c0slot0_3_addr.bit.b6
#define		eid13_c0slot0_3		   c0slot0_3_addr.bit.b7

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data4
------------------------------------------------------*/
union byte_def c0slot0_4_addr;
#define     c0slot0_4     c0slot0_4_addr.byte

#define     eid0_c0slot0_4	 	   c0slot0_4_addr.bit.b0
#define     eid1_c0slot0_4         c0slot0_4_addr.bit.b1
#define     eid2_c0slot0_4         c0slot0_4_addr.bit.b2
#define     eid3_c0slot0_4         c0slot0_4_addr.bit.b3
#define     eid4_c0slot0_4         c0slot0_4_addr.bit.b4
#define     eid5_c0slot0_4         c0slot0_4_addr.bit.b5

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data5
------------------------------------------------------*/
union byte_def c0slot0_5_addr;
#define     c0slot0_5     c0slot0_5_addr.byte

#define     dlc0_c0slot0_5	 	   c0slot0_5_addr.bit.b0
#define     dlc1_c0slot0_5         c0slot0_5_addr.bit.b1
#define     dlc2_c0slot0_5         c0slot0_5_addr.bit.b2
#define     dlc3_c0slot0_5         c0slot0_5_addr.bit.b3

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data6
------------------------------------------------------*/
union byte_def c0slot0_6_addr;
#define     c0slot0_6     c0slot0_6_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data7
------------------------------------------------------*/
union byte_def c0slot0_7_addr;
#define     c0slot0_7     c0slot0_7_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data8
------------------------------------------------------*/
union byte_def c0slot0_8_addr;
#define     c0slot0_8     c0slot0_8_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data9
------------------------------------------------------*/
union byte_def c0slot0_9_addr;
#define     c0slot0_9     c0slot0_9_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data10
------------------------------------------------------*/
union byte_def c0slot0_10_addr;
#define     c0slot0_10     c0slot0_10_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data11
------------------------------------------------------*/
union byte_def c0slot0_11_addr;
#define     c0slot0_11     c0slot0_11_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data12
------------------------------------------------------*/
union byte_def c0slot0_12_addr;
#define     c0slot0_12     c0slot0_12_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data13
------------------------------------------------------*/
union byte_def c0slot0_13_addr;
#define     c0slot0_13     c0slot0_13_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data14
------------------------------------------------------*/
union byte_def c0slot0_14_addr;
#define     c0slot0_14     c0slot0_14_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer0 Data15
------------------------------------------------------*/
union byte_def c0slot0_15_addr;
#define     c0slot0_15     c0slot0_15_addr.byte


/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data0	
------------------------------------------------------*/
union byte_def c0slot1_0_addr;
#define     c0slot1_0     c0slot1_0_addr.byte

#define     sid6_c0slot1_0 	      c0slot1_0_addr.bit.b0
#define     sid7_c0slot1_0        c0slot1_0_addr.bit.b1
#define     sid8_c0slot1_0        c0slot1_0_addr.bit.b2
#define     sid9_c0slot1_0        c0slot1_0_addr.bit.b3
#define     sid10_c0slot1_0       c0slot1_0_addr.bit.b4

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data1
------------------------------------------------------*/
union byte_def c0slot1_1_addr;
#define     c0slot1_1     c0slot1_1_addr.byte

#define     sid0_c0slot1_1 	      c0slot1_1_addr.bit.b0
#define     sid1_c0slot1_1        c0slot1_1_addr.bit.b1
#define     sid2_c0slot1_1        c0slot1_1_addr.bit.b2
#define     sid3_c0slot1_1        c0slot1_1_addr.bit.b3
#define     sid4_c0slot1_1        c0slot1_1_addr.bit.b4
#define     sid5_c0slot1_1        c0slot1_1_addr.bit.b5

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data2
------------------------------------------------------*/
union byte_def c0slot1_2_addr;
#define     c0slot1_2     c0slot1_2_addr.byte

#define     eid14_c0slot1_2        c0slot1_2_addr.bit.b0
#define     eid15_c0slot1_2        c0slot1_2_addr.bit.b1
#define     eid16_c0slot1_2        c0slot1_2_addr.bit.b2
#define     eid17_c0slot1_2        c0slot1_2_addr.bit.b3

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data3
------------------------------------------------------*/
union byte_def c0slot1_3_addr;
#define     c0slot1_3     c0slot1_3_addr.byte

#define     eid6_c0slot1_3	 	   c0slot1_3_addr.bit.b0
#define     eid7_c0slot1_3         c0slot1_3_addr.bit.b1
#define     eid8_c0slot1_3         c0slot1_3_addr.bit.b2
#define     eid9_c0slot1_3         c0slot1_3_addr.bit.b3
#define     eid10_c0slot1_3        c0slot1_3_addr.bit.b4
#define     eid11_c0slot1_3        c0slot1_3_addr.bit.b5
#define     eid12_c0slot1_3        c0slot1_3_addr.bit.b6
#define     eid13_c0slot1_3        c0slot1_3_addr.bit.b7

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data4
------------------------------------------------------*/
union byte_def c0slot1_4_addr;
#define     c0slot1_4     c0slot1_4_addr.byte

#define     eid0_c0slot1_4	 	   c0slot1_4_addr.bit.b0
#define     eid1_c0slot1_4         c0slot1_4_addr.bit.b1
#define     eid2_c0slot1_4         c0slot1_4_addr.bit.b2
#define     eid3_c0slot1_4         c0slot1_4_addr.bit.b3
#define     eid4_c0slot1_4         c0slot1_4_addr.bit.b4
#define     eid5_c0slot1_4         c0slot1_4_addr.bit.b5

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data5
------------------------------------------------------*/
union byte_def c0slot1_5_addr;
#define     c0slot1_5     c0slot1_5_addr.byte

#define     dlc0_c0slot1_5	 	   c0slot1_5_addr.bit.b0
#define     dlc1_c0slot1_5         c0slot1_5_addr.bit.b1
#define     dlc2_c0slot1_5         c0slot1_5_addr.bit.b2
#define     dlc3_c0slot1_5         c0slot1_5_addr.bit.b3

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data6
------------------------------------------------------*/
union byte_def c0slot1_6_addr;
#define     c0slot1_6     c0slot1_6_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data7
------------------------------------------------------*/
union byte_def c0slot1_7_addr;
#define     c0slot1_7     c0slot1_7_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data8
------------------------------------------------------*/
union byte_def c0slot1_8_addr;
#define     c0slot1_8     c0slot1_8_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data9
------------------------------------------------------*/
union byte_def c0slot1_9_addr;
#define     c0slot1_9     c0slot1_9_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data10
------------------------------------------------------*/
union byte_def c0slot1_10_addr;
#define     c0slot1_10     c0slot1_10_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data11
------------------------------------------------------*/
union byte_def c0slot1_11_addr;
#define     c0slot1_11     c0slot1_11_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data12
------------------------------------------------------*/
union byte_def c0slot1_12_addr;
#define     c0slot1_12     c0slot1_12_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data13
------------------------------------------------------*/
union byte_def c0slot1_13_addr;
#define     c0slot1_13     c0slot1_13_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data14
------------------------------------------------------*/
union byte_def c0slot1_14_addr;
#define     c0slot1_14     c0slot1_14_addr.byte

/*------------------------------------------------------
    Can0 Messege Slot Buffer1 Data15
------------------------------------------------------*/
union byte_def c0slot1_15_addr;
#define     c0slot1_15     c0slot1_15_addr.byte

/*------------------------------------------------------
    can
------------------------------------------------------*/
union{
    struct{
        char    b0:1;
        char    b1:1;
        char    b2:1;
        char    b3:1;
        char    b4:1;
        char    b5:1;
        char    b6:1;
        char    b7:1;
        char    b8:1;
        char    b9:1;
        char    b10:1;
        char    b11:1;
        char    b12:1;
        char    b13:1;
        char    b14:1;
        char    b15:1;
    }bit;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}c0ctlr0_addr,c0str_addr,c0idr_addr,c0conr_addr,c0tsr_addr,c0sistr_addr,c0simkr_addr,c0afs_addr;

/*------------------------------------------------------
     Can0 Control Register 0
------------------------------------------------------*/
#define     c0ctlr0        c0ctlr0_addr.word
#define     c0ctlr0l       c0ctlr0_addr.byte.low
#define     c0ctlr0h       c0ctlr0_addr.byte.high

#define     Reset0_c0ctlr0		 c0ctlr0_addr.bit.b0
#define     Loopback_c0ctlr0	 c0ctlr0_addr.bit.b1
//#define     CSS_c0ctlr0			 c0ctlr0_addr.bit.b2
#define     BasicCAN_c0ctlr0	 c0ctlr0_addr.bit.b3
#define     Reset1_c0ctlr0		 c0ctlr0_addr.bit.b4
#define     TSPre0_c0ctlr0		 c0ctlr0_addr.bit.b8
#define     TSPre1_c0ctlr0		 c0ctlr0_addr.bit.b9
#define     TSReset_c0ctlr0		 c0ctlr0_addr.bit.b10
#define     ECReset_c0ctlr0		 c0ctlr0_addr.bit.b11
//#define     css_c0ctlr0			 c0ctlr0_addr.bit.b2

/*------------------------------------------------------
     Can0 Status Register
------------------------------------------------------*/
#define     c0str        c0str_addr.word
#define     c0strl       c0str_addr.byte.low
#define     c0strh       c0str_addr.byte.high

#define     MBox0_c0str			  c0str_addr.bit.b0
#define     MBox1_c0str			  c0str_addr.bit.b1
#define     MBox2_c0str			  c0str_addr.bit.b2
#define     MBox3_c0str			  c0str_addr.bit.b3
#define     TrmSucc_c0str		  c0str_addr.bit.b4
#define     RecSucc_c0str		  c0str_addr.bit.b5
#define     TrmState_c0str		  c0str_addr.bit.b6
#define     RecState_c0str		  c0str_addr.bit.b7
#define		State_Reset_c0str	  c0str_addr.bit.b8
#define     State_LoopBack_c0str  c0str_addr.bit.b9
#define     State_BasicCAN_c0str  c0str_addr.bit.b11
#define     State_BusError_c0str  c0str_addr.bit.b12
#define     State_ErrPas_c0str	  c0str_addr.bit.b13
#define     State_BusOff_c0str	  c0str_addr.bit.b14

/*------------------------------------------------------
     Can0 Extended ID Register
------------------------------------------------------*/
#define     c0idr        c0idr_addr.word
#define     c0idrl       c0idr_addr.byte.low
#define     c0idrh       c0idr_addr.byte.high

#define     ide15_c0idr		c0idr_addr.bit.b0
#define     ide14_c0idr		c0idr_addr.bit.b1
#define     ide13_c0idr		c0idr_addr.bit.b2
#define     ide12_c0idr		c0idr_addr.bit.b3
#define     ide11_c0idr		c0idr_addr.bit.b4
#define     ide10_c0idr		c0idr_addr.bit.b5
#define     ide9_c0idr		c0idr_addr.bit.b6
#define     ide8_c0idr		c0idr_addr.bit.b7
#define		ide7_c0idr		c0idr_addr.bit.b8
#define     ide6_c0idr		c0idr_addr.bit.b9
#define     ide5_c0idr		c0idr_addr.bit.b10
#define     ide4_c0idr		c0idr_addr.bit.b11
#define     ide3_c0idr		c0idr_addr.bit.b12
#define     ide2_c0idr		c0idr_addr.bit.b13
#define     ide1_c0idr		c0idr_addr.bit.b14
#define     ide0_c0idr		c0idr_addr.bit.b15

/*------------------------------------------------------
      Can0 Configration Register
------------------------------------------------------*/
#define     c0conr        c0conr_addr.word
#define     c0conrl       c0conr_addr.byte.low
#define     c0conrh       c0conr_addr.byte.high

#define		sam_c0conr		c0conr_addr.bit.b4
#define     pts0_c0conr		c0conr_addr.bit.b5
#define     pts1_c0conr		c0conr_addr.bit.b6
#define     pts2_c0conr		c0conr_addr.bit.b7
#define     pbs10_c0conr	c0conr_addr.bit.b8
#define     pbs11_c0conr	c0conr_addr.bit.b9
#define     pbs12_c0conr	c0conr_addr.bit.b10
#define     pbs20_c0conr	c0conr_addr.bit.b11
#define     pbs21_c0conr	c0conr_addr.bit.b12
#define		pbs22_c0conr	c0conr_addr.bit.b13
#define     sjw0_c0conr		c0conr_addr.bit.b14
#define     sjw1_c0conr		c0conr_addr.bit.b15

/*------------------------------------------------------
      Can0 Time Stamp Register
------------------------------------------------------*/
#define     c0tsr        c0tsr_addr.word
#define     c0tsrl       c0tsr_addr.byte.low
#define     c0tsrh       c0tsr_addr.byte.high

/*------------------------------------------------------
    Can0 Transmit Error Count Register
------------------------------------------------------*/
union byte_def c0tec_addr;
#define     c0tec     c0tec_addr.byte

/*------------------------------------------------------
    Can0 Receive Error Count Register
------------------------------------------------------*/
union byte_def c0rec_addr;
#define     c0rec     c0rec_addr.byte

/*------------------------------------------------------
     Can0 Slot Interrupt Status Register
------------------------------------------------------*/
#define     c0sistr        c0sistr_addr.word
#define     c0sistrl       c0sistr_addr.byte.low
#define     c0sistrh       c0sistr_addr.byte.high

#define     sis15_c0sistr		c0sistr_addr.bit.b0
#define     sis14_c0sistr		c0sistr_addr.bit.b1
#define     sis13_c0sistr		c0sistr_addr.bit.b2
#define     sis12_c0sistr		c0sistr_addr.bit.b3
#define     sis11_c0sistr		c0sistr_addr.bit.b4
#define     sis10_c0sistr		c0sistr_addr.bit.b5
#define     sis9_c0sistr		c0sistr_addr.bit.b6
#define     sis8_c0sistr		c0sistr_addr.bit.b7
#define		sis7_c0sistr		c0sistr_addr.bit.b8
#define     sis6_c0sistr		c0sistr_addr.bit.b9
#define     sis5_c0sistr		c0sistr_addr.bit.b10
#define     sis4_c0sistr		c0sistr_addr.bit.b11
#define     sis3_c0sistr		c0sistr_addr.bit.b12
#define     sis2_c0sistr		c0sistr_addr.bit.b13
#define     sis1_c0sistr		c0sistr_addr.bit.b14
#define     sis0_c0sistr		c0sistr_addr.bit.b15

/*------------------------------------------------------
     Can0 Slot Interrupt Mask Register
------------------------------------------------------*/
#define     c0simkr        c0simkr_addr.word
#define     c0simkrl       c0simkr_addr.byte.low
#define     c0simkrh       c0simkr_addr.byte.high

#define     sim15_c0simkr		c0simkr_addr.bit.b0
#define     sim14_c0simkr		c0simkr_addr.bit.b1
#define     sim13_c0simkr		c0simkr_addr.bit.b2
#define     sim12_c0simkr		c0simkr_addr.bit.b3
#define     sim11_c0simkr		c0simkr_addr.bit.b4
#define     sim10_c0simkr		c0simkr_addr.bit.b5
#define     sim9_c0simkr		c0simkr_addr.bit.b6
#define     sim8_c0simkr		c0simkr_addr.bit.b7
#define		sim7_c0simkr		c0simkr_addr.bit.b8
#define     sim6_c0simkr		c0simkr_addr.bit.b9
#define     sim5_c0simkr		c0simkr_addr.bit.b10
#define     sim4_c0simkr		c0simkr_addr.bit.b11
#define     sim3_c0simkr		c0simkr_addr.bit.b12
#define     sim2_c0simkr		c0simkr_addr.bit.b13
#define     sim1_c0simkr		c0simkr_addr.bit.b14
#define     sim0_c0simkr		c0simkr_addr.bit.b15

/*------------------------------------------------------
    Can0 Error Interrupt Mask Register
------------------------------------------------------*/
union byte_def c0eimkr_addr;
#define     c0eimkr     c0eimkr_addr.byte

#define     boim_c0eimkr	     c0eimkr_addr.bit.b0
#define     epim_c0eimkr         c0eimkr_addr.bit.b1
#define     beim_c0eimkr         c0eimkr_addr.bit.b2

/*------------------------------------------------------
    Can0 Error Interrupt Status Register
------------------------------------------------------*/
union byte_def c0eistr_addr;
#define     c0eistr     c0eistr_addr.byte

#define     bois_c0eistr   	     c0eistr_addr.bit.b0
#define     epis_c0eistr         c0eistr_addr.bit.b1
#define     beis_c0eistr         c0eistr_addr.bit.b2

/*------------------------------------------------------
    Can0 Baud Rate Prescaler
------------------------------------------------------*/
union byte_def c0brp_addr;
#define     c0brp     c0brp_addr.byte

/*------------------------------------------------------
    Can0 Global Mask Register Standard ID0
------------------------------------------------------*/
union byte_def c0gmr0_addr;
#define     c0gmr0     c0gmr0_addr.byte

#define     sid6m_c0gmr0	 	 c0gmr0_addr.bit.b0
#define     sid7m_c0gmr0         c0gmr0_addr.bit.b1
#define     sid8m_c0gmr0         c0gmr0_addr.bit.b2
#define     sid9m_c0gmr0         c0gmr0_addr.bit.b3
#define     sid10m_c0gmr0        c0gmr0_addr.bit.b4

/*------------------------------------------------------
    Can0 Global Mask Register Standard ID1
------------------------------------------------------*/
union byte_def c0gmr1_addr;
#define     c0gmr1     c0gmr1_addr.byte

#define     sid0m_c0gmr1	 	 c0gmr1_addr.bit.b0
#define     sid1m_c0gmr1         c0gmr1_addr.bit.b1
#define     sid2m_c0gmr1         c0gmr1_addr.bit.b2
#define     sid3m_c0gmr1         c0gmr1_addr.bit.b3
#define     sid4m_c0gmr1         c0gmr1_addr.bit.b4
#define     sid5m_c0gmr1         c0gmr1_addr.bit.b5

/*------------------------------------------------------
    Can0 Global Mask Register Extended ID0
------------------------------------------------------*/
union byte_def c0gmr2_addr;
#define     c0gmr2     c0gmr2_addr.byte

#define     eid14m_c0gmr2	 	 c0gmr2_addr.bit.b0
#define     eid15m_c0gmr2         c0gmr2_addr.bit.b1
#define     eid16m_c0gmr2         c0gmr2_addr.bit.b2
#define     eid17m_c0gmr2         c0gmr2_addr.bit.b3

/*------------------------------------------------------
    Can0 Global Mask Register Extended ID1
------------------------------------------------------*/
union byte_def c0gmr3_addr;
#define     c0gmr3     c0gmr3_addr.byte

#define     eid6m_c0gmr3	 	 c0gmr3_addr.bit.b0
#define     eid7m_c0gmr3         c0gmr3_addr.bit.b1
#define     eid8m_c0gmr3         c0gmr3_addr.bit.b2
#define     eid9m_c0gmr3         c0gmr3_addr.bit.b3
#define     eid10m_c0gmr3	 	 c0gmr3_addr.bit.b4
#define     eid11m_c0gmr3         c0gmr3_addr.bit.b5
#define     eid12m_c0gmr3         c0gmr3_addr.bit.b6
#define     eid13m_c0gmr3         c0gmr3_addr.bit.b7

/*------------------------------------------------------
    Can0 Global Mask Register Extended ID2
------------------------------------------------------*/
union byte_def c0gmr4_addr;
#define     c0gmr4     c0gmr4_addr.byte

#define     eid0m_c0gmr4	 	 c0gmr4_addr.bit.b0
#define     eid1m_c0gmr4         c0gmr4_addr.bit.b1
#define     eid2m_c0gmr4         c0gmr4_addr.bit.b2
#define     eid3m_c0gmr4         c0gmr4_addr.bit.b3
#define     eid4m_c0gmr4	 	 c0gmr4_addr.bit.b4
#define     eid5m_c0gmr4         c0gmr4_addr.bit.b5

/*------------------------------------------------------
    Can0 Messege Slot0 Control Register
------------------------------------------------------*/
union byte_def c0mctl0_addr;
#define     c0mctl0     c0mctl0_addr.byte

#define     NewData_c0mctl0		  	 c0mctl0_addr.bit.b0
#define     SentData_c0mctl0	     c0mctl0_addr.bit.b0
#define     InvalData_c0mctl0	     c0mctl0_addr.bit.b1
#define     TrmActive_c0mctl0	     c0mctl0_addr.bit.b1
#define     MsgLost_c0mctl0		  	 c0mctl0_addr.bit.b2
#define     RemActive_c0mctl0	     c0mctl0_addr.bit.b3
#define     RspLock_c0mctl0		     c0mctl0_addr.bit.b4
#define     Remote_c0mctl0		   	 c0mctl0_addr.bit.b5
#define     RecReq_c0mctl0		   	 c0mctl0_addr.bit.b6
#define     TrmReq_c0mctl0		   	 c0mctl0_addr.bit.b7

/*------------------------------------------------------
    Can0 Local Mask RegisterA Standard ID0
------------------------------------------------------*/
union byte_def c0lmar0_addr;
#define     c0lmar0     c0lmar0_addr.byte

#define     sid6m_c0lmar0	 	  	 c0lmar0_addr.bit.b0
#define     sid7m_c0lmar0	         c0lmar0_addr.bit.b1
#define     sid8m_c0lmar0   	     c0lmar0_addr.bit.b2
#define     sid9m_c0lmar0       	 c0lmar0_addr.bit.b3
#define     sid10m_c0lmar0	 	  	 c0lmar0_addr.bit.b4

/*------------------------------------------------------
    Can0 Messege Slot1 Control Register	
------------------------------------------------------*/
union byte_def c0mctl1_addr;
#define     c0mctl1     c0mctl1_addr.byte

#define     NewData_c0mctl1		   c0mctl1_addr.bit.b0
#define     SentData_c0mctl1	   c0mctl1_addr.bit.b0
#define     InvalData_c0mctl1	   c0mctl1_addr.bit.b1
#define     TrmActive_c0mctl1	   c0mctl1_addr.bit.b1
#define     MsgLost_c0mctl1		   c0mctl1_addr.bit.b2
#define     RemActive_c0mctl1	   c0mctl1_addr.bit.b3
#define     RspLock_c0mctl1		   c0mctl1_addr.bit.b4
#define     Remote_c0mctl1		   c0mctl1_addr.bit.b5
#define     RecReq_c0mctl1		   c0mctl1_addr.bit.b6
#define     TrmReq_c0mctl1		   c0mctl1_addr.bit.b7

/*------------------------------------------------------
    Can0 Local Mask RegisterA Standard ID1
------------------------------------------------------*/
union byte_def c0lmar1_addr;
#define     c0lmar1     c0lmar1_addr.byte

#define     sid0m_c0lmar1	 	  	 c0lmar1_addr.bit.b0
#define     sid1m_c0lmar1	         c0lmar1_addr.bit.b1
#define     sid2m_c0lmar1   	     c0lmar1_addr.bit.b2
#define     sid3m_c0lmar1       	 c0lmar1_addr.bit.b3
#define     sid4m_c0lmar1	 	  	 c0lmar1_addr.bit.b4
#define     sid5m_c0lmar1	 	  	 c0lmar1_addr.bit.b5

/*------------------------------------------------------
    Can0 Messege Slot2 Control Register
------------------------------------------------------*/
union byte_def c0mctl2_addr;
#define     c0mctl2     c0mctl2_addr.byte

#define     NewData_c0mctl2		    c0mctl2_addr.bit.b0
#define     SentData_c0mctl2	    c0mctl2_addr.bit.b0
#define     InvalData_c0mctl2	    c0mctl2_addr.bit.b1
#define     TrmActive_c0mctl2	    c0mctl2_addr.bit.b1
#define     MsgLost_c0mctl2		    c0mctl2_addr.bit.b2
#define     RemActive_c0mctl2	    c0mctl2_addr.bit.b3
#define     RspLock_c0mctl2		    c0mctl2_addr.bit.b4
#define     Remote_c0mctl2		    c0mctl2_addr.bit.b5
#define     RecReq_c0mctl2		    c0mctl2_addr.bit.b6
#define     TrmReq_c0mctl2		    c0mctl2_addr.bit.b7

/*------------------------------------------------------
    Can0 Local Mask RegisterA Extended ID0
------------------------------------------------------*/
union byte_def c0lmar2_addr;
#define     c0lmar2     c0lmar2_addr.byte

#define     eid14m_c0lmar2	 	  	 c0lmar2_addr.bit.b0
#define     eid15m_c0lmar2	         c0lmar2_addr.bit.b1
#define     eid16m_c0lmar2   	     c0lmar2_addr.bit.b2
#define     eid17m_c0lmar2       	 c0lmar2_addr.bit.b3

/*------------------------------------------------------
    Can0 Messege Slot3 Control Register
------------------------------------------------------*/
union byte_def c0mctl3_addr;
#define     c0mctl3     c0mctl3_addr.byte

#define     NewData_c0mctl3			 c0mctl3_addr.bit.b0
#define     SentData_c0mctl3		 c0mctl3_addr.bit.b0
#define     InvalData_c0mctl3		 c0mctl3_addr.bit.b1
#define     TrmActive_c0mctl3		 c0mctl3_addr.bit.b1
#define     MsgLost_c0mctl3			 c0mctl3_addr.bit.b2
#define     RemActive_c0mctl3		 c0mctl3_addr.bit.b3
#define     RspLock_c0mctl3			 c0mctl3_addr.bit.b4
#define     Remote_c0mctl3			 c0mctl3_addr.bit.b5
#define     RecReq_c0mctl3			 c0mctl3_addr.bit.b6
#define     TrmReq_c0mctl3			 c0mctl3_addr.bit.b7

/*------------------------------------------------------
    Can0 Local Mask RegisterA Extended ID1
------------------------------------------------------*/
union byte_def c0lmar3_addr;
#define     c0lmar3     c0lmar3_addr.byte

#define     eid6m_c0lmar3	 	  	 c0lmar3_addr.bit.b0
#define     eid7m_c0lmar3	         c0lmar3_addr.bit.b1
#define     eid8m_c0lmar3   	     c0lmar3_addr.bit.b2
#define     eid9m_c0lmar3       	 c0lmar3_addr.bit.b3
#define     eid10m_c0lmar3	 	  	 c0lmar3_addr.bit.b4
#define     eid11m_c0lmar3	         c0lmar3_addr.bit.b5
#define     eid12m_c0lmar3   	     c0lmar3_addr.bit.b6
#define     eid13m_c0lmar3       	 c0lmar3_addr.bit.b7

/*------------------------------------------------------
    Can0 Messege Slot4 Control Register
------------------------------------------------------*/
union byte_def c0mctl4_addr;
#define     c0mctl4     c0mctl4_addr.byte

#define     NewData_c0mctl4		  c0mctl4_addr.bit.b0
#define     SentData_c0mctl4	  c0mctl4_addr.bit.b0
#define     InvalData_c0mctl4	  c0mctl4_addr.bit.b1
#define     TrmActive_c0mctl4	  c0mctl4_addr.bit.b1
#define     MsgLost_c0mctl4		  c0mctl4_addr.bit.b2
#define     RemActive_c0mctl4	  c0mctl4_addr.bit.b3
#define     RspLock_c0mctl4		  c0mctl4_addr.bit.b4
#define     Remote_c0mctl4		  c0mctl4_addr.bit.b5
#define     RecReq_c0mctl4		  c0mctl4_addr.bit.b6
#define     TrmReq_c0mctl4		  c0mctl4_addr.bit.b7

/*------------------------------------------------------
    Can0 Local Mask RegisterA Extended ID2
------------------------------------------------------*/
union byte_def c0lmar4_addr;
#define     c0lmar4     c0lmar4_addr.byte

#define     eid0m_c0lmar4	 	  	 c0lmar4_addr.bit.b0
#define     eid1m_c0lmar4	         c0lmar4_addr.bit.b1
#define     eid2m_c0lmar4   	     c0lmar4_addr.bit.b2
#define     eid3m_c0lmar4       	 c0lmar4_addr.bit.b3
#define     eid4m_c0lmar4	 	  	 c0lmar4_addr.bit.b4
#define     eid5m_c0lmar4	         c0lmar4_addr.bit.b5

/*------------------------------------------------------
    Can0 Messege Slot5 Control Register
------------------------------------------------------*/
union byte_def c0mctl5_addr;
#define     c0mctl5     c0mctl5_addr.byte

#define     NewData_c0mctl5			 c0mctl5_addr.bit.b0
#define     SentData_c0mctl5		 c0mctl5_addr.bit.b0
#define     InvalData_c0mctl5		 c0mctl5_addr.bit.b1
#define     TrmActive_c0mctl5		 c0mctl5_addr.bit.b1
#define     MsgLost_c0mctl5			 c0mctl5_addr.bit.b2
#define     RemActive_c0mctl5		 c0mctl5_addr.bit.b3
#define     RspLock_c0mctl5			 c0mctl5_addr.bit.b4
#define     Remote_c0mctl5			 c0mctl5_addr.bit.b5
#define     RecReq_c0mctl5			 c0mctl5_addr.bit.b6
#define     TrmReq_c0mctl5			 c0mctl5_addr.bit.b7

/*------------------------------------------------------
    Can0 Messege Slot6 Control Register
------------------------------------------------------*/
union byte_def c0mctl6_addr;
#define     c0mctl6     c0mctl6_addr.byte

#define     NewData_c0mctl6		 c0mctl6_addr.bit.b0
#define     SentData_c0mctl6	 c0mctl6_addr.bit.b0
#define     InvalData_c0mctl6	 c0mctl6_addr.bit.b1
#define     TrmActive_c0mctl6	 c0mctl6_addr.bit.b1
#define     MsgLost_c0mctl6		 c0mctl6_addr.bit.b2
#define     RemActive_c0mctl6	 c0mctl6_addr.bit.b3
#define     RspLock_c0mctl6		 c0mctl6_addr.bit.b4
#define     Remote_c0mctl6		 c0mctl6_addr.bit.b5
#define     RecReq_c0mctl6		 c0mctl6_addr.bit.b6
#define     TrmReq_c0mctl6		 c0mctl6_addr.bit.b7

/*------------------------------------------------------
    Can0 Messege Slot7 Control Register
------------------------------------------------------*/
union byte_def c0mctl7_addr;
#define     c0mctl7     c0mctl7_addr.byte

#define     NewData_c0mctl7		 c0mctl7_addr.bit.b0
#define     SentData_c0mctl7	 c0mctl7_addr.bit.b0
#define     InvalData_c0mctl7	 c0mctl7_addr.bit.b1
#define     TrmActive_c0mctl7	 c0mctl7_addr.bit.b1
#define     MsgLost_c0mctl7		 c0mctl7_addr.bit.b2
#define     RemActive_c0mctl7	 c0mctl7_addr.bit.b3
#define     RspLock_c0mctl7		 c0mctl7_addr.bit.b4
#define     Remote_c0mctl7		 c0mctl7_addr.bit.b5
#define     RecReq_c0mctl7		 c0mctl7_addr.bit.b6
#define     TrmReq_c0mctl7		 c0mctl7_addr.bit.b7

/*------------------------------------------------------
    Can0 Messege Slot8 Control Register
------------------------------------------------------*/
union byte_def c0mctl8_addr;
#define     c0mctl8     c0mctl8_addr.byte

#define     NewData_c0mctl8		 c0mctl8_addr.bit.b0
#define     SentData_c0mctl8	 c0mctl8_addr.bit.b0
#define     InvalData_c0mctl8	 c0mctl8_addr.bit.b1
#define     TrmActive_c0mctl8	 c0mctl8_addr.bit.b1
#define     MsgLost_c0mctl8		 c0mctl8_addr.bit.b2
#define     RemActive_c0mctl8	 c0mctl8_addr.bit.b3
#define     RspLock_c0mctl8		 c0mctl8_addr.bit.b4
#define     Remote_c0mctl8		 c0mctl8_addr.bit.b5
#define     RecReq_c0mctl8		 c0mctl8_addr.bit.b6
#define     TrmReq_c0mctl8		 c0mctl8_addr.bit.b7

/*------------------------------------------------------
    Can0 Local Mask RegisterB Standard ID0
------------------------------------------------------*/
union byte_def c0lmbr0_addr;
#define     c0lmbr0     c0lmbr0_addr.byte

#define     sid6m_c0lmbr0	 	  	 c0lmbr0_addr.bit.b0
#define     sid7m_c0lmbr0	         c0lmbr0_addr.bit.b1
#define     sid8m_c0lmbr0   	     c0lmbr0_addr.bit.b2
#define     sid9m_c0lmbr0       	 c0lmbr0_addr.bit.b3
#define     sid10m_c0lmbr0	 	  	 c0lmbr0_addr.bit.b4

/*------------------------------------------------------
    Can0 Messege Slot9 Control Register
------------------------------------------------------*/
union byte_def c0mctl9_addr;
#define     c0mctl9     c0mctl9_addr.byte

#define     NewData_c0mctl9		 c0mctl9_addr.bit.b0
#define     SentData_c0mctl9	 c0mctl9_addr.bit.b0
#define     InvalData_c0mctl9	 c0mctl9_addr.bit.b1
#define     TrmActive_c0mctl9	 c0mctl9_addr.bit.b1
#define     MsgLost_c0mctl9		 c0mctl9_addr.bit.b2
#define     RemActive_c0mctl9	 c0mctl9_addr.bit.b3
#define     RspLock_c0mctl9		 c0mctl9_addr.bit.b4
#define     Remote_c0mctl9		 c0mctl9_addr.bit.b5
#define     RecReq_c0mctl9		 c0mctl9_addr.bit.b6
#define     TrmReq_c0mctl9		 c0mctl9_addr.bit.b7

/*------------------------------------------------------
    Can0 Local Mask RegisterB Standard ID1
------------------------------------------------------*/
union byte_def c0lmbr1_addr;
#define     c0lmbr1     c0lmbr1_addr.byte

#define     sid0m_c0lmbr1	 	  	 c0lmbr1_addr.bit.b0
#define     sid1m_c0lmbr1	         c0lmbr1_addr.bit.b1
#define     sid2m_c0lmbr1   	     c0lmbr1_addr.bit.b2
#define     sid3m_c0lmbr1       	 c0lmbr1_addr.bit.b3
#define     sid4m_c0lmbr1	 	  	 c0lmbr1_addr.bit.b4
#define     sid5m_c0lmbr1	 	  	 c0lmbr1_addr.bit.b5

/*------------------------------------------------------
    Can0 Messege Slot10 Control Register
------------------------------------------------------*/
union byte_def c0mctl10_addr;
#define     c0mctl10     c0mctl10_addr.byte

#define     NewData_c0mctl10	 c0mctl10_addr.bit.b0
#define     SentData_c0mctl10	 c0mctl10_addr.bit.b0
#define     InvalData_c0mctl10	 c0mctl10_addr.bit.b1
#define     TrmActive_c0mctl10	 c0mctl10_addr.bit.b1
#define     MsgLost_c0mctl10	 c0mctl10_addr.bit.b2
#define     RemActive_c0mctl10	 c0mctl10_addr.bit.b3
#define     RspLock_c0mctl10	 c0mctl10_addr.bit.b4
#define     Remote_c0mctl10		 c0mctl10_addr.bit.b5
#define     RecReq_c0mctl10		 c0mctl10_addr.bit.b6
#define     TrmReq_c0mctl10		 c0mctl10_addr.bit.b7

/*------------------------------------------------------
    Can0 Local Mask RegisterB Standard ID2
------------------------------------------------------*/
union byte_def c0lmbr2_addr;
#define     c0lmbr2     c0lmbr2_addr.byte

#define     eid14m_c0lmbr2	 	  	 c0lmbr2_addr.bit.b0
#define     eid15m_c0lmbr2	         c0lmbr2_addr.bit.b1
#define     eid16m_c0lmbr2   	     c0lmbr2_addr.bit.b2
#define     eid17m_c0lmbr2       	 c0lmbr2_addr.bit.b3

/*------------------------------------------------------
    Can0 Messege Slot11 Control Register
------------------------------------------------------*/
union byte_def c0mctl11_addr;
#define     c0mctl11     c0mctl11_addr.byte

#define     NewData_c0mctl11	 c0mctl11_addr.bit.b0
#define     SentData_c0mctl11	 c0mctl11_addr.bit.b0
#define     InvalData_c0mctl11	 c0mctl11_addr.bit.b1
#define     TrmActive_c0mctl11	 c0mctl11_addr.bit.b1
#define     MsgLost_c0mctl11	 c0mctl11_addr.bit.b2
#define     RemActive_c0mctl11	 c0mctl11_addr.bit.b3
#define     RspLock_c0mctl11	 c0mctl11_addr.bit.b4
#define     Remote_c0mctl11		 c0mctl11_addr.bit.b5
#define     RecReq_c0mctl11		 c0mctl11_addr.bit.b6
#define     TrmReq_c0mctl11		 c0mctl11_addr.bit.b7

/*------------------------------------------------------
    Can0 Local Mask RegisterB Standard ID3
------------------------------------------------------*/
union byte_def c0lmbr3_addr;
#define     c0lmbr3     c0lmbr3_addr.byte

#define     eid6m_c0lmbr3	 	  	 c0lmbr3_addr.bit.b0
#define     eid7m_c0lmbr3	         c0lmbr3_addr.bit.b1
#define     eid8m_c0lmbr3   	     c0lmbr3_addr.bit.b2
#define     eid9m_c0lmbr3       	 c0lmbr3_addr.bit.b3
#define     eid10m_c0lmbr3	 	  	 c0lmbr3_addr.bit.b4
#define     eid11m_c0lmbr3	         c0lmbr3_addr.bit.b5
#define     eid12m_c0lmbr3   	     c0lmbr3_addr.bit.b6
#define     eid13m_c0lmbr3       	 c0lmbr3_addr.bit.b7

/*------------------------------------------------------
    Can0 Messege Slot12 Control Register
------------------------------------------------------*/
union byte_def c0mctl12_addr;
#define     c0mctl12     c0mctl12_addr.byte

#define     NewData_c0mctl12	 c0mctl12_addr.bit.b0
#define     SentData_c0mctl12	 c0mctl12_addr.bit.b0
#define     InvalData_c0mctl12	 c0mctl12_addr.bit.b1
#define     TrmActive_c0mctl12	 c0mctl12_addr.bit.b1
#define     MsgLost_c0mctl12	 c0mctl12_addr.bit.b2
#define     RemActive_c0mctl12	 c0mctl12_addr.bit.b3
#define     RspLock_c0mctl12	 c0mctl12_addr.bit.b4
#define     Remote_c0mctl12		 c0mctl12_addr.bit.b5
#define     RecReq_c0mctl12		 c0mctl12_addr.bit.b6
#define     TrmReq_c0mctl12		 c0mctl12_addr.bit.b7

/*------------------------------------------------------
    Can0 Local Mask RegisterB Standard ID4
------------------------------------------------------*/
union byte_def c0lmbr4_addr;
#define     c0lmbr4     c0lmbr4_addr.byte

#define     eid0m_c0lmbr4	 	  	 c0lmbr4_addr.bit.b0
#define     eid1m_c0lmbr4	         c0lmbr4_addr.bit.b1
#define     eid2m_c0lmbr4   	     c0lmbr4_addr.bit.b2
#define     eid3m_c0lmbr4       	 c0lmbr4_addr.bit.b3
#define     eid4m_c0lmbr4	 	  	 c0lmbr4_addr.bit.b4
#define     eid5m_c0lmbr4	         c0lmbr4_addr.bit.b5

/*------------------------------------------------------
    Can0 Messege Slot13 Control Register
------------------------------------------------------*/
union byte_def c0mctl13_addr;
#define     c0mctl13     c0mctl13_addr.byte

#define     NewData_c0mctl13	 c0mctl13_addr.bit.b0
#define     SentData_c0mctl13	 c0mctl13_addr.bit.b0
#define     InvalData_c0mctl13	 c0mctl13_addr.bit.b1
#define     TrmActive_c0mctl13	 c0mctl13_addr.bit.b1
#define     MsgLost_c0mctl13	 c0mctl13_addr.bit.b2
#define     RemActive_c0mctl13	 c0mctl13_addr.bit.b3
#define     RspLock_c0mctl13	 c0mctl13_addr.bit.b4
#define     Remote_c0mctl13		 c0mctl13_addr.bit.b5
#define     RecReq_c0mctl13		 c0mctl13_addr.bit.b6
#define     TrmReq_c0mctl13		 c0mctl13_addr.bit.b7

/*------------------------------------------------------
    Can0 Messege Slot14 Control Register
------------------------------------------------------*/
union byte_def c0mctl14_addr;
#define     c0mctl14     c0mctl14_addr.byte

#define     NewData_c0mctl14	 c0mctl14_addr.bit.b0
#define     SentData_c0mctl14	 c0mctl14_addr.bit.b0
#define     InvalData_c0mctl14	 c0mctl14_addr.bit.b1
#define     TrmActive_c0mctl14	 c0mctl14_addr.bit.b1
#define     MsgLost_c0mctl14	 c0mctl14_addr.bit.b2
#define     RemActive_c0mctl14	 c0mctl14_addr.bit.b3
#define     RspLock_c0mctl14	 c0mctl14_addr.bit.b4
#define     Remote_c0mctl14		 c0mctl14_addr.bit.b5
#define     RecReq_c0mctl14		 c0mctl14_addr.bit.b6
#define     TrmReq_c0mctl14		 c0mctl14_addr.bit.b7

/*------------------------------------------------------
    Can0 Messege Slot15 Control Register
------------------------------------------------------*/
union byte_def c0mctl15_addr;
#define     c0mctl15     c0mctl15_addr.byte

#define     NewData_c0mctl15	 c0mctl15_addr.bit.b0
#define     SentData_c0mctl15	 c0mctl15_addr.bit.b0
#define     InvalData_c0mctl15	 c0mctl15_addr.bit.b1
#define     TrmActive_c0mctl15	 c0mctl15_addr.bit.b1
#define     MsgLost_c0mctl15	 c0mctl15_addr.bit.b2
#define     RemActive_c0mctl15	 c0mctl15_addr.bit.b3
#define     RspLock_c0mctl15	 c0mctl15_addr.bit.b4
#define     Remote_c0mctl15		 c0mctl15_addr.bit.b5
#define     RecReq_c0mctl15		 c0mctl15_addr.bit.b6
#define     TrmReq_c0mctl15		 c0mctl15_addr.bit.b7

/*------------------------------------------------------
    Can0 Slot Buffer Select Register
------------------------------------------------------*/
union byte_def c0sbs_addr;
#define     c0sbs     c0sbs_addr.byte

#define     sbs00_c0sbs	 	    c0sbs_addr.bit.b0
#define     sbs01_c0sbs         c0sbs_addr.bit.b1
#define     sbs02_c0sbs         c0sbs_addr.bit.b2
#define     sbs03_c0sbs         c0sbs_addr.bit.b3
#define     sbs10_c0sbs	 	    c0sbs_addr.bit.b4
#define     sbs11_c0sbs         c0sbs_addr.bit.b5
#define     sbs12_c0sbs         c0sbs_addr.bit.b6
#define     sbs13_c0sbs         c0sbs_addr.bit.b7

/*------------------------------------------------------
   Can0 Control Register 1	
------------------------------------------------------*/
union byte_def c0ctlr1_addr;
#define     c0ctlr1     c0ctlr1_addr.byte

//#define     bnk1_c0ctlr1         c0ctlr1_addr.bit.b2
#define     banksel_c0ctlr1          c0ctlr1_addr.bit.b3
//#define     cslc0_c0ctlr1  	     c0ctlr1_addr.bit.b4
//#define     cslc1_c0ctlr1        c0ctlr1_addr.bit.b5

/*------------------------------------------------------
   Can0 Clock Stop Control Register
------------------------------------------------------*/
union byte_def c0slpr_addr;
#define     c0slpr     c0slpr_addr.byte

#define     sleep_c0slpr         c0slpr_addr.bit.b0

/*------------------------------------------------------
   Can0 Acceptance Filtering Support Unit
------------------------------------------------------*/
#define     c0afs        c0afs_addr.word
#define     c0afsl       c0afs_addr.byte.low
#define     c0afsh       c0afs_addr.byte.high

/********************************************************
*   declare SFR union                                   *
********************************************************/

/*------------------------------------------------------
    Interrupt control registers
------------------------------------------------------*/
union{
    struct{
        char    ilvl0:1;            /* Interrupt priority level select bit */
        char    ilvl1:1;            /* Interrupt priority level select bit */
        char    ilvl2:1;            /* Interrupt priority level select bit */
        char    ir:1;               /* Interrupt request bit */
        char    pol:1;              /* Polarity select bit */
        char    lvs:1;
        char    b6:1;
        char    b7:1;
    }bit;
    char    byte;
}ad0ic_addr,ad1ic_addr,bcn0ic_addr,bcn1ic_addr,bcn2ic_addr,bcn3ic_addr,bcn4ic_addr,
 dm0ic_addr,dm1ic_addr,dm2ic_addr,dm3ic_addr,kupic_addr,
 ta0ic_addr,ta1ic_addr,ta2ic_addr,ta3ic_addr,ta4ic_addr,
 tb0ic_addr,tb1ic_addr,tb2ic_addr,tb3ic_addr,tb4ic_addr,tb5ic_addr,
 s0tic_addr,s1tic_addr,s2tic_addr,s3tic_addr,s4tic_addr,
 s0ric_addr,s1ric_addr,s2ric_addr,s3ric_addr,s4ric_addr,
 iio0ic_addr,iio1ic_addr,iio2ic_addr,iio3ic_addr,iio4ic_addr,iio5ic_addr,
 iio6ic_addr,iio7ic_addr,iio8ic_addr,iio9ic_addr,iio10ic_addr,iio11ic_addr,
 int0ic_addr,int1ic_addr,int2ic_addr,int3ic_addr,int4ic_addr,int5ic_addr,
 can0ic_addr,can1ic_addr,can2ic_addr;

/*------------------------------------------------------
     ad0ic
------------------------------------------------------*/
#define     ad0ic        ad0ic_addr.byte

#define     ilvl0_ad0ic  ad0ic_addr.bit.ilvl0
#define     ilvl1_ad0ic  ad0ic_addr.bit.ilvl1
#define     ilvl2_ad0ic  ad0ic_addr.bit.ilvl2
#define     ir_ad0ic     ad0ic_addr.bit.ir

/*------------------------------------------------------
     ad1ic
------------------------------------------------------*/
#define     ad1ic        ad1ic_addr.byte

#define     ilvl0_ad1ic  ad1ic_addr.bit.ilvl0
#define     ilvl1_ad1ic  ad1ic_addr.bit.ilvl1
#define     ilvl2_ad1ic  ad1ic_addr.bit.ilvl2
#define     ir_ad1ic     ad1ic_addr.bit.ir

/*------------------------------------------------------
     bcn0ic
------------------------------------------------------*/
#define     bcn0ic      bcn0ic_addr.byte

#define     ilvl0_bcn0ic    bcn0ic_addr.bit.ilvl0
#define     ilvl1_bcn0ic    bcn0ic_addr.bit.ilvl1
#define     ilvl2_bcn0ic    bcn0ic_addr.bit.ilvl2
#define     ir_bcn0ic   bcn0ic_addr.bit.ir

/*------------------------------------------------------
     bcn1ic
------------------------------------------------------*/
#define     bcn1ic      bcn1ic_addr.byte

#define     ilvl0_bcn1ic    bcn1ic_addr.bit.ilvl0
#define     ilvl1_bcn1ic    bcn1ic_addr.bit.ilvl1
#define     ilvl2_bcn1ic    bcn1ic_addr.bit.ilvl2
#define     ir_bcn1ic   	bcn1ic_addr.bit.ir

/*------------------------------------------------------
     bcn2ic
------------------------------------------------------*/
#define     bcn2ic      bcn2ic_addr.byte

#define     ilvl0_bcn2ic    bcn2ic_addr.bit.ilvl0
#define     ilvl1_bcn2ic    bcn2ic_addr.bit.ilvl1
#define     ilvl2_bcn2ic    bcn2ic_addr.bit.ilvl2
#define     ir_bcn2ic   bcn2ic_addr.bit.ir

/*------------------------------------------------------
     bcn3ic
------------------------------------------------------*/
#define     bcn3ic      bcn3ic_addr.byte

#define     ilvl0_bcn3ic    bcn3ic_addr.bit.ilvl0
#define     ilvl1_bcn3ic    bcn3ic_addr.bit.ilvl1
#define     ilvl2_bcn3ic    bcn3ic_addr.bit.ilvl2
#define     ir_bcn3ic   bcn3ic_addr.bit.ir

/*------------------------------------------------------
     bcn4ic
------------------------------------------------------*/
#define     bcn4ic      bcn4ic_addr.byte

#define     ilvl0_bcn4ic    bcn4ic_addr.bit.ilvl0
#define     ilvl1_bcn4ic    bcn4ic_addr.bit.ilvl1
#define     ilvl2_bcn4ic    bcn4ic_addr.bit.ilvl2
#define     ir_bcn4ic   bcn4ic_addr.bit.ir

/*------------------------------------------------------
     dm0ic
------------------------------------------------------*/
#define     dm0ic       dm0ic_addr.byte

#define     ilvl0_dm0ic dm0ic_addr.bit.ilvl0
#define     ilvl1_dm0ic dm0ic_addr.bit.ilvl1
#define     ilvl2_dm0ic dm0ic_addr.bit.ilvl2
#define     ir_dm0ic    dm0ic_addr.bit.ir

/*------------------------------------------------------
     dm1ic
------------------------------------------------------*/
#define     dm1ic       dm1ic_addr.byte

#define     ilvl0_dm1ic dm1ic_addr.bit.ilvl0
#define     ilvl1_dm1ic dm1ic_addr.bit.ilvl1
#define     ilvl2_dm1ic dm1ic_addr.bit.ilvl2
#define     ir_dm1ic    dm1ic_addr.bit.ir

/*------------------------------------------------------
     dm2ic
------------------------------------------------------*/
#define     dm2ic       dm2ic_addr.byte

#define     ilvl0_dm2ic dm2ic_addr.bit.ilvl0
#define     ilvl1_dm2ic dm2ic_addr.bit.ilvl1
#define     ilvl2_dm2ic dm2ic_addr.bit.ilvl2
#define     ir_dm2ic    dm2ic_addr.bit.ir

/*------------------------------------------------------
     dm3ic
------------------------------------------------------*/
#define     dm3ic       dm3ic_addr.byte

#define     ilvl0_dm3ic dm3ic_addr.bit.ilvl0
#define     ilvl1_dm3ic dm3ic_addr.bit.ilvl1
#define     ilvl2_dm3ic dm3ic_addr.bit.ilvl2
#define     ir_dm3ic    dm3ic_addr.bit.ir


/*------------------------------------------------------
     kupic
------------------------------------------------------*/
#define     kupic       kupic_addr.byte

#define     ilvl0_kupic kupic_addr.bit.ilvl0
#define     ilvl1_kupic kupic_addr.bit.ilvl1
#define     ilvl2_kupic kupic_addr.bit.ilvl2
#define     ir_kupic    kupic_addr.bit.ir

/*------------------------------------------------------
     ta0ic
------------------------------------------------------*/
#define     ta0ic       ta0ic_addr.byte

#define     ilvl0_ta0ic ta0ic_addr.bit.ilvl0
#define     ilvl1_ta0ic ta0ic_addr.bit.ilvl1
#define     ilvl2_ta0ic ta0ic_addr.bit.ilvl2
#define     ir_ta0ic    ta0ic_addr.bit.ir

/*------------------------------------------------------
     ta1ic
------------------------------------------------------*/
#define     ta1ic       ta1ic_addr.byte

#define     ilvl0_ta1ic ta1ic_addr.bit.ilvl0
#define     ilvl1_ta1ic ta1ic_addr.bit.ilvl1
#define     ilvl2_ta1ic ta1ic_addr.bit.ilvl2
#define     ir_ta1ic    ta1ic_addr.bit.ir

/*------------------------------------------------------
     ta2ic
------------------------------------------------------*/
#define     ta2ic       ta2ic_addr.byte
#define     ilvl0_ta2ic ta2ic_addr.bit.ilvl0
#define     ilvl1_ta2ic ta2ic_addr.bit.ilvl1
#define     ilvl2_ta2ic ta2ic_addr.bit.ilvl2
#define     ir_ta2ic    ta2ic_addr.bit.ir

/*------------------------------------------------------
     ta3ic
------------------------------------------------------*/
#define     ta3ic       ta3ic_addr.byte

#define     ilvl0_ta3ic ta3ic_addr.bit.ilvl0
#define     ilvl1_ta3ic ta3ic_addr.bit.ilvl1
#define     ilvl2_ta3ic ta3ic_addr.bit.ilvl2
#define     ir_ta3ic    ta3ic_addr.bit.ir

/*------------------------------------------------------
     ta4ic
------------------------------------------------------*/
#define     ta4ic       ta4ic_addr.byte

#define     ilvl0_ta4ic ta4ic_addr.bit.ilvl0
#define     ilvl1_ta4ic ta4ic_addr.bit.ilvl1
#define     ilvl2_ta4ic ta4ic_addr.bit.ilvl2
#define     ir_ta4ic    ta4ic_addr.bit.ir

/*------------------------------------------------------
     tb0ic
------------------------------------------------------*/
#define     tb0ic       tb0ic_addr.byte

#define     ilvl0_tb0ic tb0ic_addr.bit.ilvl0
#define     ilvl1_tb0ic tb0ic_addr.bit.ilvl1
#define     ilvl2_tb0ic tb0ic_addr.bit.ilvl2
#define     ir_tb0ic    tb0ic_addr.bit.ir

/*------------------------------------------------------
     tb1ic
------------------------------------------------------*/
#define     tb1ic       tb1ic_addr.byte

#define     ilvl0_tb1ic tb1ic_addr.bit.ilvl0
#define     ilvl1_tb1ic tb1ic_addr.bit.ilvl1
#define     ilvl2_tb1ic tb1ic_addr.bit.ilvl2
#define     ir_tb1ic    tb1ic_addr.bit.ir

/*------------------------------------------------------
     tb2ic
------------------------------------------------------*/
#define     tb2ic       tb2ic_addr.byte

#define     ilvl0_tb2ic tb2ic_addr.bit.ilvl0
#define     ilvl1_tb2ic tb2ic_addr.bit.ilvl1
#define     ilvl2_tb2ic tb2ic_addr.bit.ilvl2
#define     ir_tb2ic    tb2ic_addr.bit.ir

/*------------------------------------------------------
     tb3ic
------------------------------------------------------*/
#define     tb3ic       tb3ic_addr.byte

#define     ilvl0_tb3ic tb3ic_addr.bit.ilvl0
#define     ilvl1_tb3ic tb3ic_addr.bit.ilvl1
#define     ilvl2_tb3ic tb3ic_addr.bit.ilvl2
#define     ir_tb3ic    tb3ic_addr.bit.ir

/*------------------------------------------------------
     tb4ic
------------------------------------------------------*/
#define     tb4ic       tb4ic_addr.byte

#define     ilvl0_tb4ic tb4ic_addr.bit.ilvl0
#define     ilvl1_tb4ic tb4ic_addr.bit.ilvl1
#define     ilvl2_tb4ic tb4ic_addr.bit.ilvl2
#define     ir_tb4ic    tb4ic_addr.bit.ir

/*------------------------------------------------------
     tb5ic
------------------------------------------------------*/
#define     tb5ic       tb5ic_addr.byte

#define     ilvl0_tb5ic tb5ic_addr.bit.ilvl0
#define     ilvl1_tb5ic tb5ic_addr.bit.ilvl1
#define     ilvl2_tb5ic tb5ic_addr.bit.ilvl2
#define     ir_tb5ic    tb5ic_addr.bit.ir

/*------------------------------------------------------
     s0tic
------------------------------------------------------*/
#define     s0tic       s0tic_addr.byte

#define     ilvl0_s0tic s0tic_addr.bit.ilvl0
#define     ilvl1_s0tic s0tic_addr.bit.ilvl1
#define     ilvl2_s0tic s0tic_addr.bit.ilvl2
#define     ir_s0tic    s0tic_addr.bit.ir

/*------------------------------------------------------
     s1tic
------------------------------------------------------*/
#define     s1tic       s1tic_addr.byte

#define     ilvl0_s1tic s1tic_addr.bit.ilvl0
#define     ilvl1_s1tic s1tic_addr.bit.ilvl1
#define     ilvl2_s1tic s1tic_addr.bit.ilvl2
#define     ir_s1tic    s1tic_addr.bit.ir

/*------------------------------------------------------
     s2tic
------------------------------------------------------*/
#define     s2tic       s2tic_addr.byte

#define     ilvl0_s2tic s2tic_addr.bit.ilvl0
#define     ilvl1_s2tic s2tic_addr.bit.ilvl1
#define     ilvl2_s2tic s2tic_addr.bit.ilvl2
#define     ir_s2tic    s2tic_addr.bit.ir

/*------------------------------------------------------
     s3tic
------------------------------------------------------*/
#define     s3tic       s3tic_addr.byte

#define     ilvl0_s3tic s3tic_addr.bit.ilvl0
#define     ilvl1_s3tic s3tic_addr.bit.ilvl1
#define     ilvl2_s3tic s3tic_addr.bit.ilvl2
#define     ir_s3tic    s3tic_addr.bit.ir

/*------------------------------------------------------
     s4tic
------------------------------------------------------*/
#define     s4tic       s4tic_addr.byte

#define     ilvl0_s4tic s4tic_addr.bit.ilvl0
#define     ilvl1_s4tic s4tic_addr.bit.ilvl1
#define     ilvl2_s4tic s4tic_addr.bit.ilvl2
#define     ir_s4tic    s4tic_addr.bit.ir

/*------------------------------------------------------
     s0ric
------------------------------------------------------*/
#define     s0ric       s0ric_addr.byte

#define     ilvl0_s0ric s0ric_addr.bit.ilvl0
#define     ilvl1_s0ric s0ric_addr.bit.ilvl1
#define     ilvl2_s0ric s0ric_addr.bit.ilvl2
#define     ir_s0ric    s0ric_addr.bit.ir

/*------------------------------------------------------
     s1ric
------------------------------------------------------*/
#define     s1ric       s1ric_addr.byte

#define     ilvl0_s1ric s1ric_addr.bit.ilvl0
#define     ilvl1_s1ric s1ric_addr.bit.ilvl1
#define     ilvl2_s1ric s1ric_addr.bit.ilvl2
#define     ir_s1ric    s1ric_addr.bit.ir

/*------------------------------------------------------
     s2ric
------------------------------------------------------*/
#define     s2ric       s2ric_addr.byte

#define     ilvl0_s2ric s2ric_addr.bit.ilvl0
#define     ilvl1_s2ric s2ric_addr.bit.ilvl1
#define     ilvl2_s2ric s2ric_addr.bit.ilvl2
#define     ir_s2ric    s2ric_addr.bit.ir

/*------------------------------------------------------
     s3ric
------------------------------------------------------*/
#define     s3ric       s3ric_addr.byte

#define     ilvl0_s3ric s3ric_addr.bit.ilvl0
#define     ilvl1_s3ric s3ric_addr.bit.ilvl1
#define     ilvl2_s3ric s3ric_addr.bit.ilvl2
#define     ir_s3ric    s3ric_addr.bit.ir

/*------------------------------------------------------
     s4ric
------------------------------------------------------*/
#define     s4ric       s4ric_addr.byte

#define     ilvl0_s4ric s4ric_addr.bit.ilvl0
#define     ilvl1_s4ric s4ric_addr.bit.ilvl1
#define     ilvl2_s4ric s4ric_addr.bit.ilvl2
#define     ir_s4ric    s4ric_addr.bit.ir

/*------------------------------------------------------
     iio0ic
------------------------------------------------------*/
#define     iio0ic       iio0ic_addr.byte

#define     ilvl0_iio0ic iio0ic_addr.bit.ilvl0
#define     ilvl1_iio0ic iio0ic_addr.bit.ilvl1
#define     ilvl2_iio0ic iio0ic_addr.bit.ilvl2
#define     ir_iio0ic    iio0ic_addr.bit.ir

/*------------------------------------------------------
     iio1ic
------------------------------------------------------*/
#define     iio1ic       iio1ic_addr.byte

#define     ilvl0_iio1ic iio1ic_addr.bit.ilvl0
#define     ilvl1_iio1ic iio1ic_addr.bit.ilvl1
#define     ilvl2_iio1ic iio1ic_addr.bit.ilvl2
#define     ir_iio1ic    iio1ic_addr.bit.ir

/*------------------------------------------------------
     iio2ic
------------------------------------------------------*/
#define     iio2ic       iio2ic_addr.byte

#define     ilvl0_iio2ic iio2ic_addr.bit.ilvl0
#define     ilvl1_iio2ic iio2ic_addr.bit.ilvl1
#define     ilvl2_iio2ic iio2ic_addr.bit.ilvl2
#define     ir_iio2ic    iio2ic_addr.bit.ir

/*------------------------------------------------------
     iio3ic
------------------------------------------------------*/
#define     iio3ic       iio3ic_addr.byte

#define     ilvl0_iio3ic iio3ic_addr.bit.ilvl0
#define     ilvl1_iio3ic iio3ic_addr.bit.ilvl1
#define     ilvl2_iio3ic iio3ic_addr.bit.ilvl2
#define     ir_iio3ic    iio3ic_addr.bit.ir

/*------------------------------------------------------
     iio4ic
------------------------------------------------------*/
#define     iio4ic       iio4ic_addr.byte

#define     ilvl0_iio4ic iio4ic_addr.bit.ilvl0
#define     ilvl1_iio4ic iio4ic_addr.bit.ilvl1
#define     ilvl2_iio4ic iio4ic_addr.bit.ilvl2
#define     ir_iio4ic    iio4ic_addr.bit.ir

/*------------------------------------------------------
     iio5ic
------------------------------------------------------*/
#define     iio5ic       iio5ic_addr.byte

#define     ilvl0_iio5ic iio5ic_addr.bit.ilvl0
#define     ilvl1_iio5ic iio5ic_addr.bit.ilvl1
#define     ilvl2_iio5ic iio5ic_addr.bit.ilvl2
#define     ir_iio5ic    iio5ic_addr.bit.ir

/*------------------------------------------------------
     iio6ic
------------------------------------------------------*/
#define     iio6ic       iio6ic_addr.byte

#define     ilvl0_iio6ic iio6ic_addr.bit.ilvl0
#define     ilvl1_iio6ic iio6ic_addr.bit.ilvl1
#define     ilvl2_iio6ic iio6ic_addr.bit.ilvl2
#define     ir_iio6ic    iio6ic_addr.bit.ir

/*------------------------------------------------------
     iio7ic
------------------------------------------------------*/
#define     iio7ic       iio7ic_addr.byte

#define     ilvl0_iio7ic iio7ic_addr.bit.ilvl0
#define     ilvl1_iio7ic iio7ic_addr.bit.ilvl1
#define     ilvl2_iio7ic iio7ic_addr.bit.ilvl2
#define     ir_iio7ic    iio7ic_addr.bit.ir

/*------------------------------------------------------
     iio8ic
------------------------------------------------------*/
#define     iio8ic       iio8ic_addr.byte

#define     ilvl0_iio8ic iio8ic_addr.bit.ilvl0
#define     ilvl1_iio8ic iio8ic_addr.bit.ilvl1
#define     ilvl2_iio8ic iio8ic_addr.bit.ilvl2
#define     ir_iio8ic    iio8ic_addr.bit.ir

/*------------------------------------------------------
     iio9ic
------------------------------------------------------*/
#define     iio9ic       iio9ic_addr.byte

#define     ilvl0_iio9ic iio9ic_addr.bit.ilvl0
#define     ilvl1_iio9ic iio9ic_addr.bit.ilvl1
#define     ilvl2_iio9ic iio9ic_addr.bit.ilvl2
#define     ir_iio9ic    iio9ic_addr.bit.ir

/*------------------------------------------------------
     iio10ic
------------------------------------------------------*/
#define     iio10ic       iio10ic_addr.byte

#define     ilvl0_iio10ic iio10ic_addr.bit.ilvl0
#define     ilvl1_iio10ic iio10ic_addr.bit.ilvl1
#define     ilvl2_iio10ic iio10ic_addr.bit.ilvl2
#define     ir_iio10ic    iio10ic_addr.bit.ir

/*------------------------------------------------------
     iio11ic
------------------------------------------------------*/
#define     iio11ic       iio11ic_addr.byte

#define     ilvl0_iio11ic iio11ic_addr.bit.ilvl0
#define     ilvl1_iio11ic iio11ic_addr.bit.ilvl1
#define     ilvl2_iio11ic iio11ic_addr.bit.ilvl2
#define     ir_iio11ic    iio11ic_addr.bit.ir

/*------------------------------------------------------
     int0ic
------------------------------------------------------*/
#define     int0ic      int0ic_addr.byte

#define     ilvl0_int0ic    int0ic_addr.bit.ilvl0
#define     ilvl1_int0ic    int0ic_addr.bit.ilvl1
#define     ilvl2_int0ic    int0ic_addr.bit.ilvl2
#define     ir_int0ic   int0ic_addr.bit.ir
#define     pol_int0ic  int0ic_addr.bit.pol
#define     lvs_int0ic  int0ic_addr.bit.lvs

/*------------------------------------------------------
     int1ic
------------------------------------------------------*/
#define     int1ic      int1ic_addr.byte

#define     ilvl0_int1ic    int1ic_addr.bit.ilvl0
#define     ilvl1_int1ic    int1ic_addr.bit.ilvl1
#define     ilvl2_int1ic    int1ic_addr.bit.ilvl2
#define     ir_int1ic   int1ic_addr.bit.ir
#define     pol_int1ic  int1ic_addr.bit.pol
#define     lvs_int1ic  int1ic_addr.bit.lvs

/*------------------------------------------------------
     int2ic
------------------------------------------------------*/
#define     int2ic      int2ic_addr.byte

#define     ilvl0_int2ic    int2ic_addr.bit.ilvl0
#define     ilvl1_int2ic    int2ic_addr.bit.ilvl1
#define     ilvl2_int2ic    int2ic_addr.bit.ilvl2
#define     ir_int2ic   int2ic_addr.bit.ir
#define     pol_int2ic  int2ic_addr.bit.pol
#define     lvs_int2ic  int2ic_addr.bit.lvs

/*------------------------------------------------------
     int3ic
------------------------------------------------------*/
#define     int3ic      int3ic_addr.byte

#define     ilvl0_int3ic    int3ic_addr.bit.ilvl0
#define     ilvl1_int3ic    int3ic_addr.bit.ilvl1
#define     ilvl2_int3ic    int3ic_addr.bit.ilvl2
#define     ir_int3ic   int3ic_addr.bit.ir
#define     pol_int3ic  int3ic_addr.bit.pol
#define     lvs_int3ic  int3ic_addr.bit.lvs

/*------------------------------------------------------
     int4ic
------------------------------------------------------*/
#define     int4ic      int4ic_addr.byte

#define     ilvl0_int4ic    int4ic_addr.bit.ilvl0
#define     ilvl1_int4ic    int4ic_addr.bit.ilvl1
#define     ilvl2_int4ic    int4ic_addr.bit.ilvl2
#define     ir_int4ic   int4ic_addr.bit.ir
#define     pol_int4ic  int4ic_addr.bit.pol
#define     lvs_int4ic  int4ic_addr.bit.lvs

/*------------------------------------------------------
     int5ic
------------------------------------------------------*/
#define     int5ic      int5ic_addr.byte

#define     ilvl0_int5ic    int5ic_addr.bit.ilvl0
#define     ilvl1_int5ic    int5ic_addr.bit.ilvl1
#define     ilvl2_int5ic    int5ic_addr.bit.ilvl2
#define     ir_int5ic   int5ic_addr.bit.ir
#define     pol_int5ic  int5ic_addr.bit.pol
#define     lvs_int5ic  int5ic_addr.bit.lvs

/*------------------------------------------------------
     CAN0 Interrupt Control Register
------------------------------------------------------*/
#define     can0ic      can0ic_addr.byte

#define     ilvl0_can0ic    can0ic_addr.bit.ilvl0
#define     ilvl1_can0ic    can0ic_addr.bit.ilvl1
#define     ilvl2_can0ic    can0ic_addr.bit.ilvl2
#define     ir_can0ic   can0ic_addr.bit.ir

/*------------------------------------------------------
     CAN1 Interrupt Control Register
------------------------------------------------------*/
#define     can1ic      can1ic_addr.byte

#define     ilvl0_can1ic    can1ic_addr.bit.ilvl0
#define     ilvl1_can1ic    can1ic_addr.bit.ilvl1
#define     ilvl2_can1ic    can1ic_addr.bit.ilvl2
#define     ir_can1ic   can1ic_addr.bit.ir

/*------------------------------------------------------
     CAN2 Interrupt Control Register
------------------------------------------------------*/
#define     can2ic      can2ic_addr.byte

#define     ilvl0_can2ic    can2ic_addr.bit.ilvl0
#define     ilvl1_can2ic    can2ic_addr.bit.ilvl1
#define     ilvl2_can2ic    can2ic_addr.bit.ilvl2
#define     ir_can2ic   can2ic_addr.bit.ir

/*------------------------------------------------------
     Interruption requirement registers
------------------------------------------------------*/
union{
    struct{
        char    b1:1;
        char    bit1:1;
        char    bit2:1;
        char    bit3:1;
        char    bit4:1;
        char    bit5:1;
        char    bit6:1;
        char    bit7:1;
    }bit;
    char    byte;
}iio0ir_addr,iio1ir_addr,iio2ir_addr,iio3ir_addr,iio4ir_addr,iio5ir_addr,
 iio6ir_addr,iio7ir_addr,iio8ir_addr,iio9ir_addr,iio10ir_addr,iio11ir_addr;

/*------------------------------------------------------
     iio0ir
------------------------------------------------------*/
#define     iio0ir        iio0ir_addr.byte

#define     tm02r		iio0ir_addr.bit.bit1
#define     po13r		iio0ir_addr.bit.bit2
#define     g0rir		iio0ir_addr.bit.bit4
#define     sio0rr		iio0ir_addr.bit.bit5

/*------------------------------------------------------
     iio1ir
------------------------------------------------------*/
#define     iio1ir        iio1ir_addr.byte

#define     tm00r		iio1ir_addr.bit.bit1
#define     po00r		iio1ir_addr.bit.bit1
#define     po14r		iio1ir_addr.bit.bit2
#define     g0tor		iio1ir_addr.bit.bit4
#define     sio0tr		iio1ir_addr.bit.bit5

/*------------------------------------------------------
     iio2ir
------------------------------------------------------*/
#define     iio2ir        iio2ir_addr.byte

#define     tm12r		iio2ir_addr.bit.bit2
#define     po12r		iio2ir_addr.bit.bit2
#define     g1rir		iio2ir_addr.bit.bit4
#define     sio1rr		iio2ir_addr.bit.bit5

/*------------------------------------------------------
     iio3ir
------------------------------------------------------*/
#define     iio3ir        iio3ir_addr.byte

#define     tm03r		iio3ir_addr.bit.bit1
#define     po10r		iio3ir_addr.bit.bit2
#define     po27r		iio3ir_addr.bit.bit3
#define     g1tor		iio3ir_addr.bit.bit4
#define     sio1tr		iio3ir_addr.bit.bit5

/*------------------------------------------------------
     iio4ir
------------------------------------------------------*/
#define     iio4ir        iio4ir_addr.byte

#define     tm04r		iio4ir_addr.bit.bit1
#define     po04r		iio4ir_addr.bit.bit1
#define     tm17r		iio4ir_addr.bit.bit2
#define     po17r		iio4ir_addr.bit.bit2
#define     po32r		iio4ir_addr.bit.bit3
#define     bt1r		iio4ir_addr.bit.bit4
#define     srt1r		iio4ir_addr.bit.bit6
#define     srt0r		iio4ir_addr.bit.bit7

/*------------------------------------------------------
     iio5ir
------------------------------------------------------*/
#define     iio5ir        iio5ir_addr.byte

#define     tm05r		iio5ir_addr.bit.bit1
#define     po05r		iio5ir_addr.bit.bit1
#define     po21r		iio5ir_addr.bit.bit2
#define     po33r		iio5ir_addr.bit.bit3
#define     sio2rr		iio5ir_addr.bit.bit4

/*------------------------------------------------------
     iio6ir
------------------------------------------------------*/
#define     iio6ir        iio6ir_addr.byte

#define     tm06r		iio6ir_addr.bit.bit1
#define     po20r		iio6ir_addr.bit.bit2
#define     po34r		iio6ir_addr.bit.bit3
#define     sio2tr		iio6ir_addr.bit.bit4

/*------------------------------------------------------
     iio7ir
------------------------------------------------------*/
#define     iio7ir        iio7ir_addr.byte

#define     tm07r		iio7ir_addr.bit.bit1
#define     po22r		iio7ir_addr.bit.bit2
#define     po35r		iio7ir_addr.bit.bit3
#define     bt0r		iio7ir_addr.bit.bit4
#define     ie0r		iio7ir_addr.bit.bit7

/*------------------------------------------------------
     iio8ir
------------------------------------------------------*/
#define     iio8ir        iio8ir_addr.byte

#define     tm11r		iio8ir_addr.bit.bit1
#define     po11r		iio8ir_addr.bit.bit1
#define     po23r		iio8ir_addr.bit.bit2
#define     po36r		iio8ir_addr.bit.bit3
#define     bt2r		iio8ir_addr.bit.bit4
#define     ie2r		iio8ir_addr.bit.bit6
#define     ie1r		iio8ir_addr.bit.bit7

/*------------------------------------------------------
     iio9ir
------------------------------------------------------*/
#define     iio9ir        iio9ir_addr.byte

#define     po15r		iio9ir_addr.bit.bit1
#define     po24r		iio9ir_addr.bit.bit2
#define     po31r		iio9ir_addr.bit.bit3
#define     sio3rr		iio9ir_addr.bit.bit4
#define     can0r		iio9ir_addr.bit.bit7

/*------------------------------------------------------
     iio10ir
------------------------------------------------------*/
#define     iio10ir        iio10ir_addr.byte

#define     tm16r		iio10ir_addr.bit.bit1
#define     po16r		iio10ir_addr.bit.bit1
#define     po25r		iio10ir_addr.bit.bit2
#define     po30r		iio10ir_addr.bit.bit3
#define     sio3tr		iio10ir_addr.bit.bit4
#define     can1r		iio10ir_addr.bit.bit7

/*------------------------------------------------------
     iio11ir
------------------------------------------------------*/
#define     iio11ir        iio11ir_addr.byte

#define     tm01r		iio11ir_addr.bit.bit1
#define     po01r		iio11ir_addr.bit.bit1
#define     po26r		iio11ir_addr.bit.bit2
#define     po37r		iio11ir_addr.bit.bit3
#define     bt3r		iio11ir_addr.bit.bit4
#define     hdlcr		iio11ir_addr.bit.bit5
#define     can2r		iio11ir_addr.bit.bit7

/*------------------------------------------------------
    	Interruption permission registers
------------------------------------------------------*/
union{
    struct{
        char    irlt:1;
        char    bit1:1;
        char    bit2:1;
        char    bit3:1;
        char    bit4:1;
        char    bit5:1;
        char    bit6:1;
        char    bit7:1;
    }bit;
    char    byte;
}iio0ie_addr,iio1ie_addr,iio2ie_addr,iio3ie_addr,iio4ie_addr,iio5ie_addr,
 iio6ie_addr,iio7ie_addr,iio8ie_addr,iio9ie_addr,iio10ie_addr,iio11ie_addr;

/*------------------------------------------------------
     iio0ie
------------------------------------------------------*/
#define     iio0ie        iio0ie_addr.byte

#define     irlt_iio0ie  	iio0ie_addr.bit.irlt
#define     tm02e			iio0ie_addr.bit.bit1
#define     po13e			iio0ie_addr.bit.bit2
#define     g0rie			iio0ie_addr.bit.bit4
#define     sio0re			iio0ie_addr.bit.bit5

/*------------------------------------------------------
     iio1ie
------------------------------------------------------*/
#define     iio1ie        iio1ie_addr.byte

#define     irlt_iio1ie 	iio0ie_addr.bit.irlt
#define     tm00e			iio1ie_addr.bit.bit1
#define     po00e			iio1ie_addr.bit.bit1
#define     po14e			iio1ie_addr.bit.bit2
#define     g0toe			iio1ie_addr.bit.bit4
#define     sio0te			iio1ie_addr.bit.bit5

/*------------------------------------------------------
     iio2ie
------------------------------------------------------*/
#define     iio2ie        iio2ie_addr.byte

#define     irlt_iio2ie  	iio0ie_addr.bit.irlt
#define     tm12e			iio2ie_addr.bit.bit2
#define     po12e			iio2ie_addr.bit.bit2
#define     g1rie			iio2ie_addr.bit.bit4
#define     sio1re			iio2ie_addr.bit.bit5

/*------------------------------------------------------
     iio3ie
------------------------------------------------------*/
#define     iio3ie        iio3ie_addr.byte

#define     irlt_iio3ie  	iio0ie_addr.bit.irlt
#define     tm03e			iio3ie_addr.bit.bit1
#define     po10e			iio3ie_addr.bit.bit2
#define     po27e			iio3ie_addr.bit.bit3
#define     g1toe			iio3ie_addr.bit.bit4
#define     sio1te			iio3ie_addr.bit.bit5

/*------------------------------------------------------
     iio4ie
------------------------------------------------------*/
#define     iio4ie        iio4ie_addr.byte

#define     irlt_iio4ie 	iio0ie_addr.bit.irlt
#define     tm04e			iio4ie_addr.bit.bit1
#define     po04e			iio4ie_addr.bit.bit1
#define     tm17e			iio4ie_addr.bit.bit2
#define     po17e			iio4ie_addr.bit.bit2
#define     po32e			iio4ie_addr.bit.bit3
#define     bt1e			iio4ie_addr.bit.bit4
#define     srt1e			iio4ie_addr.bit.bit6
#define     srt0e			iio4ie_addr.bit.bit7

/*------------------------------------------------------
     iio5ie
------------------------------------------------------*/
#define     iio5ie        iio5ie_addr.byte

#define     irlt_iio5ie  	iio0ie_addr.bit.irlt
#define     tm05e			iio5ie_addr.bit.bit1
#define     po05e			iio5ie_addr.bit.bit1
#define     po21e			iio5ie_addr.bit.bit2
#define     po33e			iio5ie_addr.bit.bit3
#define     sio2re			iio5ie_addr.bit.bit4

/*------------------------------------------------------
     iio6ie
------------------------------------------------------*/
#define     iio6ie        iio6ie_addr.byte

#define     irlt_iio6ie  	iio0ie_addr.bit.irlt
#define     tm06e			iio6ie_addr.bit.bit1
#define     po20e			iio6ie_addr.bit.bit2
#define     po34e			iio6ie_addr.bit.bit3
#define     sio2te			iio6ie_addr.bit.bit4

/*------------------------------------------------------
     iio7ie
------------------------------------------------------*/
#define     iio7ie        iio7ie_addr.byte

#define     irlt_iio7ie  	iio0ie_addr.bit.irlt
#define     tm07e			iio7ie_addr.bit.bit1
#define     po22e			iio7ie_addr.bit.bit2
#define     po35e			iio7ie_addr.bit.bit3
#define     bt0e			iio7ie_addr.bit.bit4
#define     ie0e			iio7ie_addr.bit.bit7

/*------------------------------------------------------
     iio8ie
------------------------------------------------------*/
#define     iio8ie        iio8ie_addr.byte

#define     irlt_iio8ie  	iio0ie_addr.bit.irlt
#define     tm11e			iio8ie_addr.bit.bit1
#define     po11e			iio8ie_addr.bit.bit1
#define     po23e			iio8ie_addr.bit.bit2
#define     po36e			iio8ie_addr.bit.bit3
#define     bt2e			iio8ie_addr.bit.bit4
#define     ie2e			iio8ie_addr.bit.bit6
#define     ie1e			iio8ie_addr.bit.bit7

/*------------------------------------------------------
     iio9ie
------------------------------------------------------*/
#define     iio9ie        iio9ie_addr.byte

#define     irlt_iio9ie  	iio0ie_addr.bit.irlt
#define     po15e			iio9ie_addr.bit.bit1
#define     po24e			iio9ie_addr.bit.bit2
#define     po31e			iio9ie_addr.bit.bit3
#define     sio3re			iio9ie_addr.bit.bit4
#define     can0e			iio9ie_addr.bit.bit7

/*------------------------------------------------------
     iio10ie
------------------------------------------------------*/
#define     iio10ie        iio10ie_addr.byte

#define     irlt_iio10ie  	iio0ie_addr.bit.irlt
#define     tm16e			iio10ie_addr.bit.bit1
#define     po16e			iio10ie_addr.bit.bit1
#define     po25e			iio10ie_addr.bit.bit2
#define     po30e			iio10ie_addr.bit.bit3
#define     sio3te			iio10ie_addr.bit.bit4
#define     can1e			iio10ie_addr.bit.bit7

/*------------------------------------------------------
     iio11ie
------------------------------------------------------*/
#define     iio11ie        iio11ie_addr.byte

#define     irlt_iio11ie	iio0ie_addr.bit.irlt
#define     tm01e			iio11ie_addr.bit.bit1
#define     po01e			iio11ie_addr.bit.bit1
#define     po26e			iio11ie_addr.bit.bit2
#define     po37e			iio11ie_addr.bit.bit3
#define     bt3e			iio11ie_addr.bit.bit4
#define     hdlce			iio11ie_addr.bit.bit5
#define     can2e			iio11ie_addr.bit.bit7

/*------------------------------------------------------
    Timer mode registers
------------------------------------------------------*/
union{
    struct{
        char    tmod0:1;        /* Operation mode select bit */
        char    tmod1:1;        /* Operation mode select bit */
        char    mr0:1;
        char    mr1:1;
        char    mr2:1;
        char    mr3:1;
        char    tck0:1;         /* Count source select bit */
        char    tck1:1;         /* Count source select bit */
    }bit;
    char    byte;
}ta0mr_addr,ta1mr_addr,ta2mr_addr,ta3mr_addr,ta4mr_addr,
 tb0mr_addr,tb1mr_addr,tb2mr_addr,tb3mr_addr,tb4mr_addr,tb5mr_addr;

/*------------------------------------------------------
     ta0mr
------------------------------------------------------*/
#define     ta0mr       ta0mr_addr.byte

#define     tmod0_ta0mr ta0mr_addr.bit.tmod0    /* Operation mode select bit */
#define     tmod1_ta0mr ta0mr_addr.bit.tmod1    /* Operation mode select bit */
//#define     mr0_ta0mr   ta0mr_addr.bit.mr0
#define     mr1_ta0mr   ta0mr_addr.bit.mr1
#define     mr2_ta0mr   ta0mr_addr.bit.mr2
#define     mr3_ta0mr   ta0mr_addr.bit.mr3
#define     tck0_ta0mr  ta0mr_addr.bit.tck0 /* Count source select bit */
#define     tck1_ta0mr  ta0mr_addr.bit.tck1 /* Count source select bit */

/*------------------------------------------------------
     ta1mr
------------------------------------------------------*/
#define     ta1mr       ta1mr_addr.byte

#define     tmod0_ta1mr ta1mr_addr.bit.tmod0    /* Operation mode select bit */
#define     tmod1_ta1mr ta1mr_addr.bit.tmod1    /* Operation mode select bit */
//#define     mr0_ta1mr   ta1mr_addr.bit.mr0
#define     mr1_ta1mr   ta1mr_addr.bit.mr1
#define     mr2_ta1mr   ta1mr_addr.bit.mr2
#define     mr3_ta1mr   ta1mr_addr.bit.mr3
#define     tck0_ta1mr  ta1mr_addr.bit.tck0 /* Count source select bit */
#define     tck1_ta1mr  ta1mr_addr.bit.tck1 /* Count source select bit */

/*------------------------------------------------------
     ta2mr
------------------------------------------------------*/
#define     ta2mr       ta2mr_addr.byte

#define     tmod0_ta2mr ta2mr_addr.bit.tmod0    /* Operation mode select bit */
#define     tmod1_ta2mr ta2mr_addr.bit.tmod1    /* Operation mode select bit */
//#define     mr0_ta2mr   ta2mr_addr.bit.mr0
#define     mr1_ta2mr   ta2mr_addr.bit.mr1
#define     mr2_ta2mr   ta2mr_addr.bit.mr2
#define     mr3_ta2mr   ta2mr_addr.bit.mr3
#define     tck0_ta2mr  ta2mr_addr.bit.tck0 /* Count source select bit */
#define     tck1_ta2mr  ta2mr_addr.bit.tck1 /* Count source select bit */

/*------------------------------------------------------
     ta3mr
------------------------------------------------------*/
#define     ta3mr       ta3mr_addr.byte

#define     tmod0_ta3mr ta3mr_addr.bit.tmod0    /* Operation mode select bit */
#define     tmod1_ta3mr ta3mr_addr.bit.tmod1    /* Operation mode select bit */
//#define     mr0_ta3mr   ta3mr_addr.bit.mr0
#define     mr1_ta3mr   ta3mr_addr.bit.mr1
#define     mr2_ta3mr   ta3mr_addr.bit.mr2
#define     mr3_ta3mr   ta3mr_addr.bit.mr3
#define     tck0_ta3mr  ta3mr_addr.bit.tck0 /* Count source select bit */
#define     tck1_ta3mr  ta3mr_addr.bit.tck1 /* Count source select bit */

/*------------------------------------------------------
     ta4mr
------------------------------------------------------*/
#define     ta4mr       ta4mr_addr.byte

#define     tmod0_ta4mr ta4mr_addr.bit.tmod0    /* Operation mode select bit */
#define     tmod1_ta4mr ta4mr_addr.bit.tmod1    /* Operation mode select bit */
//#define     mr0_ta4mr   ta4mr_addr.bit.mr0
#define     mr1_ta4mr   ta4mr_addr.bit.mr1
#define     mr2_ta4mr   ta4mr_addr.bit.mr2
#define     mr3_ta4mr   ta4mr_addr.bit.mr3
#define     tck0_ta4mr  ta4mr_addr.bit.tck0 /* Count source select bit */
#define     tck1_ta4mr  ta4mr_addr.bit.tck1 /* Count source select bit */

/*------------------------------------------------------
     tb0mr
 ------------------------------------------------------*/
#define     tb0mr       tb0mr_addr.byte

#define     tmod0_tb0mr tb0mr_addr.bit.tmod0    /* Operation mode select bit */
#define     tmod1_tb0mr tb0mr_addr.bit.tmod1    /* Operation mode select bit */
#define     mr0_tb0mr   tb0mr_addr.bit.mr0
#define     mr1_tb0mr   tb0mr_addr.bit.mr1
#define     mr2_tb0mr   tb0mr_addr.bit.mr2
#define     mr3_tb0mr   tb0mr_addr.bit.mr3
#define     tck0_tb0mr  tb0mr_addr.bit.tck0 /* Count source select bit */
#define     tck1_tb0mr  tb0mr_addr.bit.tck1 /* Count source select bit */

/*------------------------------------------------------
     tb1mr
------------------------------------------------------*/
#define     tb1mr       tb1mr_addr.byte

#define     tmod0_tb1mr tb1mr_addr.bit.tmod0    /* Operation mode select bit */
#define     tmod1_tb1mr tb1mr_addr.bit.tmod1    /* Operation mode select bit */
#define     mr0_tb1mr   tb1mr_addr.bit.mr0
#define     mr1_tb1mr   tb1mr_addr.bit.mr1
#define		mr2_tb1mr	tb1mr_addr.bit.mr2
#define     mr3_tb1mr   tb1mr_addr.bit.mr3
#define     tck0_tb1mr  tb1mr_addr.bit.tck0 /* Count source select bit */
#define     tck1_tb1mr  tb1mr_addr.bit.tck1 /* Count source select bit */

/*------------------------------------------------------
     tb2mr
------------------------------------------------------*/
#define     tb2mr       tb2mr_addr.byte

#define     tmod0_tb2mr tb2mr_addr.bit.tmod0    /* Operation mode select bit */
#define     tmod1_tb2mr tb2mr_addr.bit.tmod1    /* Operation mode select bit */
#define     mr0_tb2mr   tb2mr_addr.bit.mr0
#define     mr1_tb2mr   tb2mr_addr.bit.mr1
#define		mr2_tb2mr	tb2mr_addr.bit.mr2
#define     mr3_tb2mr   tb2mr_addr.bit.mr3
#define     tck0_tb2mr  tb2mr_addr.bit.tck0 /* Count source select bit */
#define     tck1_tb2mr  tb2mr_addr.bit.tck1 /* Count source select bit */

/*------------------------------------------------------
     tb3mr
------------------------------------------------------*/
#define     tb3mr       tb3mr_addr.byte

#define     tmod0_tb3mr tb3mr_addr.bit.tmod0    /* Operation mode select bit */
#define     tmod1_tb3mr tb3mr_addr.bit.tmod1    /* Operation mode select bit */
#define     mr0_tb3mr   tb3mr_addr.bit.mr0
#define     mr1_tb3mr   tb3mr_addr.bit.mr1
#define     mr2_tb3mr   tb3mr_addr.bit.mr2
#define     mr3_tb3mr   tb3mr_addr.bit.mr3
#define     tck0_tb3mr  tb3mr_addr.bit.tck0 /* Count source select bit */
#define     tck1_tb3mr  tb3mr_addr.bit.tck1 /* Count source select bit */

/*------------------------------------------------------
     tb4mr
------------------------------------------------------*/
#define     tb4mr       tb4mr_addr.byte

#define     tmod0_tb4mr tb4mr_addr.bit.tmod0    /* Operation mode select bit */
#define     tmod1_tb4mr tb4mr_addr.bit.tmod1    /* Operation mode select bit */
#define     mr0_tb4mr   tb4mr_addr.bit.mr0
#define     mr1_tb4mr   tb4mr_addr.bit.mr1
#define		mr2_tb4mr	tb4mr_addr.bit.mr2
#define     mr3_tb4mr   tb4mr_addr.bit.mr3
#define     tck0_tb4mr  tb4mr_addr.bit.tck0 /* Count source select bit */
#define     tck1_tb4mr  tb4mr_addr.bit.tck1 /* Count source select bit */

/*------------------------------------------------------
     tb5mr
------------------------------------------------------*/
#define     tb5mr       tb5mr_addr.byte

#define     tmod0_tb5mr tb5mr_addr.bit.tmod0    /* Operation mode select bit */
#define     tmod1_tb5mr tb5mr_addr.bit.tmod1    /* Operation mode select bit */
#define     mr0_tb5mr   tb5mr_addr.bit.mr0
#define     mr1_tb5mr   tb5mr_addr.bit.mr1
#define		mr2_tb5mr	tb5mr_addr.bit.mr2
#define     mr3_tb5mr   tb5mr_addr.bit.mr3
#define     tck0_tb5mr  tb5mr_addr.bit.tck0 /* Count source select bit */
#define     tck1_tb5mr  tb5mr_addr.bit.tck1 /* Count source select bit */

/*------------------------------------------------------
    UARTi transmit/receive mode registers
------------------------------------------------------*/
union{
    struct{
        char    smd0:1;             /* Serial I/O mode select bit */
        char    smd1:1;             /* Serial I/O mode select bit */
        char    smd2:1;             /* Serial I/O mode select bit */
        char    ckdir:1;            /* Internal/external clock select bit */
        char    stps:1;             /* Stop bit length select bit */
        char    pry:1;              /* Odd/even parity select bit */
        char    prye:1;             /* Parity enable bit */
        char    iopol:1;            /* TxD RxD I/O polarity reverse bit */
    }bit;
    char    byte;
}u0mr_addr,u1mr_addr,u2mr_addr,u3mr_addr,u4mr_addr;
/*------------------------------------------------------
     u0mr
------------------------------------------------------*/
#define     u0mr        u0mr_addr.byte

#define     smd0_u0mr   u0mr_addr.bit.smd0  /* Serial I/O mode select bit */
#define     smd1_u0mr   u0mr_addr.bit.smd1  /* Serial I/O mode select bit */
#define     smd2_u0mr   u0mr_addr.bit.smd2  /* Serial I/O mode select bit */
#define     ckdir_u0mr  u0mr_addr.bit.ckdir /* Internal/external clock select bit */
#define     stps_u0mr   u0mr_addr.bit.stps  /* Stop bit length select bit */
#define     pry_u0mr    u0mr_addr.bit.pry   /* Odd/even parity select bit */
#define     prye_u0mr   u0mr_addr.bit.prye  /* Parity enable bit */
#define     iopol_u0mr  u0mr_addr.bit.iopol  /* TxD RxD I/O polarity reverse bit */

/*------------------------------------------------------
     u1mr
------------------------------------------------------*/
#define     u1mr        u1mr_addr.byte

#define     smd0_u1mr   u1mr_addr.bit.smd0  /* Serial I/O mode select bit */
#define     smd1_u1mr   u1mr_addr.bit.smd1  /* Serial I/O mode select bit */
#define     smd2_u1mr   u1mr_addr.bit.smd2  /* Serial I/O mode select bit */
#define     ckdir_u1mr  u1mr_addr.bit.ckdir /* Internal/external clock select bit */
#define     stps_u1mr   u1mr_addr.bit.stps  /* Stop bit length select bit */
#define     pry_u1mr    u1mr_addr.bit.pry   /* Odd/even parity select bit */
#define     prye_u1mr   u1mr_addr.bit.prye  /* Parity enable bit */
#define     iopol_u1mr  u1mr_addr.bit.iopol  /* TxD RxD I/O polarity reverse bit */

/*------------------------------------------------------
     u2mr
------------------------------------------------------*/
#define     u2mr        u2mr_addr.byte

#define     smd0_u2mr   u2mr_addr.bit.smd0  /* Serial I/O mode select bit */
#define     smd1_u2mr   u2mr_addr.bit.smd1  /* Serial I/O mode select bit */
#define     smd2_u2mr   u2mr_addr.bit.smd2  /* Serial I/O mode select bit */
#define     ckdir_u2mr  u2mr_addr.bit.ckdir /* Internal/external clock select bit */
#define     stps_u2mr   u2mr_addr.bit.stps  /* Stop bit length select bit */
#define     pry_u2mr    u2mr_addr.bit.pry   /* Odd/even parity select bit */
#define     prye_u2mr   u2mr_addr.bit.prye  /* Parity enable bit */
#define     iopol_u2mr  u2mr_addr.bit.iopol  /* TxD RxD I/O polarity reverse bit */

/*------------------------------------------------------
     u3mr
------------------------------------------------------*/
#define     u3mr        u3mr_addr.byte

#define     smd0_u3mr   u3mr_addr.bit.smd0  /* Serial I/O mode select bit */
#define     smd1_u3mr   u3mr_addr.bit.smd1  /* Serial I/O mode select bit */
#define     smd2_u3mr   u3mr_addr.bit.smd2  /* Serial I/O mode select bit */
#define     ckdir_u3mr  u3mr_addr.bit.ckdir /* Internal/external clock select bit */
#define     stps_u3mr   u3mr_addr.bit.stps  /* Stop bit length select bit */
#define     pry_u3mr    u3mr_addr.bit.pry   /* Odd/even parity select bit */
#define     prye_u3mr   u3mr_addr.bit.prye  /* Parity enable bit */
#define     iopol_u3mr  u3mr_addr.bit.iopol  /* TxD RxD I/O polarity reverse bit */

/*------------------------------------------------------
     u4mr
------------------------------------------------------*/
#define     u4mr        u4mr_addr.byte

#define     smd0_u4mr   u4mr_addr.bit.smd0  /* Serial I/O mode select bit */
#define     smd1_u4mr   u4mr_addr.bit.smd1  /* Serial I/O mode select bit */
#define     smd2_u4mr   u4mr_addr.bit.smd2  /* Serial I/O mode select bit */
#define     ckdir_u4mr  u4mr_addr.bit.ckdir /* Internal/external clock select bit */
#define     stps_u4mr   u4mr_addr.bit.stps  /* Stop bit length select bit */
#define     pry_u4mr    u4mr_addr.bit.pry   /* Odd/even parity select bit */
#define     prye_u4mr   u4mr_addr.bit.prye  /* Parity enable bit */
#define     iopol_u4mr  u4mr_addr.bit.iopol  /* TxD RxD I/O polarity reverse bit */

/*------------------------------------------------------
    UARTi transmit/receive control register 0
------------------------------------------------------*/
union{
    struct{
        char    clk0:1;         /* BRG count source select bit */
        char    clk1:1;         /* BRG count source select bit */
        char    crs:1;          /* CTS~/RTS~ function select bit */
        char    txept:1;        /* Transmit register empty flag */
        char    crd:1;          /* CTS~/RTS~ disable bit */
        char    nch:1;          /* Data output select bit */
        char    ckpol:1;        /* CLK polarity select bit */
        char    uform:1;        /* Transfer format select bit */
    }bit;
    char    byte;
}u0c0_addr,u1c0_addr,u2c0_addr,u3c0_addr,u4c0_addr;

/*------------------------------------------------------
     u0c0
------------------------------------------------------*/
#define     u0c0        u0c0_addr.byte

#define     clk0_u0c0   u0c0_addr.bit.clk0  /* BRG count source select bit */
#define     clk1_u0c0   u0c0_addr.bit.clk1  /* BRG count source select bit */
#define     crs_u0c0    u0c0_addr.bit.crs   /* CTS~/RTS~ function select bit */
#define     txept_u0c0  u0c0_addr.bit.txept /* Transmit register empty flag */
#define     crd_u0c0    u0c0_addr.bit.crd   /* CTS~/RTS~ disable bit */
#define     nch_u0c0    u0c0_addr.bit.nch   /* Data output select bit */
#define     ckpol_u0c0  u0c0_addr.bit.ckpol /* CLK polarity select bit */
#define     uform_u0c0  u0c0_addr.bit.uform /* Transfer format select bit */

/*------------------------------------------------------
     u1c0
------------------------------------------------------*/
#define     u1c0        u1c0_addr.byte

#define     clk0_u1c0   u1c0_addr.bit.clk0  /* BRG count source select bit */
#define     clk1_u1c0   u1c0_addr.bit.clk1  /* BRG count source select bit */
#define     crs_u1c0    u1c0_addr.bit.crs   /* CTS~/RTS~ function select bit */
#define     txept_u1c0  u1c0_addr.bit.txept /* Transmit register empty flag */
#define     crd_u1c0    u1c0_addr.bit.crd   /* CTS~/RTS~ disable bit */
#define     nch_u1c0    u1c0_addr.bit.nch   /* Data output select bit */
#define     ckpol_u1c0  u1c0_addr.bit.ckpol /* CLK polarity select bit */
#define     uform_u1c0  u1c0_addr.bit.uform /* Transfer format select bit */

/*------------------------------------------------------
     u2c0
------------------------------------------------------*/
#define     u2c0        u2c0_addr.byte

#define     clk0_u2c0   u2c0_addr.bit.clk0  /* BRG count source select bit */
#define     clk1_u2c0   u2c0_addr.bit.clk1  /* BRG count source select bit */
#define     crs_u2c0    u2c0_addr.bit.crs   /* CTS~/RTS~ function select bit */
#define     txept_u2c0  u2c0_addr.bit.txept /* Transmit register empty flag */
#define     crd_u2c0    u2c0_addr.bit.crd   /* CTS~/RTS~ disable bit */
#define     ckpol_u2c0  u2c0_addr.bit.ckpol /* CLK polarity select bit */
#define     uform_u2c0  u2c0_addr.bit.uform /* Transfer format select bit */

/*------------------------------------------------------
     u3c0
------------------------------------------------------*/
#define     u3c0        u3c0_addr.byte

#define     clk0_u3c0   u3c0_addr.bit.clk0  /* BRG count source select bit */
#define     clk1_u3c0   u3c0_addr.bit.clk1  /* BRG count source select bit */
#define     crs_u3c0    u3c0_addr.bit.crs   /* CTS~/RTS~ function select bit */
#define     txept_u3c0  u3c0_addr.bit.txept /* Transmit register empty flag */
#define     crd_u3c0    u3c0_addr.bit.crd   /* CTS~/RTS~ disable bit */
#define     nch_u3c0    u3c0_addr.bit.nch   /* Data output select bit */
#define     ckpol_u3c0  u3c0_addr.bit.ckpol /* CLK polarity select bit */
#define     uform_u3c0  u3c0_addr.bit.uform /* Transfer format select bit */

/*------------------------------------------------------
     u4c0
------------------------------------------------------*/
#define     u4c0        u4c0_addr.byte

#define     clk0_u4c0   u4c0_addr.bit.clk0  /* BRG count source select bit */
#define     clk1_u4c0   u4c0_addr.bit.clk1  /* BRG count source select bit */
#define     crs_u4c0    u4c0_addr.bit.crs   /* CTS~/RTS~ function select bit */
#define     txept_u4c0  u4c0_addr.bit.txept /* Transmit register empty flag */
#define     crd_u4c0    u4c0_addr.bit.crd   /* CTS~/RTS~ disable bit */
#define     nch_u4c0    u4c0_addr.bit.nch   /* Data output select bit */
#define     ckpol_u4c0  u4c0_addr.bit.ckpol /* CLK polarity select bit */
#define     uform_u4c0  u4c0_addr.bit.uform /* Transfer format select bit */

/*------------------------------------------------------
    UARTi receive buffer register
------------------------------------------------------*/
union{
    struct{
        char    b0:1;
        char    b1:1;
        char    b2:1;
        char    b3:1;
        char    b4:1;
        char    b5:1;
        char    b6:1;
        char    b7:1;
        char    b8:1;
        char    b9:1;
        char    b10:1;
        char    abt:1;              /* Arbitration lost detecting flag */
        char    oer:1;              /* Overrun error flag */
        char    fer:1;              /* Framing error flag */
        char    per:1;              /* Parity error flag */
        char    sum:1;              /* Error sum flag */
    }bit;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}u0rb_addr,u1rb_addr,u2rb_addr,u3rb_addr,u4rb_addr;

/*------------------------------------------------------
     u0rb
------------------------------------------------------*/
#define     u0rb        u0rb_addr.word
#define     u0rbl       u0rb_addr.byte.low
#define     u0rbh       u0rb_addr.byte.high

#define     abt_u0rb    u0rb_addr.bit.abt   /* Arbitration lost detecting flag */
#define     oer_u0rb    u0rb_addr.bit.oer   /* Overrun error flag */
#define     fer_u0rb    u0rb_addr.bit.fer   /* Framing error flag */
#define     per_u0rb    u0rb_addr.bit.per   /* Parity error flag */
#define     sum_u0rb    u0rb_addr.bit.sum   /* Error sum flag */

/*------------------------------------------------------
     u1rb
------------------------------------------------------*/
#define     u1rb        u1rb_addr.word
#define     u1rbl       u1rb_addr.byte.low
#define     u1rbh       u1rb_addr.byte.high

#define     abt_u1rb    u1rb_addr.bit.abt   /* Arbitration lost detecting flag */
#define     oer_u1rb    u1rb_addr.bit.oer   /* Overrun error flag */
#define     fer_u1rb    u1rb_addr.bit.fer   /* Framing error flag */
#define     per_u1rb    u1rb_addr.bit.per   /* Parity error flag */
#define     sum_u1rb    u1rb_addr.bit.sum   /* Error sum flag */

/*------------------------------------------------------
     u2rb
------------------------------------------------------*/
#define     u2rb        u2rb_addr.word
#define     u2rbl       u2rb_addr.byte.low
#define     u2rbh       u2rb_addr.byte.high

#define     abt_u2rb    u2rb_addr.bit.abt   /* Arbitration lost detecting flag */
#define     oer_u2rb    u2rb_addr.bit.oer   /* Overrun error flag */
#define     fer_u2rb    u2rb_addr.bit.fer   /* Framing error flag */
#define     per_u2rb    u2rb_addr.bit.per   /* Parity error flag */
#define     sum_u2rb    u2rb_addr.bit.sum   /* Error sum flag */
    
/*------------------------------------------------------
     u3rb
------------------------------------------------------*/
#define     u3rb        u3rb_addr.word
#define     u3rbl       u3rb_addr.byte.low
#define     u3rbh       u3rb_addr.byte.high

#define     abt_u3rb    u3rb_addr.bit.abt   /* Arbitration lost detecting flag */
#define     oer_u3rb    u3rb_addr.bit.oer   /* Overrun error flag */
#define     fer_u3rb    u3rb_addr.bit.fer   /* Framing error flag */
#define     per_u3rb    u3rb_addr.bit.per   /* Parity error flag */
#define     sum_u3rb    u3rb_addr.bit.sum   /* Error sum flag */
    
/*------------------------------------------------------
     u4rb
------------------------------------------------------*/
#define     u4rb        u4rb_addr.word
#define     u4rbl       u4rb_addr.byte.low
#define     u4rbh       u4rb_addr.byte.high

#define     abt_u4rb    u4rb_addr.bit.abt   /* Arbitration lost detecting flag */
#define     oer_u4rb    u4rb_addr.bit.oer   /* Overrun error flag */
#define     fer_u4rb    u4rb_addr.bit.fer   /* Framing error flag */
#define     per_u4rb    u4rb_addr.bit.per   /* Parity error flag */
#define     sum_u4rb    u4rb_addr.bit.sum   /* Error sum flag */
    
/*------------------------------------------------------
    UARTi (i= 0,1,2,3,4) special mode registers
------------------------------------------------------*/
union{
    struct{
        char    iicm:1;
        char    abc:1;
        char    bbs:1;
        char    lsyn:1;
        char    abscs:1;
        char    acse:1;
        char    sss:1;
        char    su1him:1;
    }bit;
    char    byte;
}u0smr_addr,u1smr_addr,u2smr_addr,u3smr_addr,u4smr_addr;

/*------------------------------------------------------
     u0smr
------------------------------------------------------*/
#define     u0smr       u0smr_addr.byte

#define     iicm_u0smr  u0smr_addr.bit.iicm 
#define     abc_u0smr   u0smr_addr.bit.abc
#define     bbs_u0smr   u0smr_addr.bit.bbs
#define     lsyn_u0smr  u0smr_addr.bit.lsyn
#define     abscs_u0smr u0smr_addr.bit.abscs
#define     acse_u0smr  u0smr_addr.bit.acse
#define     sss_u0smr   u0smr_addr.bit.sss
#define     sclkdiv_u0smr   u0smr_addr.bit.su1him

/*------------------------------------------------------
     u1smr
------------------------------------------------------*/
#define     u1smr       u1smr_addr.byte

#define     iicm_u1smr  u1smr_addr.bit.iicm 
#define     abc_u1smr   u1smr_addr.bit.abc
#define     bbs_u1smr   u1smr_addr.bit.bbs
#define     lsyn_u1smr  u1smr_addr.bit.lsyn
#define     abscs_u1smr u1smr_addr.bit.abscs
#define     acse_u1smr  u1smr_addr.bit.acse
#define     sss_u1smr   u1smr_addr.bit.sss
#define     sclkdiv_u1smr   u1smr_addr.bit.su1him

/*------------------------------------------------------
     u2smr
------------------------------------------------------*/
#define     u2smr       u2smr_addr.byte

#define     iicm_u2smr  u2smr_addr.bit.iicm 
#define     abc_u2smr   u2smr_addr.bit.abc
#define     bbs_u2smr   u2smr_addr.bit.bbs
#define     lsyn_u2smr  u2smr_addr.bit.lsyn
#define     abscs_u2smr u2smr_addr.bit.abscs
#define     acse_u2smr  u2smr_addr.bit.acse
#define     sss_u2smr   u2smr_addr.bit.sss
#define     sclkdiv_u2smr   u2smr_addr.bit.su1him

/*------------------------------------------------------
     u3smr
------------------------------------------------------*/
#define     u3smr       u3smr_addr.byte

#define     iicm_u3smr  u3smr_addr.bit.iicm
#define     abc_u3smr   u3smr_addr.bit.abc
#define     bbs_u3smr   u3smr_addr.bit.bbs
#define     lsyn_u3smr  u3smr_addr.bit.lsyn
#define     abscs_u3smr u3smr_addr.bit.abscs
#define     acse_u3smr  u3smr_addr.bit.acse
#define     sss_u3smr   u3smr_addr.bit.sss
#define     sclkdiv_u3smr   u3smr_addr.bit.su1him

/*------------------------------------------------------
     u4smr
------------------------------------------------------*/
#define     u4smr       u4smr_addr.byte

#define     iicm_u4smr  	u4smr_addr.bit.iicm
#define     abc_u4smr   	u4smr_addr.bit.abc
#define     bbs_u4smr   	u4smr_addr.bit.bbs
#define     lsyn_u4smr  	u4smr_addr.bit.lsyn
#define     abscs_u4smr 	u4smr_addr.bit.abscs
#define     acse_u4smr  	u4smr_addr.bit.acse
#define     sss_u4smr	    u4smr_addr.bit.sss
#define     sclkdiv_u4smr   u4smr_addr.bit.su1him

/*------------------------------------------------------
    UARTi (i=0,1,2,3,4) special mode register 2
------------------------------------------------------*/
union{
    struct{
        char    iicm2:1;
        char    csc:1;
        char    swc:1;
        char    als:1;
        char    stc:1;
        char    swc2:1;
        char    sdhi:1;
        char    shtc:1;
    }bit;
    char    byte;
}u0smr2_addr,u1smr2_addr,u2smr2_addr,u3smr2_addr,u4smr2_addr;


/*------------------------------------------------------
     u0smr2
------------------------------------------------------*/
#define     u0smr2      u0smr2_addr.byte

#define     iicm2_u0smr2    u0smr2_addr.bit.iicm2
#define     csc_u0smr2  u0smr2_addr.bit.csc
#define     swc_u0smr2  u0smr2_addr.bit.swc
#define     als_u0smr2  u0smr2_addr.bit.als
#define     stc_u0smr2  u0smr2_addr.bit.stc 
#define     swc2_u0smr2 u0smr2_addr.bit.swc2
#define     sdhi_u0smr2 u0smr2_addr.bit.sdhi
#define     su1him_u0smr2 u0smr2_addr.bit.shtc


/*------------------------------------------------------
     u1smr2
------------------------------------------------------*/
#define     u1smr2      u1smr2_addr.byte

#define     iicm2_u1smr2    u1smr2_addr.bit.iicm2
#define     csc_u1smr2  u1smr2_addr.bit.csc
#define     swc_u1smr2  u1smr2_addr.bit.swc
#define     als_u1smr2  u1smr2_addr.bit.als
#define     stc_u1smr2  u1smr2_addr.bit.stc 
#define     swc2_u1smr2 u1smr2_addr.bit.swc2
#define     sdhi_u1smr2 u1smr2_addr.bit.sdhi
#define     su1him_u1smr2 u1smr2_addr.bit.shtc

/*------------------------------------------------------
     u2smr2
------------------------------------------------------*/
#define     u2smr2      u2smr2_addr.byte

#define     iicm2_u2smr2    u2smr2_addr.bit.iicm2
#define     csc_u2smr2  u2smr2_addr.bit.csc
#define     swc_u2smr2  u2smr2_addr.bit.swc
#define     als_u2smr2  u2smr2_addr.bit.als
#define     stc_u2smr2  u2smr2_addr.bit.stc
#define     swc2_u2smr2 u2smr2_addr.bit.swc2
#define     sdhi_u2smr2 u2smr2_addr.bit.sdhi
#define     su1him_u2smr2 u2smr2_addr.bit.shtc

/*------------------------------------------------------
     u3smr2
------------------------------------------------------*/
#define     u3smr2      u3smr2_addr.byte

#define     iicm2_u3smr2    u3smr2_addr.bit.iicm2
#define     csc_u3smr2  u3smr2_addr.bit.csc
#define     swc_u3smr2  u3smr2_addr.bit.swc
#define     als_u3smr2  u3smr2_addr.bit.als
#define     stc_u3smr2  u3smr2_addr.bit.stc
#define     swc2_u3smr2 u3smr2_addr.bit.swc2
#define     sdhi_u3smr2 u3smr2_addr.bit.sdhi
#define     su1him_u3smr2 u3smr2_addr.bit.shtc

/*------------------------------------------------------
     u4smr2
------------------------------------------------------*/
#define     u4smr2      u4smr2_addr.byte

#define     iicm2_u4smr2    u4smr2_addr.bit.iicm2
#define     csc_u4smr2  	u4smr2_addr.bit.csc
#define     swc_u4smr2  	u4smr2_addr.bit.swc
#define     als_u4smr2  	u4smr2_addr.bit.als
#define     stc_u4smr2  	u4smr2_addr.bit.stc
#define     swc2_u4smr2 	u4smr2_addr.bit.swc2
#define     sdhi_u4smr2 	u4smr2_addr.bit.sdhi
#define     su1him_u4smr2 	u4smr2_addr.bit.shtc

/*------------------------------------------------------
    UARTi (i=0,1,2,3,4) special mode register 3
------------------------------------------------------*/
union{
    struct{
        char    sse:1;
        char    ckph:1;
        char    dinc:1;
        char    nodc:1;
        char    err:1;
        char    dl0:1;
        char    dl1:1;
        char    dl2:1;
    }bit;
    char    byte;
}u0smr3_addr,u1smr3_addr,u2smr3_addr,u3smr3_addr,u4smr3_addr;

/*------------------------------------------------------
     u0smr3
------------------------------------------------------*/
#define     u0smr3      u0smr3_addr.byte

#define     sse_u0smr3  u0smr3_addr.bit.sse
#define     ckph_u0smr3 u0smr3_addr.bit.ckph
#define     dinc_u0smr3 u0smr3_addr.bit.dinc
#define     nodc_u0smr3 u0smr3_addr.bit.nodc
#define     err_u0smr3  u0smr3_addr.bit.err
#define     dl0_u0smr3  u0smr3_addr.bit.dl0
#define     dl1_u0smr3  u0smr3_addr.bit.dl1
#define     dl2_u0smr3  u0smr3_addr.bit.dl2

/*------------------------------------------------------
     u1smr3
------------------------------------------------------*/
#define     u1smr3      u1smr3_addr.byte

#define     sse_u1smr3  u1smr3_addr.bit.sse
#define     ckph_u1smr3 u1smr3_addr.bit.ckph
#define     dinc_u1smr3 u1smr3_addr.bit.dinc
#define     nodc_u1smr3 u1smr3_addr.bit.nodc
#define     err_u1smr3  u1smr3_addr.bit.err
#define     dl0_u1smr3  u1smr3_addr.bit.dl0
#define     dl1_u1smr3  u1smr3_addr.bit.dl1
#define     dl2_u1smr3  u1smr3_addr.bit.dl2

/*------------------------------------------------------
     u2smr3
------------------------------------------------------*/
#define     u2smr3      u2smr3_addr.byte

#define     sse_u2smr3  u2smr3_addr.bit.sse
#define     ckph_u2smr3 u2smr3_addr.bit.ckph
#define     dinc_u2smr3 u2smr3_addr.bit.dinc
#define     nodc_u2smr3 u2smr3_addr.bit.nodc
#define     err_u2smr3  u2smr3_addr.bit.err
#define     dl0_u2smr3  u2smr3_addr.bit.dl0
#define     dl1_u2smr3  u2smr3_addr.bit.dl1
#define     dl2_u2smr3  u2smr3_addr.bit.dl2

/*------------------------------------------------------
     u3smr3
------------------------------------------------------*/
#define     u3smr3      u3smr3_addr.byte

#define     sse_u3smr3  u3smr3_addr.bit.sse
#define     ckph_u3smr3 u3smr3_addr.bit.ckph
#define     dinc_u3smr3 u3smr3_addr.bit.dinc
#define     nodc_u3smr3 u3smr3_addr.bit.nodc
#define     err_u3smr3  u3smr3_addr.bit.err
#define     dl0_u3smr3  u3smr3_addr.bit.dl0
#define     dl1_u3smr3  u3smr3_addr.bit.dl1
#define     dl2_u3smr3  u3smr3_addr.bit.dl2

/*------------------------------------------------------
     u4smr3
------------------------------------------------------*/
#define     u4smr3      u4smr3_addr.byte

#define     sse_u4smr3  u4smr3_addr.bit.sse
#define     ckph_u4smr3 u4smr3_addr.bit.ckph
#define     dinc_u4smr3 u4smr3_addr.bit.dinc
#define     nodc_u4smr3 u4smr3_addr.bit.nodc
#define     err_u4smr3  u4smr3_addr.bit.err
#define     dl0_u4smr3  u4smr3_addr.bit.dl0
#define     dl1_u4smr3  u4smr3_addr.bit.dl1
#define     dl2_u4smr3  u4smr3_addr.bit.dl2

/*------------------------------------------------------
    UARTi (i=0,1,2,3,4) special mode register 4
------------------------------------------------------*/
union{
    struct{
        char    stareq:1;
        char    rstareq:1;
        char    stpreq:1;
        char    stspsel:1;
        char    ackd:1;
        char    ackc:1;
        char    sclhi:1;
        char    swc9:1;
    }bit;
    char    byte;
}u0smr4_addr,u1smr4_addr,u2smr4_addr,u3smr4_addr,u4smr4_addr;

/*------------------------------------------------------
     u0smr4
------------------------------------------------------*/
#define     u0smr4      u0smr4_addr.byte

#define     stareq_u0smr4  u0smr4_addr.bit.stareq
#define     rstareq_u0smr4 u0smr4_addr.bit.rstareq
#define     stpreq_u0smr4 u0smr4_addr.bit.stpreq
#define     stspsel_u0smr4 u0smr4_addr.bit.stspsel
#define     ackd_u0smr4  u0smr4_addr.bit.ackd
#define     ackc_u0smr4  u0smr4_addr.bit.ackc
#define     sclhi_u0smr4  u0smr4_addr.bit.sclhi
#define     swc9_u0smr4  u0smr4_addr.bit.swc9


/*------------------------------------------------------
     u1smr4
------------------------------------------------------*/
#define     u1smr4      u1smr4_addr.byte

#define     stareq_u1smr4  u1smr4_addr.bit.stareq
#define     rstareq_u1smr4 u1smr4_addr.bit.rstareq
#define     stpreq_u1smr4 u1smr4_addr.bit.stpreq
#define     stspsel_u1smr4 u1smr4_addr.bit.stspsel
#define     ackd_u1smr4  u1smr4_addr.bit.ackd
#define     ackc_u1smr4  u1smr4_addr.bit.ackc
#define     sclhi_u1smr4  u1smr4_addr.bit.sclhi
#define     swc9_u1smr4  u1smr4_addr.bit.swc9


/*------------------------------------------------------
     u2smr4
------------------------------------------------------*/
#define     u2smr4      u2smr4_addr.byte

#define     stareq_u2smr4  u2smr4_addr.bit.stareq
#define     rstareq_u2smr4 u2smr4_addr.bit.rstareq
#define     stpreq_u2smr4 u2smr4_addr.bit.stpreq
#define     stspsel_u2smr4 u2smr4_addr.bit.stspsel
#define     ackd_u2smr4  u2smr4_addr.bit.ackd
#define     ackc_u2smr4  u2smr4_addr.bit.ackc
#define     sclhi_u2smr4  u2smr4_addr.bit.sclhi
#define     swc9_u2smr4  u2smr4_addr.bit.swc9


/*------------------------------------------------------
     u3smr4
------------------------------------------------------*/
#define     u3smr4      u3smr4_addr.byte

#define     stareq_u3smr4  u3smr4_addr.bit.stareq
#define     rstareq_u3smr4 u3smr4_addr.bit.rstareq
#define     stpreq_u3smr4 u3smr4_addr.bit.stpreq
#define     stspsel_u3smr4 u3smr4_addr.bit.stspsel
#define     ackd_u3smr4  u3smr4_addr.bit.ackd
#define     ackc_u3smr4  u3smr4_addr.bit.ackc
#define     sclhi_u3smr4  u3smr4_addr.bit.sclhi
#define     swc9_u3smr4  u3smr4_addr.bit.swc9

/*------------------------------------------------------
     u4smr4
------------------------------------------------------*/
#define     u4smr4      u4smr4_addr.byte

#define     stareq_u4smr4   u4smr4_addr.bit.stareq
#define     rstareq_u4smr4  u4smr4_addr.bit.rstareq
#define     stpreq_u4smr4   u4smr4_addr.bit.stpreq
#define     stspsel_u4smr4  u4smr4_addr.bit.stspsel
#define     ackd_u4smr4     u4smr4_addr.bit.ackd
#define     ackc_u4smr4     u4smr4_addr.bit.ackc
#define     sclhi_u4smr4    u4smr4_addr.bit.sclhi
#define     swc9_u4smr4     u4smr4_addr.bit.swc9

/*------------------------------------------------------
    DMAi request cause register
------------------------------------------------------*/
union{
    struct{
        char    dsel0:1;            /* DMA request cause select bit */
        char    dsel1:1;            /* DMA request cause select bit */
        char    dsel2:1;            /* DMA request cause select bit */
        char    dsel3:1;            /* DMA request cause select bit */
        char    dsel4:1;            /* DMA request cause select bit */
        char    dsr:1;              /* Software DMA request bit */
        char    b6:1;
        char    drq:1;              /* DMA request bit */
    }bit;
    char    byte;
}dm0sl_addr,dm1sl_addr,dm2sl_addr,dm3sl_addr;

/*------------------------------------------------------
     dm0sl
------------------------------------------------------*/
#define     dm0sl       dm0sl_addr.byte

#define     dsel0_dm0sl dm0sl_addr.bit.dsel0    /* DMA request cause select bit */
#define     dsel1_dm0sl dm0sl_addr.bit.dsel1    /* DMA request cause select bit */
#define     dsel2_dm0sl dm0sl_addr.bit.dsel2    /* DMA request cause select bit */
#define     dsel3_dm0sl dm0sl_addr.bit.dsel3    /* DMA request cause select bit */
#define     dsel4_dm0sl dm0sl_addr.bit.dsel4    /* DMA request cause select bit */
#define     dsr_dm0sl   dm0sl_addr.bit.dsr      /* Software DMA request bit */
#define     drq_dm0sl   dm0sl_addr.bit.drq      /* DMA request bit */

/*------------------------------------------------------
     dm1sl
------------------------------------------------------*/
#define     dm1sl       dm1sl_addr.byte

#define     dsel0_dm1sl dm1sl_addr.bit.dsel0    /* DMA request cause select bit */
#define     dsel1_dm1sl dm1sl_addr.bit.dsel1    /* DMA request cause select bit */
#define     dsel2_dm1sl dm1sl_addr.bit.dsel2    /* DMA request cause select bit */
#define     dsel3_dm1sl dm1sl_addr.bit.dsel3    /* DMA request cause select bit */
#define     dsel4_dm1sl dm1sl_addr.bit.dsel4    /* DMA request cause select bit */
#define     dsr_dm1sl   dm1sl_addr.bit.dsr      /* Software DMA request bit */
#define     drq_dm1sl   dm1sl_addr.bit.drq      /* DMA request bit */

/*------------------------------------------------------
     dm2sl
------------------------------------------------------*/
#define     dm2sl       dm2sl_addr.byte

#define     dsel0_dm2sl dm2sl_addr.bit.dsel0    /* DMA request cause select bit */
#define     dsel1_dm2sl dm2sl_addr.bit.dsel1    /* DMA request cause select bit */
#define     dsel2_dm2sl dm2sl_addr.bit.dsel2    /* DMA request cause select bit */
#define     dsel3_dm2sl dm2sl_addr.bit.dsel3    /* DMA request cause select bit */
#define     dsel4_dm2sl dm2sl_addr.bit.dsel4    /* DMA request cause select bit */
#define     dsr_dm2sl   dm2sl_addr.bit.dsr      /* Software DMA request bit */
#define     drq_dm2sl   dm2sl_addr.bit.drq      /* DMA request bit */

/*------------------------------------------------------
     dm3sl
------------------------------------------------------*/
#define     dm3sl       dm3sl_addr.byte

#define     dsel0_dm3sl dm3sl_addr.bit.dsel0    /* DMA request cause select bit */
#define     dsel1_dm3sl dm3sl_addr.bit.dsel1    /* DMA request cause select bit */
#define     dsel2_dm3sl dm3sl_addr.bit.dsel2    /* DMA request cause select bit */
#define     dsel3_dm3sl dm3sl_addr.bit.dsel3    /* DMA request cause select bit */
#define     dsel4_dm3sl dm3sl_addr.bit.dsel4    /* DMA request cause select bit */
#define     dsr_dm3sl   dm3sl_addr.bit.dsr      /* Software DMA request bit */
#define     drq_dm3sl   dm3sl_addr.bit.drq      /* DMA request bit */

/********************************************************
*   declare SFR union                                   *
********************************************************/

union{
    struct{
        char    b0:1;
        char    b1:1;
        char    b2:1;
        char    b3:1;
        char    b4:1;
        char    b5:1;
        char    b6:1;
        char    b7:1;
        char    b8:1;
        char    b9:1;
        char    b10:1;
        char    b11:1;
        char    b12:1;
        char    b13:1;
        char    b14:1;
        char    b15:1;
        char    b16:1;
        char    b17:1;
        char    b18:1;
        char    b19:1;
        char    b20:1;
        char    b21:1;
        char    b22:1;
        char    b23:1;
    }bit;
    struct{
        char    low;                /* low  8 bit */
        char    mid;                /* mid  8 bit */
        char    high;               /* high 8 bit */
        char    nc;                 /* non use */
    }byte;
    unsigned long   dword;
}rmad0_addr,rmad1_addr,rmad2_addr,rmad3_addr,eiad_addr;
#define     rmad0   rmad0_addr.dword        /* Address match interrupt register 0 32 bit */
#define     rmad0l  rmad0_addr.byte.low         /* Address match interrupt register 0 low  8 bit */
#define     rmad0m  rmad0_addr.byte.mid         /* Address match interrupt register 0 mid  8 bit */
#define     rmad0h  rmad0_addr.byte.high        /* Address match interrupt register 0 high 8 bit */
#define     rmad1   rmad1_addr.dword        /* Address match interrupt register 1 32 bit */
#define     rmad1l  rmad1_addr.byte.low         /* Address match interrupt register 1 low  8 bit */
#define     rmad1m  rmad1_addr.byte.mid         /* Address match interrupt register 1 mid  8 bit */
#define     rmad1h  rmad1_addr.byte.high        /* Address match interrupt register 1 high 8 bit */
#define     rmad2   rmad2_addr.dword        /* Address match interrupt register 2 32 bit */
#define     rmad2l  rmad2_addr.byte.low         /* Address match interrupt register 2 low  8 bit */
#define     rmad2m  rmad2_addr.byte.mid         /* Address match interrupt register 2 mid  8 bit */
#define     rmad2h  rmad2_addr.byte.high        /* Address match interrupt register 2 high 8 bit */
#define     rmad3   rmad3_addr.dword        /* Address match interrupt register 3 32 bit */
#define     rmad3l  rmad3_addr.byte.low         /* Address match interrupt register 3 low  8 bit */
#define     rmad3m  rmad3_addr.byte.mid         /* Address match interrupt register 3 mid  8 bit */
#define     rmad3h  rmad3_addr.byte.high        /* Address match interrupt register 3 high 8 bit */
#define		eiad	eiad_addr.dword
#define		eiadl	eiad_addr.byte.low
#define		eiadm	eiad_addr.byte.mid
#define		eiadh	eiad_addr.byte.high


union{
    struct{
        char    b0:1;
        char    b1:1;
        char    b2:1;
        char    b3:1;
        char    b4:1;
        char    b5:1;
        char    b6:1;
        char    b7:1;
        char    b8:1;
        char    b9:1;
        char    b10:1;
        char    b11:1;
        char    b12:1;
        char    b13:1;
        char    b14:1;
        char    b15:1;
    }bit;
    struct{
        char    low;                /* low  8 bit */
        char    high;               /* high 8 bit */
    }byte;
    unsigned short  word;
}u0tb_addr,u1tb_addr,u2tb_addr,u3tb_addr,u4tb_addr,crcd_addr,
 ad00_addr,ad01_addr,ad02_addr,ad03_addr,ad04_addr,ad05_addr,ad06_addr,ad07_addr,
 ad10_addr,ad11_addr,ad12_addr,ad13_addr,ad14_addr,ad15_addr,ad16_addr,ad17_addr,
 x0r_addr,y0r_addr,x1r_addr,y1r_addr,x2r_addr,y2r_addr,x3r_addr,y3r_addr,x4r_addr,y4r_addr,
 x5r_addr,y5r_addr,x6r_addr,y6r_addr,x7r_addr,y7r_addr,x8r_addr,y8r_addr,
 x9r_addr,y9r_addr,x10r_addr,y10r_addr,x11r_addr,y11r_addr,x12r_addr,y12r_addr,
 x13r_addr,y13r_addr,x14r_addr,y14r_addr,x15r_addr,y15r_addr;
 
#define     u0tb    u0tb_addr.word          /* UART0 Transmit buffer register 16 bit ; Use "MOV" instruction when writing to this register. */
#define     u0tbl   u0tb_addr.byte.low          /* UART0 Transmit buffer register low  8 bit */
#define     u0tbh   u0tb_addr.byte.high         /* UART0 Transmit buffer register high 8 bit */
#define     u1tb    u1tb_addr.word          /* UART1 Transmit buffer register 16 bit ; Use "MOV" instruction when writing to this register. */
#define     u1tbl   u1tb_addr.byte.low          /* UART1 Transmit buffer register low  8 bit */
#define     u1tbh   u1tb_addr.byte.high         /* UART1 Transmit buffer register high 8 bit */
#define     u2tb    u2tb_addr.word          /* UART2 Transmit buffer register 16 bit ; Use "MOV" instruction when writing to this register. */
#define     u2tbl   u2tb_addr.byte.low          /* UART2 Transmit buffer register low  8 bit */
#define     u2tbh   u2tb_addr.byte.high         /* UART2 Transmit buffer register high 8 bit */
#define     u3tb    u3tb_addr.word          /* UART3 Transmit buffer register 16 bit ; Use "MOV" instruction when writing to this register. */
#define     u3tbl   u3tb_addr.byte.low          /* UART3 Transmit buffer register low  8 bit */
#define     u3tbh   u3tb_addr.byte.high         /* UART3 Transmit buffer register high 8 bit */
#define     u4tb    u4tb_addr.word          /* UART4 Transmit buffer register 16 bit ; Use "MOV" instruction when writing to this register. */
#define     u4tbl   u4tb_addr.byte.low          /* UART4 Transmit buffer register low  8 bit */
#define     u4tbh   u4tb_addr.byte.high         /* UART4 Transmit buffer register high 8 bit */
#define     crcd    crcd_addr.word          /* CRC data register 16 bit */
#define     crcdl   crcd_addr.byte.low          /* CRC data register low  8 bit */
#define     crcdh   crcd_addr.byte.high         /* CRC data register high 8 bit */
#define     ad00 ad00_addr.word           /* A/D0 register 0 16 bit */
#define     ad00l    ad00_addr.byte.low           /* A/D0 register 0 low  8 bit */
#define     ad00h    ad00_addr.byte.high          /* A/D0 register 0 high 8 bit */
#define     ad01 ad01_addr.word           /* A/D0 register 1 16 bit */
#define     ad01l    ad01_addr.byte.low           /* A/D0 register 1 low  8 bit */
#define     ad01h    ad01_addr.byte.high          /* A/D0 register 1 high 8 bit */
#define     ad02 ad02_addr.word           /* A/D0 register 2 16 bit */
#define     ad02l    ad02_addr.byte.low           /* A/D0 register 2 low  8 bit */
#define     ad02h    ad02_addr.byte.high          /* A/D0 register 2 high 8 bit */
#define     ad03 ad03_addr.word           /* A/D0 register 3 16 bit */
#define     ad03l    ad03_addr.byte.low           /* A/D0 register 3 low  8 bit */
#define     ad03h    ad03_addr.byte.high          /* A/D0 register 3 high 8 bit */
#define     ad04 ad04_addr.word           /* A/D0 register 4 16 bit */
#define     ad04l    ad04_addr.byte.low           /* A/D0 register 4 low  8 bit */
#define     ad04h    ad04_addr.byte.high          /* A/D0 register 4 high 8 bit */
#define     ad05 ad05_addr.word           /* A/D0 register 5 16 bit */
#define     ad05l    ad05_addr.byte.low           /* A/D0 register 5 low  8 bit */
#define     ad05h    ad05_addr.byte.high          /* A/D0 register 5 high 8 bit */
#define     ad06 ad06_addr.word           /* A/D0 register 6 16 bit */
#define     ad06l    ad06_addr.byte.low           /* A/D0 register 6 low  8 bit */
#define     ad06h    ad06_addr.byte.high          /* A/D0 register 6 high 8 bit */
#define     ad07 ad07_addr.word           /* A/D0 register 7 16 bit */
#define     ad07l    ad07_addr.byte.low           /* A/D0 register 7 low  8 bit */
#define     ad07h    ad07_addr.byte.high          /* A/D0 register 7 high 8 bit */

#define     ad10 ad10_addr.word           /* A/D1 register 0 16 bit */
#define     ad10l    ad10_addr.byte.low           /* A/D1 register 0 low  8 bit */
#define     ad10h    ad10_addr.byte.high          /* A/D1 register 0 high 8 bit */
#define     ad11 ad11_addr.word           /* A/D1 register 1 16 bit */
#define     ad11l    ad11_addr.byte.low           /* A/D1 register 1 low  8 bit */
#define     ad11h    ad11_addr.byte.high          /* A/D1 register 1 high 8 bit */
#define     ad12 ad12_addr.word           /* A/D1 register 2 16 bit */
#define     ad12l    ad12_addr.byte.low           /* A/D1 register 2 low  8 bit */
#define     ad12h    ad12_addr.byte.high          /* A/D1 register 2 high 8 bit */
#define     ad13 ad13_addr.word           /* A/D1 register 3 16 bit */
#define     ad13l    ad13_addr.byte.low           /* A/D1 register 3 low  8 bit */
#define     ad13h    ad13_addr.byte.high          /* A/D1 register 3 high 8 bit */
#define     ad14 ad14_addr.word           /* A/D1 register 4 16 bit */
#define     ad14l    ad14_addr.byte.low           /* A/D1 register 4 low  8 bit */
#define     ad14h    ad14_addr.byte.high          /* A/D1 register 4 high 8 bit */
#define     ad15 ad15_addr.word           /* A/D1 register 5 16 bit */
#define     ad15l    ad15_addr.byte.low           /* A/D1 register 5 low  8 bit */
#define     ad15h    ad15_addr.byte.high          /* A/D1 register 5 high 8 bit */
#define     ad16 ad16_addr.word           /* A/D1 register 6 16 bit */
#define     ad16l    ad16_addr.byte.low           /* A/D1 register 6 low  8 bit */
#define     ad16h    ad16_addr.byte.high          /* A/D1 register 6 high 8 bit */
#define     ad17 ad17_addr.word           /* A/D1 register 7 16 bit */
#define     ad17l    ad17_addr.byte.low           /* A/D1 register 7 low  8 bit */
#define     ad17h    ad17_addr.byte.high          /* A/D1 register 7 high 8 bit */


#define     x0r     x0r_addr.word
#define		x0rl	x0r_addr.byte.low
#define		x0rh	x0r_addr.byte.high
#define     y0r     y0r_addr.word
#define		y0rl	y0r_addr.byte.low
#define		y0rh	y0r_addr.byte.high
#define     x1r     x1r_addr.word
#define		x1rl	x1r_addr.byte.low
#define		x1rh	x1r_addr.byte.high
#define     y1r     y1r_addr.word
#define		y1rl	y1r_addr.byte.low
#define		y1rh	y1r_addr.byte.high
#define     x2r     x2r_addr.word
#define		x2rl	x2r_addr.byte.low
#define		x2rh	x2r_addr.byte.high
#define     y2r     y2r_addr.word
#define		y2rl	y2r_addr.byte.low
#define		y2rh	y2r_addr.byte.high
#define     x3r     x3r_addr.word
#define		x3rl	x3r_addr.byte.low
#define		x3rh	x3r_addr.byte.high
#define     y3r     y3r_addr.word
#define		y3rl	y3r_addr.byte.low
#define		y3rh	y3r_addr.byte.high
#define     x4r     x4r_addr.word
#define		x4rl	x4r_addr.byte.low
#define		x4rh	x4r_addr.byte.high
#define     y4r     y4r_addr.word
#define		y4rl	y4r_addr.byte.low
#define		y4rh	y4r_addr.byte.high
#define     x5r     x5r_addr.word
#define		x5rl	x5r_addr.byte.low
#define		x5rh	x5r_addr.byte.high
#define     y5r     y5r_addr.word
#define		y5rl	y5r_addr.byte.low
#define		y5rh	y5r_addr.byte.high
#define     x6r     x6r_addr.word
#define		x6rl	x6r_addr.byte.low
#define		x6rh	x6r_addr.byte.high
#define     y6r     y6r_addr.word
#define		y6rl	y6r_addr.byte.low
#define		y6rh	y6r_addr.byte.high
#define     x7r     x7r_addr.word
#define		x7rl	x7r_addr.byte.low
#define		x7rh	x7r_addr.byte.high
#define     y7r     y7r_addr.word
#define		y7rl	y7r_addr.byte.low
#define		y7rh	y7r_addr.byte.high
#define     x8r     x8r_addr.word
#define		x8rl	x8r_addr.byte.low
#define		x8rh	x8r_addr.byte.high
#define     y8r     y8r_addr.word
#define		y8rl	y8r_addr.byte.low
#define		y8rh	y8r_addr.byte.high
#define     x9r     x9r_addr.word
#define		x9rl	x9r_addr.byte.low
#define		x9rh	x9r_addr.byte.high
#define     y9r     y9r_addr.word
#define		y9rl	y9r_addr.byte.low
#define		y9rh	y9r_addr.byte.high
#define     x10r    x10r_addr.word
#define		x10rl	x10r_addr.byte.low
#define		x10rh	x10r_addr.byte.high
#define     y10r    y10r_addr.word
#define		y10rl	y10r_addr.byte.low
#define		y10rh	y10r_addr.byte.high
#define     x11r    x11r_addr.word
#define		x11rl	x11r_addr.byte.low
#define		x11rh	x11r_addr.byte.high
#define     y11r    y11r_addr.word
#define		y11rl	y11r_addr.byte.low
#define		y11rh	y11r_addr.byte.high
#define     x12r    x12r_addr.word
#define		x12rl	x12r_addr.byte.low
#define		x12rh	x12r_addr.byte.high
#define     y12r    y12r_addr.word
#define		y12rl	y12r_addr.byte.low
#define		y12rh	y12r_addr.byte.high
#define     x13r    x13r_addr.word
#define		x13rl	x13r_addr.byte.low
#define		x13rh	x13r_addr.byte.high
#define     y13r    y13r_addr.word
#define		y13rl	y13r_addr.byte.low
#define		y13rh	y13r_addr.byte.high
#define     x14r    x14r_addr.word
#define		x14rl	x14r_addr.byte.low
#define		x14rh	x14r_addr.byte.high
#define     y14r    y14r_addr.word
#define		y14rl	y14r_addr.byte.low
#define		y14rh	y14r_addr.byte.high
#define     x15r    x15r_addr.word
#define		x15rl	x15r_addr.byte.low
#define		x15rh	x15r_addr.byte.high
#define     y15r    y15r_addr.word
#define		y15rl	y15r_addr.byte.low
#define		y15rh	y15r_addr.byte.high
