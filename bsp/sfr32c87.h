/************************************************************************************
*                                                                                   *
*   File name : sfr32c87.h                                                          *
*   Contents  : Definition of M32C/87 Group SFR                                     *
*                                                                                   *
*   Copyright, 2003 RENESAS TECHNOLOGY CORPORATION                                  *
*                   AND RENESAS SOLUTIONS CORPORATION                               *
*                                                                                   *
*   Note      :                                                                     *
*                                                                                   *
*   Version   : Ver 0.01 (04-09-23) Preliminary                                     *
*                       These data made based on M32C/85 Group H/W Manual Rev.0.30  *
*   Version   : Ver 0.02 (04-12-02) Preliminary                                     *
*   Version   : Ver 0.03 (04-12-22) Preliminary                                     *
*   Version   : Ver 0.04 (05-12-08) Preliminary                                     *
*   Version   : Ver 0.05 (06-01-23) Preliminary                                     *
*                                                                                   *
*************************************************************************************/
/*
  note:
    This data is a freeware that SFR for M32C/87 group are described.
    RENESAS TECHNOLOGY CORPORATION and RENESAS SOLUTIONS CORPORATION assume
    no responsibility for any damage that occurred by this data.
*/

/************************************************************************
*   declare SFR address                                                 *
************************************************************************/
#pragma ADDRESS     pm0_addr    0004H       /* Processor mode register 0 */
#pragma ADDRESS     pm1_addr    0005H       /* Processor mode register 1 */
#pragma ADDRESS     cm0_addr    0006H       /* System clock control register 0 */
#pragma ADDRESS     cm1_addr    0007H       /* System clock control register 1 */

#pragma ADDRESS     aier_addr   0009H       /* Address match interrupt enable register */
#pragma ADDRESS     prcr_addr   000aH       /* Protect register */
#pragma ADDRESS     ds_addr     000bH       /* External data bus width control register */
#pragma ADDRESS     mcd_addr    000cH       /* Main clock division register */
#pragma ADDRESS     cm2_addr    000dH       /* Oscillation stop detect register */
#pragma ADDRESS     wdts_addr   000eH       /* Watchdog timer start register */
#pragma ADDRESS     wdc_addr    000fH       /* Watchdog timer control register */
#pragma ADDRESS     rmad0_addr  0010H       /* Address match interrupt register 0 */
#pragma ADDRESS     pm2_addr    0013H       /* Processor mode register 2 */
#pragma ADDRESS     rmad1_addr  0014H       /* Address match interrupt register 1 */
#pragma ADDRESS     vcr2_addr   0017H       /* Voltage detection register 2 */
#pragma ADDRESS     rmad2_addr  0018H       /* Address match interrupt register 2 */
#pragma ADDRESS     vcr1_addr   001bH       /* Voltage detection register 1 */
#pragma ADDRESS     rmad3_addr  001cH       /* Address match interrupt register 3 */


#pragma ADDRESS     plc_addr    0026H       /* PLL control register */
#pragma ADDRESS     plc0_addr   0026H       /* PLL control register 0 */
#pragma ADDRESS     plc1_addr   0027H       /* PLL control register 1 */
#pragma ADDRESS     rmad4_addr  0028H       /* Address match interrupt register 4 */

#pragma ADDRESS     rmad5_addr  002CH       /* Address match interrupt register 5 */
#pragma ADDRESS     d4int_addr  002FH       /* Voltage down detect interrupt register */


#pragma ADDRESS     rmad6_addr  0038H       /* Address match interrupt register 6 */
#pragma ADDRESS     rmad7_addr  003CH       /* Address match interrupt register 7 */


#pragma ADDRESS     ewcr0_addr  0048H       /* External space wait control register 0 */
#pragma ADDRESS     ewcr1_addr  0049H       /* External space wait control register 1 */
#pragma ADDRESS     ewcr2_addr  004AH       /* External space wait control register 2 */
#pragma ADDRESS     ewcr3_addr  004BH       /* External space wait control register 3 */


#pragma ADDRESS     fmr1_addr   0055H       /* Flash Memory Control Register 1 */

#pragma ADDRESS     fmr_addr    0057H       /* Flash memory control register 0 */
#pragma ADDRESS     fmr0_addr   0057H       /* Flash memory control register 0 */


#pragma ADDRESS     dm0ic_addr  0068H       /* DMA0 interrupt control register */
#pragma ADDRESS     tb5ic_addr  0069H       /* Timer B5 interrupt register */
#pragma ADDRESS     dm2ic_addr  006aH       /* DMA2 interrupt register */
#pragma ADDRESS     s2ric_addr  006bH       /* UART2 receive/ack interrupt control register */
#pragma ADDRESS     ta0ic_addr  006cH       /* Timer A0 interrupt control register */
#pragma ADDRESS     s3ric_addr  006dH       /* UART3 receive/ack interrupt control register */
#pragma ADDRESS     ta2ic_addr  006eH       /* Timer A2 interrupt control register */
#pragma ADDRESS     s4ric_addr  006fH       /* UART4 receive/ack interrupt control register */
#pragma ADDRESS     ta4ic_addr  0070H       /* Timer A4 interrupt control register */
#pragma ADDRESS     bcn0ic_addr 0071H       /* Bus collision (UART0) interrupt control register */
#pragma ADDRESS     bcn3ic_addr 0071H       /* Bus collision (UART3) interrupt control register */
#pragma ADDRESS     s0ric_addr  0072H       /* UART0 receive interrupt control register */
#pragma ADDRESS     ad0ic_addr  0073H       /* A/D0 conversion interrupt control register */
#pragma ADDRESS     s1ric_addr  0074H       /* UART1 receive interrupt control register */
#pragma ADDRESS     iio0ic_addr 0075H       /* Intelligent I/O interrupt control register 0 */
#pragma ADDRESS     can3ic_addr 0075H       /* CAN interrupt 3 control register */
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
#pragma ADDRESS     can1ic_addr 007fH       /* CAN Interrupt 1 Control Register */

#pragma ADDRESS     iio11ic_addr 0081H      /* Intelligent I/O interrupt control register 11 */
#pragma ADDRESS     can2ic_addr 0081H       /* CAN Interrupt 2 Control Register */


#pragma ADDRESS     dm1ic_addr  0088H       /* DMA1 interrupt control register */
#pragma ADDRESS     s2tic_addr  0089H       /* UART2 transmit/nack interrupt control register */
#pragma ADDRESS     dm3ic_addr  008aH       /* DMA3 interrupt control register */
#pragma ADDRESS     s3tic_addr  008bH       /* UART3 transmit/nack interrupt control register */
#pragma ADDRESS     ta1ic_addr  008cH       /* Timer A1 interrupt control register */
#pragma ADDRESS     s4tic_addr  008dH       /* UART4 transmit/nack interrupt control register */
#pragma ADDRESS     ta3ic_addr  008eH       /* Timer A3 interrupt control register */
#pragma ADDRESS     bcn2ic_addr 008fH       /* Bus collision (UART2) interrupt control register */
#pragma ADDRESS     s0tic_addr  0090H       /* UART0 transmit interrupt control register */
#pragma ADDRESS     bcn1ic_addr 0091H       /* Bus collision (UART1) interrupt control register*/
#pragma ADDRESS     bcn4ic_addr 0091H       /* Bus collision (UART4) interrupt control register */
#pragma ADDRESS     s1tic_addr  0092H       /* UART1 transmit interrupt control register */
#pragma ADDRESS     kupic_addr  0093H       /* Key input interrupt control register */
#pragma ADDRESS     tb0ic_addr  0094H       /* Timer B0 interrupt control register */
#pragma ADDRESS     iio1ic_addr 0095H       /* Intelligent I/O interrupt control register 1 */
#pragma ADDRESS     can4ic_addr 0095H       /* CAN Interrupt 4 Control Register */
#pragma ADDRESS     tb2ic_addr  0096H       /* Timer B2 interrupt control register */
#pragma ADDRESS     iio3ic_addr 0097H       /* Intelligent I/O interrupt control register 3 */
#pragma ADDRESS     tb4ic_addr  0098H       /* Timer B4 interrupt control register */
#pragma ADDRESS     iio5ic_addr 0099H       /* Intelligent I/O interrupt control register 5 */
#pragma ADDRESS     can5ic_addr 0099H       /* CAN Interrupt 5 Control Register */
#pragma ADDRESS     int4ic_addr 009aH       /* INT4~ interrupt control register */
#pragma ADDRESS     iio7ic_addr 009bH       /* Intelligent I/O interrupt control register 7 */
#pragma ADDRESS     int2ic_addr 009cH       /* INT2~ interrupt control register */
#pragma ADDRESS     iio9ic_addr 009dH       /* Intelligent I/O interrupt control register 9 */
#pragma ADDRESS     can0ic_addr 009dH       /* CAN0 Interrupt Control Register*/
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


#pragma ADDRESS     g0rb_addr   00e8H       /* SI/O receive buffer register 0 */
#pragma ADDRESS     g0tb_addr   00eaH       /* Transmit buffer register 0 */
#pragma ADDRESS     g0dr_addr   00eaH       /* Receive data register 0 */

#pragma ADDRESS     g0ri_addr   00ecH       /* Receive input register 0 */
#pragma ADDRESS     g0mr_addr   00edH       /* SI/O communication control register 0 */
#pragma ADDRESS     g0to_addr   00eeH       /* Transmit output register 0 */
#pragma ADDRESS     g0cr_addr   00efH       /* SI/O communication control register 0 */
#pragma ADDRESS     g0cmp0_addr 00f0H       /* Data compare register 00 */
#pragma ADDRESS     g0cmp1_addr 00f1H       /* Data compare register 01 */
#pragma ADDRESS     g0cmp2_addr 00f2H       /* Data compare register 02 */
#pragma ADDRESS     g0cmp3_addr 00f3H       /* Data compare register 03 */
#pragma ADDRESS     g0msk0_addr 00f4H       /* Data mask register 00 */
#pragma ADDRESS     g0msk1_addr 00f5H       /* Data mask register 01 */
#pragma ADDRESS     ccs_addr    00f6H       /* Communication clock select register */

#pragma ADDRESS     g0rcrc_addr 00f8H       /* Receive CRC code register 0 */
#pragma ADDRESS     g0tcrc_addr 00faH       /* Transmit CRC code register 0 */
#pragma ADDRESS     g0emr_addr  00fcH       /* SI/O expansion mode register 0 */
#pragma ADDRESS     g0erc_addr  00fdH       /* SI/O expansion receive control register 0 */
#pragma ADDRESS     g0irf_addr  00feH       /* SI/O special communication interrupt detect register 0 */
#pragma ADDRESS     g0etc_addr  00ffH       /* SI/O expansion transmit control register 0 */
#pragma ADDRESS     g1tm0_addr  0100H       /* Time measurement register 10 */
#pragma ADDRESS     g1po0_addr  0100H       /* Waveform generate register 10 */
#pragma ADDRESS     g1tm1_addr  0102H       /* Time measurement register 11 */
#pragma ADDRESS     g1po1_addr  0102H       /* Waveform generate register 11 */
#pragma ADDRESS     g1tm2_addr  0104H       /* Time measurement register 12 */
#pragma ADDRESS     g1po2_addr  0104H       /* Waveform generate register 12 */
#pragma ADDRESS     g1tm3_addr  0106H       /* Time measurement register 13 */
#pragma ADDRESS     g1po3_addr  0106H       /* Waveform generate register 13 */
#pragma ADDRESS     g1tm4_addr  0108H       /* Time measurement register 14 */
#pragma ADDRESS     g1po4_addr  0108H       /* Waveform generate register 14 */
#pragma ADDRESS     g1tm5_addr  010aH       /* Time measurement register 15 */
#pragma ADDRESS     g1po5_addr  010aH       /* Waveform generate register 15 */
#pragma ADDRESS     g1tm6_addr  010cH       /* Time measurement register 16 */
#pragma ADDRESS     g1po6_addr  010cH       /* Waveform generate register 16 */
#pragma ADDRESS     g1tm7_addr  010eH       /* Time measurement register 17 */
#pragma ADDRESS     g1po7_addr  010eH       /* Waveform generate register 17 */
#pragma ADDRESS     g1pocr0_addr 0110H      /* Waveform generate control register 10 */
#pragma ADDRESS     g1pocr1_addr 0111H      /* Waveform generate control register 11 */
#pragma ADDRESS     g1pocr2_addr 0112H      /* Waveform generate control register 12 */
#pragma ADDRESS     g1pocr3_addr 0113H      /* Waveform generate control register 13 */
#pragma ADDRESS     g1pocr4_addr 0114H      /* Waveform generate control register 14 */
#pragma ADDRESS     g1pocr5_addr 0115H      /* Waveform generate control register 15 */
#pragma ADDRESS     g1pocr6_addr 0116H      /* Waveform generate control register 16 */
#pragma ADDRESS     g1pocr7_addr 0117H      /* Waveform generate control register 17 */
#pragma ADDRESS     g1tmcr0_addr 0118H      /* Time measurement control register 10 */
#pragma ADDRESS     g1tmcr1_addr 0119H      /* Time measurement control register 11 */
#pragma ADDRESS     g1tmcr2_addr 011aH      /* Time measurement control register 12 */
#pragma ADDRESS     g1tmcr3_addr 011bH      /* Time measurement control register 13 */
#pragma ADDRESS     g1tmcr4_addr 011cH      /* Time measurement control register 14 */
#pragma ADDRESS     g1tmcr5_addr 011dH      /* Time measurement control register 15 */
#pragma ADDRESS     g1tmcr6_addr 011eH      /* Time measurement control register 16 */
#pragma ADDRESS     g1tmcr7_addr 011fH      /* Time measurement control register 17 */
#pragma ADDRESS     g1bt_addr    0120H      /* Base timer register 1 */
#pragma ADDRESS     g1bcr0_addr  0122H      /* Base timer control register 10 */
#pragma ADDRESS     g1bcr1_addr  0123H      /* Base timer control register 11 */
#pragma ADDRESS     g1tpr6_addr  0124H      /* Time measurement prescaler register 16 */
#pragma ADDRESS     g1tpr7_addr  0125H      /* Time measurement prescaler register 17 */
#pragma ADDRESS     g1fe_addr    0126H      /* Function enable register 1 */
#pragma ADDRESS     g1fs_addr    0127H      /* Function select register 1 */
#pragma ADDRESS     g1rb_addr    0128H      /* SI/O receive buffer register 1 */
#pragma ADDRESS     g1tb_addr    012aH      /* Transmit buffer register 1 */
#pragma ADDRESS     g1dr_addr    012aH      /* Receive data register 1 */

#pragma ADDRESS     g1ri_addr    012cH      /* Receive input register 1 */
#pragma ADDRESS     g1mr_addr    012dH      /* SI/O communication mode register 1 */
#pragma ADDRESS     g1to_addr    012eH      /* Transmit output register 1 */
#pragma ADDRESS     g1cr_addr    012fH      /* SI/O communication control register 1 */
#pragma ADDRESS     g1cmp0_addr  0130H      /* Data compare register 10 */
#pragma ADDRESS     g1cmp1_addr  0131H      /* Data compare register 11 */
#pragma ADDRESS     g1cmp2_addr  0132H      /* Data compare register 12 */
#pragma ADDRESS     g1cmp3_addr  0133H      /* Data compare register 13 */
#pragma ADDRESS     g1msk0_addr  0134H      /* Data mask register 10 */
#pragma ADDRESS     g1msk1_addr  0135H      /* Data mask register 11 */


#pragma ADDRESS     g1rcrc_addr  0138H      /* Receive CRC code register 1 */
#pragma ADDRESS     g1tcrc_addr  013aH      /* Transmit CRC code register 1 */
#pragma ADDRESS     g1emr_addr   013cH      /* SI/O extended mode register 1 */
#pragma ADDRESS     g1erc_addr   013dH      /* SI/O extended receive control register 1 */
#pragma ADDRESS     g1irf_addr   013eH      /* SI/O special communication interrupt detect register 1 */
#pragma ADDRESS     g1etc_addr   013fH      /* SI/O extended transmit control register 1 */

#pragma ADDRESS     g2po0_addr   0140H
#pragma ADDRESS     g2po1_addr   0142H
#pragma ADDRESS     g2po2_addr   0144H
#pragma ADDRESS     g2po3_addr   0146H
#pragma ADDRESS     g2po4_addr   0148H
#pragma ADDRESS     g2po5_addr   014aH
#pragma ADDRESS     g2po6_addr   014cH
#pragma ADDRESS     g2po7_addr   014eH
#pragma ADDRESS     g2pocr0_addr 0150H
#pragma ADDRESS     g2pocr1_addr 0151H
#pragma ADDRESS     g2pocr2_addr 0152H
#pragma ADDRESS     g2pocr3_addr 0153H
#pragma ADDRESS     g2pocr4_addr 0154H
#pragma ADDRESS     g2pocr5_addr 0155H
#pragma ADDRESS     g2pocr6_addr 0156H
#pragma ADDRESS     g2pocr7_addr 0157H


#pragma ADDRESS     g2bt_addr    0160H
#pragma ADDRESS     g2bcr0_addr  0162H
#pragma ADDRESS     g2bcr1_addr  0163H
#pragma ADDRESS     btsr_addr    0164H

#pragma ADDRESS     g2fe_addr    0166H
#pragma ADDRESS     g2rtp_addr   0167H


#pragma ADDRESS     g2mr_addr    016aH
#pragma ADDRESS     g2cr_addr    016bH
#pragma ADDRESS     g2tb_addr    016cH
#pragma ADDRESS     g2rb_addr    016eH
#pragma ADDRESS     iear_addr    0170H
#pragma ADDRESS     iecr_addr    0172H
#pragma ADDRESS     ietif_addr   0173H
#pragma ADDRESS     ierif_addr   0174H


#pragma ADDRESS     ipsb_addr    0177H      /* Input function select register B */
#pragma ADDRESS     ips_addr     0178H      /* Input function select register */
#pragma ADDRESS     ipsa_addr    0179H      /* Input function select register A */


#pragma ADDRESS     u5mr_addr   01c0H       /* UART5 transmit/receive mode register */
#pragma ADDRESS     u5brg_addr  01c1H       /* UART5 bit rate generator */
#pragma ADDRESS     u5tb_addr   01c2H       /* UART5 transmit buffer register */
#pragma ADDRESS     u5c0_addr   01c4H       /* UART5 transmit/receive control register 0 */
#pragma ADDRESS     u5c1_addr   01c5H       /* UART5 transmit/receive control register 1 */
#pragma ADDRESS     u5rb_addr   01c6H       /* UART5 receive buffer register */
#pragma ADDRESS     u6mr_addr   01c8H       /* UART6 transmit/receive mode register */
#pragma ADDRESS     u6brg_addr  01c9H       /* UART6 bit rate generator */
#pragma ADDRESS     u6tb_addr   01caH       /* UART6 transmit buffer register */
#pragma ADDRESS     u6c0_addr   01ccH       /* UART6 transmit/receive control register 0 */
#pragma ADDRESS     u6c1_addr   01cdH       /* UART6 transmit/receive control register 1 */
#pragma ADDRESS     u6rb_addr   01ceH       /* UART6 receive buffer register */
#pragma ADDRESS     u56con_addr 01d0H
#pragma ADDRESS     u56is_addr  01d1H


#pragma ADDRESS     rtp0r_addr  01d8H
#pragma ADDRESS     rtp1r_addr  01d9H
#pragma ADDRESS     rtp2r_addr  01daH
#pragma ADDRESS     rtp3r_addr  01dbH



/************************************************************************
*   CAN 0 SFR Address area                                              *
************************************************************************/
#pragma ADDRESS     c0slot          01e0H      /* CAN0 Message Slot Buffer */
#pragma ADDRESS     c0slot0         01e0H      /* CAN0 Message Slot Buffer 0 */
#pragma ADDRESS     c0slot1         01f0H      /* CAN0 Message Slot Buffer 1 */
#pragma ADDRESS     c0ctlr0_addr    0200H      /* CAN0 Control Register 0 */
#pragma ADDRESS     c0str_addr      0202H      /* CAN0 Status Register */
#pragma ADDRESS     c0idr_addr      0204H      /* CAN0 Extended ID Register */
#pragma ADDRESS     c0conr_addr     0206H      /* CAN0 Configuration Register */
#pragma ADDRESS     c0tsr_addr      0208H      /* CAN0 Time Stamp Register */
#pragma ADDRESS     c0tec_addr      020aH      /* CAN0 Transmit Error Counter */
#pragma ADDRESS     c0rec_addr      020bH      /* CAN0 Receive Error Counter */
#pragma ADDRESS     c0sistr_addr    020cH      /* CAN0 Slot Interrupt Status Register */
#pragma ADDRESS     c0simkr_addr    0210H      /* CAN0 Slot Interrupt Mask Register */
#pragma ADDRESS     c0eimkr_addr    0214H      /* CAN0 Error Interrupt Mask Register */
#pragma ADDRESS     c0eistr_addr    0215H      /* CAN0 Error Interrupt Status Register */
#pragma ADDRESS     c0efr_addr      0216H      /* CAN0 Error Factor Register  */
#pragma ADDRESS     c0brp_addr      0217H      /* CAN0 Baud Rate Prescaler */
#pragma ADDRESS     c0mdr_addr      0219H      /* CAN0 Mode Register */
#pragma ADDRESS     c0ssctlr_addr   0220H      /* (BANK0) CAN0 Single Shot Control Register */
#pragma ADDRESS     c0ssstr_addr    0224H      /* (BANK0) CAN0 Single Shot Status Register */
#pragma ADDRESS     c0mctl          0230H      /* (BANK0) CAN0 Message Control Register */
#pragma ADDRESS     c0mctl0         0230H      /* (BANK0) CAN0 Message Slot0 Control Register */
#pragma ADDRESS     c0mctl1         0231H      /* (BANK0) CAN0 Message Slot1 Control Register */
#pragma ADDRESS     c0mctl2         0232H      /* (BANK0) CAN0 Message Slot2 Control Register */
#pragma ADDRESS     c0mctl3         0233H      /* (BANK0) CAN0 Message Slot3 Control Register */
#pragma ADDRESS     c0mctl4         0234H      /* (BANK0) CAN0 Message Slot4 Control Register */
#pragma ADDRESS     c0mctl5         0235H      /* (BANK0) CAN0 Message Slot5 Control Register */
#pragma ADDRESS     c0mctl6         0236H      /* (BANK0) CAN0 Message Slot6 Control Register */
#pragma ADDRESS     c0mctl7         0237H      /* (BANK0) CAN0 Message Slot7 Control Register */
#pragma ADDRESS     c0mctl8         0238H      /* (BANK0) CAN0 Message Slot8 Control Register */
#pragma ADDRESS     c0mctl9         0239H      /* (BANK0) CAN0 Message Slot9 Control Register */
#pragma ADDRESS     c0mctl10        023aH      /* (BANK0) CAN0 Message Slot10 Control Register */
#pragma ADDRESS     c0mctl11        023bH      /* (BANK0) CAN0 Message Slot11 Control Register */
#pragma ADDRESS     c0mctl12        023cH      /* (BANK0) CAN0 Message Slot12 Control Register */
#pragma ADDRESS     c0mctl13        023dH      /* (BANK0) CAN0 Message Slot13 Control Register */
#pragma ADDRESS     c0mctl14        023eH      /* (BANK0) CAN0 Message Slot14 Control Register */
#pragma ADDRESS     c0mctl15        023fH      /* (BANK0) CAN0 Message Slot15 Control Register */
#pragma ADDRESS     c0gmr           0228H      /* (BANK1) CAN0 Global Mask Register */
#pragma ADDRESS     c0gmr0_addr     0228H      /* (BANK1) CAN0 Global Mask Register 0 */
#pragma ADDRESS     c0gmr1_addr     0229H      /* (BANK1) CAN0 Global Mask Register 1 */
#pragma ADDRESS     c0gmr2_addr     022aH      /* (BANK1) CAN0 Global Mask Register 2 */
#pragma ADDRESS     c0gmr3_addr     022bH      /* (BANK1) CAN0 Global Mask Register 3 */
#pragma ADDRESS     c0gmr4_addr     022cH      /* (BANK1) CAN0 Global Mask Register 4 */
#pragma ADDRESS     c0lmar          0230H      /* (BANK1) CAN0 Local Mask A Register */
#pragma ADDRESS     c0lmar0_addr    0230H      /* (BANK1) CAN0 Local Mask A Register 0 */
#pragma ADDRESS     c0lmar1_addr    0231H      /* (BANK1) CAN0 Local Mask A Register 1 */
#pragma ADDRESS     c0lmar2_addr    0232H      /* (BANK1) CAN0 Local Mask A Register 2 */
#pragma ADDRESS     c0lmar3_addr    0233H      /* (BANK1) CAN0 Local Mask A Register 3 */
#pragma ADDRESS     c0lmar4_addr    0234H      /* (BANK1) CAN0 Local Mask A Register 4 */
#pragma ADDRESS     c0lmbr          0238H      /* (BANK1) CAN0 Local Mask B Register */
#pragma ADDRESS     c0lmbr0_addr    0238H      /* (BANK1) CAN0 Local Mask B Register 0 */
#pragma ADDRESS     c0lmbr1_addr    0239H      /* (BANK1) CAN0 Local Mask B Register 1 */
#pragma ADDRESS     c0lmbr2_addr    023aH      /* (BANK1) CAN0 Local Mask B Register 2 */
#pragma ADDRESS     c0lmbr3_addr    023bH      /* (BANK1) CAN0 Local Mask B Register 3 */
#pragma ADDRESS     c0lmbr4_addr    023cH      /* (BANK1) CAN0 Local Mask B Register 4 */
#pragma ADDRESS     c0sbs_addr      0240H      /* CAN0 Slot Buffer Select Register */
#pragma ADDRESS     c0ctlr1_addr    0241H      /* CAN0 Control Register 1 */
#pragma ADDRESS     c0slpr_addr     0242H      /* CAN0 Sleep Control Register */
#pragma ADDRESS     c0afs_addr      0244H      /* CAN0 Acceptance Filter Support Register */


/************************************************************************
*   CAN 1 SFR Address area                                              *
************************************************************************/
#pragma ADDRESS     c1slot          0260H      /* CAN1 Message Slot Buffer */
#pragma ADDRESS     c1slot0         0260H      /* CAN1 Message Slot Buffer 0 */
#pragma ADDRESS     c1slot1         0270H      /* CAN1 Message Slot Buffer 1 */
#pragma ADDRESS     c1ctlr0_addr    0280H      /* CAN1 Control Register 0 */
#pragma ADDRESS     c1str_addr      0282H      /* CAN1 Status Register */
#pragma ADDRESS     c1idr_addr      0284H      /* CAN1 Extended ID Register */
#pragma ADDRESS     c1conr_addr     0286H      /* CAN1 Configuration Register */
#pragma ADDRESS     c1tsr_addr      0288H      /* CAN1 Time Stamp Register */
#pragma ADDRESS     c1tec_addr      028aH      /* CAN1 Transmit Error Counter */
#pragma ADDRESS     c1rec_addr      028bH      /* CAN1 Receive Error Counter */
#pragma ADDRESS     c1sistr_addr    028cH      /* CAN1 Slot Interrupt Status Register */
#pragma ADDRESS     c1simkr_addr    0290H      /* CAN1 Slot Interrupt Mask Register */
#pragma ADDRESS     c1eimkr_addr    0294H      /* CAN1 Error Interrupt Mask Register */
#pragma ADDRESS     c1eistr_addr    0295H      /* CAN1 Error Interrupt Status Register */
#pragma ADDRESS     c1efr_addr      0296H      /* CAN1 Error Factor Register  */
#pragma ADDRESS     c1brp_addr      0297H      /* CAN1 Baud Rate Prescaler */
#pragma ADDRESS     c1mdr_addr      0299H      /* CAN1 Mode Register */
#pragma ADDRESS     c1ssctlr_addr   02A0H      /* (BANK0) CAN1 Single Shot Control Register */
#pragma ADDRESS     c1ssstr_addr    02A4H      /* (BANK0) CAN1 Single Shot Status Register */
#pragma ADDRESS     c1mctl          02B0H      /* (BANK0) CAN1 Message Control Register */
#pragma ADDRESS     c1mctl0         02B0H      /* (BANK0) CAN1 Message Slot0 Control Register */
#pragma ADDRESS     c1mctl1         02B1H      /* (BANK0) CAN1 Message Slot1 Control Register */
#pragma ADDRESS     c1mctl2         02B2H      /* (BANK0) CAN1 Message Slot2 Control Register */
#pragma ADDRESS     c1mctl3         02B3H      /* (BANK0) CAN1 Message Slot3 Control Register */
#pragma ADDRESS     c1mctl4         02B4H      /* (BANK0) CAN1 Message Slot4 Control Register */
#pragma ADDRESS     c1mctl5         02B5H      /* (BANK0) CAN1 Message Slot5 Control Register */
#pragma ADDRESS     c1mctl6         02B6H      /* (BANK0) CAN1 Message Slot6 Control Register */
#pragma ADDRESS     c1mctl7         02B7H      /* (BANK0) CAN1 Message Slot7 Control Register */
#pragma ADDRESS     c1mctl8         02B8H      /* (BANK0) CAN1 Message Slot8 Control Register */
#pragma ADDRESS     c1mctl9         02B9H      /* (BANK0) CAN1 Message Slot9 Control Register */
#pragma ADDRESS     c1mctl10        02baH      /* (BANK0) CAN1 Message Slot10 Control Register */
#pragma ADDRESS     c1mctl11        02bbH      /* (BANK0) CAN1 Message Slot11 Control Register */
#pragma ADDRESS     c1mctl12        02bcH      /* (BANK0) CAN1 Message Slot12 Control Register */
#pragma ADDRESS     c1mctl13        02bdH      /* (BANK0) CAN1 Message Slot13 Control Register */
#pragma ADDRESS     c1mctl14        02beH      /* (BANK0) CAN1 Message Slot14 Control Register */
#pragma ADDRESS     c1mctl15        02bfH      /* (BANK0) CAN1 Message Slot15 Control Register */
#pragma ADDRESS     c1gmr           02a8H      /* (BANK1) CAN1 Global Mask Register */
#pragma ADDRESS     c1gmr0_addr     02a8H      /* (BANK1) CAN1 Global Mask Register 0 */
#pragma ADDRESS     c1gmr1_addr     02a9H      /* (BANK1) CAN1 Global Mask Register 1 */
#pragma ADDRESS     c1gmr2_addr     02aaH      /* (BANK1) CAN1 Global Mask Register 2 */
#pragma ADDRESS     c1gmr3_addr     02abH      /* (BANK1) CAN1 Global Mask Register 3 */
#pragma ADDRESS     c1gmr4_addr     02acH      /* (BANK1) CAN1 Global Mask Register 4 */
#pragma ADDRESS     c1lmar          02b0H      /* (BANK1) CAN1 Local Mask A Register */
#pragma ADDRESS     c1lmar0_addr    02b0H      /* (BANK1) CAN1 Local Mask A Register 0 */
#pragma ADDRESS     c1lmar1_addr    02b1H      /* (BANK1) CAN1 Local Mask A Register 1 */
#pragma ADDRESS     c1lmar2_addr    02b2H      /* (BANK1) CAN1 Local Mask A Register 2 */
#pragma ADDRESS     c1lmar3_addr    02b3H      /* (BANK1) CAN1 Local Mask A Register 3 */
#pragma ADDRESS     c1lmar4_addr    02b4H      /* (BANK1) CAN1 Local Mask A Register 4 */
#pragma ADDRESS     c1lmbr          02b8H      /* (BANK1) CAN1 Local Mask B Register */
#pragma ADDRESS     c1lmbr0_addr    02b8H      /* (BANK1) CAN1 Local Mask B Register 0 */
#pragma ADDRESS     c1lmbr1_addr    02b9H      /* (BANK1) CAN1 Local Mask B Register 1 */
#pragma ADDRESS     c1lmbr2_addr    02baH      /* (BANK1) CAN1 Local Mask B Register 2 */
#pragma ADDRESS     c1lmbr3_addr    02bbH      /* (BANK1) CAN1 Local Mask B Register 3 */
#pragma ADDRESS     c1lmbr4_addr    02bcH      /* (BANK1) CAN1 Local Mask B Register 4 */
#pragma ADDRESS     c1sbs_addr      0250H      /* CAN1 Slot Buffer Select Register */
#pragma ADDRESS     c1ctlr1_addr    0251H      /* CAN1 Control Register 1 */
#pragma ADDRESS     c1slpr_addr     0252H      /* CAN1 Sleep Control Register */
#pragma ADDRESS     c1afs_addr      0254H      /* CAN1 Acceptance Filter Support Register */

/************************************************************************
*                                                                       *
************************************************************************/
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
#pragma ADDRESS     invc0_addr  0308H       /* Three-phase PWM control register 0 */
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
#pragma ADDRESS     ifsra_addr  031eH       /* External interrupt request cause select register 1 */
#pragma ADDRESS     ifsr_addr   031fH       /* External interrupt request cause select register */


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


#pragma ADDRESS     ircon_addr  0372H


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


#pragma ADDRESS     ad0con4_addr 0392H      /* A/D0 control register 4 */

#pragma ADDRESS     ad0con2_addr 0394H      /* A/D0 control register 2 */
#pragma ADDRESS     ad0con3_addr 0395H      /* A/D0 control register 3 */
#pragma ADDRESS     ad0con0_addr 0396H      /* A/D0 control register 0 */
#pragma ADDRESS     ad0con1_addr 0397H      /* A/D0 control register 1 */
#pragma ADDRESS     da0_addr    0398H       /* D/A register 0 */

#pragma ADDRESS     da1_addr    039aH       /* D/A register 1 */

#pragma ADDRESS     dacon_addr  039cH       /* D/A control register */
#pragma ADDRESS     dacon1_addr 039dH       /* D/A control register 1 */


#pragma ADDRESS     ps8_addr    03a0H       /* Function select register A8 */
#pragma ADDRESS     ps9_addr    03a1H       /* Function select register A9 */

#pragma ADDRESS     psl9_addr   03a3H       /* Function select register B9 */
#pragma ADDRESS     pse2_addr   03a4H       /* Function select register E2 */


#pragma ADDRESS     psd1_addr   03a7H       /* Function select register D1 */
#pragma ADDRESS     psd2_addr   03a8H       /* Function select register D2 */

#pragma ADDRESS     psc6_addr   03aaH       /* Function select register C6 */
#pragma ADDRESS     pse1_addr   03abH       /* Function select register E1 */
#pragma ADDRESS     psc2_addr   03acH       /* Function select register C2 */
#pragma ADDRESS     psc3_addr   03adH       /* Function select register C3 */

#pragma ADDRESS     psc_addr    03afH       /* Function select register C */
#pragma ADDRESS     ps0_addr    03b0H       /* Function select register A0 */
#pragma ADDRESS     ps1_addr    03b1H       /* Function select register A1 */
#pragma ADDRESS     psl0_addr   03b2H       /* Function select register B0 */
#pragma ADDRESS     psl1_addr   03b3H       /* Function select register B1 */
#pragma ADDRESS     ps2_addr    03b4H       /* Function select register A2 */
#pragma ADDRESS     ps3_addr    03b5H       /* Function select register A3 */
#pragma ADDRESS     psl2_addr   03b6H       /* Function select register B2 */
#pragma ADDRESS     psl3_addr   03b7H       /* Function select register B3 */
#pragma ADDRESS     ps4_addr    03b8H       /* Function select register A4 */
#pragma ADDRESS     ps5_addr    03b9H       /* Function select register A5 */


#pragma ADDRESS     ps6_addr    03bcH       /* Function select register A6 */
#pragma ADDRESS     ps7_addr    03bdH       /* Function select register A7 */
#pragma ADDRESS     psl6_addr   03beH       /* Function select register B6 */

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

/********************************************************
*   group 0 and 1 and 2                                 *
********************************************************/
#define     g1bt        g1bt_addr.word        /* Base Timer Register 1 */
#define     g1btl       g1bt_addr.byte.low
#define     g1bth       g1bt_addr.byte.high

#define     g1tm0        g1tm0_addr.word      /* Time Measurement Register 10 */
#define     g1tm0l       g1tm0_addr.byte.low
#define     g1tm0h       g1tm0_addr.byte.high

#define     g1tm1        g1tm1_addr.word      /* Time Measurement Register 11 */
#define     g1tm1l       g1tm1_addr.byte.low
#define     g1tm1h       g1tm1_addr.byte.high

#define     g1tm2        g1tm2_addr.word      /* Time Measurement Register 12 */
#define     g1tm2l       g1tm2_addr.byte.low
#define     g1tm2h       g1tm2_addr.byte.high

#define     g1tm3        g1tm3_addr.word      /* Time Measurement Register 13 */
#define     g1tm3l       g1tm3_addr.byte.low
#define     g1tm3h       g1tm3_addr.byte.high

#define     g1tm4        g1tm4_addr.word      /* Time Measurement Register 14 */
#define     g1tm4l       g1tm4_addr.byte.low
#define     g1tm4h       g1tm4_addr.byte.high

#define     g1tm5        g1tm5_addr.word      /* Time Measurement Register 15 */
#define     g1tm5l       g1tm5_addr.byte.low
#define     g1tm5h       g1tm5_addr.byte.high

#define     g1tm6        g1tm6_addr.word      /* Time Measurement Register 16 */
#define     g1tm6l       g1tm6_addr.byte.low
#define     g1tm6h       g1tm6_addr.byte.high

#define     g1tm7        g1tm7_addr.word      /* Time Measurement Register 17 */
#define     g1tm7l       g1tm7_addr.byte.low
#define     g1tm7h       g1tm7_addr.byte.high

#define     g1po0        g1po0_addr.word      /* Waveform Generate Register 10 */
#define     g1po0l       g1po0_addr.byte.low
#define     g1po0h       g1po0_addr.byte.high

#define     g1po1        g1po1_addr.word      /* Waveform Generate Register 11 */
#define     g1po1l       g1po1_addr.byte.low
#define     g1po1h       g1po1_addr.byte.high

#define     g1po2        g1po2_addr.word      /* Waveform Generate Register 12 */
#define     g1po2l       g1po2_addr.byte.low
#define     g1po2h       g1po2_addr.byte.high

#define     g1po3        g1po3_addr.word      /* Waveform Generate Register 13 */
#define     g1po3l       g1po3_addr.byte.low
#define     g1po3h       g1po3_addr.byte.high

#define     g1po4        g1po4_addr.word      /* Waveform Generate Register 14 */
#define     g1po4l       g1po4_addr.byte.low
#define     g1po4h       g1po4_addr.byte.high

#define     g1po5        g1po5_addr.word      /* Waveform Generate Register 15 */
#define     g1po5l       g1po5_addr.byte.low
#define     g1po5h       g1po5_addr.byte.high

#define     g1po6        g1po6_addr.word      /* Waveform Generate Register 16 */
#define     g1po6l       g1po6_addr.byte.low
#define     g1po6h       g1po6_addr.byte.high

#define     g1po7        g1po7_addr.word      /* Waveform Generate Register 17 */
#define     g1po7l       g1po7_addr.byte.low
#define     g1po7h       g1po7_addr.byte.high

#define     g2bt         g2bt_addr.word        /* Base Timer Register 2 */
#define     g2btl        g2bt_addr.byte.low
#define     g2bth        g2bt_addr.byte.high

#define     g2po0        g2po0_addr.word      /* Waveform Generate Register 20 */
#define     g2po0l       g2po0_addr.byte.low
#define     g2po0h       g2po0_addr.byte.high

#define     g2po1        g2po1_addr.word      /* Waveform Generate Register 21 */
#define     g2po1l       g2po1_addr.byte.low
#define     g2po1h       g2po1_addr.byte.high

#define     g2po2        g2po2_addr.word      /* Waveform Generate Register 22 */
#define     g2po2l       g2po2_addr.byte.low
#define     g2po2h       g2po2_addr.byte.high

#define     g2po3        g2po3_addr.word      /* Waveform Generate Register 23 */
#define     g2po3l       g2po3_addr.byte.low
#define     g2po3h       g2po3_addr.byte.high

#define     g2po4        g2po4_addr.word      /* Waveform Generate Register 24 */
#define     g2po4l       g2po4_addr.byte.low
#define     g2po4h       g2po4_addr.byte.high

#define     g2po5        g2po5_addr.word      /* Waveform Generate Register 25 */
#define     g2po5l       g2po5_addr.byte.low
#define     g2po5h       g2po5_addr.byte.high

#define     g2po6        g2po6_addr.word      /* Waveform Generate Register 26 */
#define     g2po6l       g2po6_addr.byte.low
#define     g2po6h       g2po6_addr.byte.high

#define     g2po7        g2po7_addr.word      /* Waveform Generate Register 27 */
#define     g2po7l       g2po7_addr.byte.low
#define     g2po7h       g2po7_addr.byte.high

#define     g0tcrc        g0tcrc_addr.word      /* Transmit CRC Code Register 0 */
#define     g0tcrcl       g0tcrc_addr.byte.low
#define     g0tcrch       g0tcrc_addr.byte.high

#define     g1tcrc        g1tcrc_addr.word      /* Transmit CRC Code Register 1 */
#define     g1tcrcl       g1tcrc_addr.byte.low
#define     g1tcrch       g1tcrc_addr.byte.high

#define     g0rcrc        g0rcrc_addr.word      /* Receive CRC Code Register 0 */
#define     g0rcrcl       g0rcrc_addr.byte.low
#define     g0rcrch       g0rcrc_addr.byte.high

#define     g1rcrc        g1rcrc_addr.word      /* Receive CRC Code Register 1 */
#define     g1rcrcl       g1rcrc_addr.byte.low
#define     g1rcrch       g1rcrc_addr.byte.high

/*------------------------------------------------------
    SI/O receive buffer register
------------------------------------------------------*/

/*------------------------------------------------------
     SI/O Receive Buffer Register 0
------------------------------------------------------*/
#define     g0rb        g0rb_addr.word
#define     g0rbl       g0rb_addr.byte.low
#define     g0rbh       g0rb_addr.byte.high
#define     oer_g0rb    g0rb_addr.bit.b12   /* Overrun error flag */
#define     fer_g0rb    g0rb_addr.bit.b13   /* Framing error flag */

/*------------------------------------------------------
     SI/O Receive Buffer Register 1
------------------------------------------------------*/
#define     g1rb        g1rb_addr.word
#define     g1rbl       g1rb_addr.byte.low
#define     g1rbh       g1rb_addr.byte.high
#define     oer_g1rb    g1rb_addr.bit.b12       /* Overrun error flag */
#define     fer_g1rb    g1rb_addr.bit.b13       /* Framing error flag */

/*------------------------------------------------------
     SI/O Receive Buffer Register 2
------------------------------------------------------*/
#define     g2rb        g2rb_addr.word
#define     g2rbl       g2rb_addr.byte.low
#define     g2rbh       g2rb_addr.byte.high
#define     oer_g2rb    g2rb_addr.bit.b12       /* Overrun error flag */

/*------------------------------------------------------
     SI/O Transmit Buffer Register 2
------------------------------------------------------*/
#define     g2tb        g2tb_addr.word
#define     g2tbl       g2tb_addr.byte.low
#define     g2tbh       g2tb_addr.byte.high
#define     a_g2tb      g2tb_addr.bit.b13
#define     pc_g2tb     g2tb_addr.bit.b14
#define     p_g2tb      g2tb_addr.bit.b15

/*------------------------------------------------------

------------------------------------------------------*/
#define     iear        iear_addr.word
#define     iearl       iear_addr.byte.low
#define     iearh       iear_addr.byte.high

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
    External Space Wait Control Register 0
------------------------------------------------------*/
union byte_def ewcr0_addr;
#define     ewcr0      ewcr0_addr.byte

#define     ewcr000    ewcr0_addr.bit.b0    /* (b4-b0) Bus cycle select bit */
#define     ewcr001    ewcr0_addr.bit.b1
#define     ewcr002    ewcr0_addr.bit.b2
#define     ewcr003    ewcr0_addr.bit.b3
#define     ewcr004    ewcr0_addr.bit.b4
                                            /* (b5) Nothing is assigned */
#define     ewcr006    ewcr0_addr.bit.b6    /* Recovery cycle addition select bit */
                                            /* (b7) Nothing is assigned */

/*------------------------------------------------------
    External Space Wait Control Register 1
------------------------------------------------------*/
union byte_def ewcr1_addr;
#define     ewcr1      ewcr1_addr.byte

#define     ewcr100    ewcr1_addr.bit.b0    /* (b4-b0) Bus cycle select bit */
#define     ewcr101    ewcr1_addr.bit.b1
#define     ewcr102    ewcr1_addr.bit.b2
#define     ewcr103    ewcr1_addr.bit.b3
#define     ewcr104    ewcr1_addr.bit.b4
                                            /* (b5) Nothing is assigned */
#define     ewcr106    ewcr1_addr.bit.b6    /* Recovery cycle addition select bit */
                                            /* (b7) Nothing is assigned */

/*------------------------------------------------------
    External Space Wait Control Register 2
------------------------------------------------------*/
union byte_def ewcr2_addr;
#define     ewcr2      ewcr2_addr.byte

#define     ewcr200    ewcr2_addr.bit.b0    /* (b4-b0) Bus cycle select bit */
#define     ewcr201    ewcr2_addr.bit.b1
#define     ewcr202    ewcr2_addr.bit.b2
#define     ewcr203    ewcr2_addr.bit.b3
#define     ewcr204    ewcr2_addr.bit.b4
                                            /* (b5) Nothing is assigned */
#define     ewcr206    ewcr2_addr.bit.b6    /* Recovery cycle addition select bit */
                                            /* (b7) Nothing is assigned */

/*------------------------------------------------------
    External Space Wait Control Register 3
------------------------------------------------------*/
union byte_def ewcr3_addr;
#define     ewcr3      ewcr3_addr.byte

#define     ewcr300    ewcr3_addr.bit.b0    /* (b4-b0) Bus cycle select bit */
#define     ewcr301    ewcr3_addr.bit.b1
#define     ewcr302    ewcr3_addr.bit.b2
#define     ewcr303    ewcr3_addr.bit.b3
#define     ewcr304    ewcr3_addr.bit.b4
                                            /* (b5) Nothing is assigned */
#define     ewcr306    ewcr3_addr.bit.b6    /* Recovery cycle addition select bit */
                                            /* (b7) Nothing is assigned */

/*------------------------------------------------------
    Flash Memory control register 1
------------------------------------------------------*/
union byte_def fmr1_addr;
#define     fmr1      fmr1_addr.byte
                                            /* (b0) Reserved bit */
#define     fmr11     fmr1_addr.bit.b1      /* EW1 mode select bit */
                                            /* (b3-b2) Reserved bit */
                                            /* (b5-b4) Reserved bit */
#define     fmr16     fmr1_addr.bit.b6      /* Lock bit status flag */
                                            /* (b7) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Flash Memory control register 0
------------------------------------------------------*/
#define     fmr       fmr_addr.word

union byte_def fmr0_addr;
#define     fmr0      fmr0_addr.byte

#define     fmr00     fmr0_addr.bit.b0      /* RY/BY status flag */
#define     fmr01     fmr0_addr.bit.b1      /* CPU rewrite mode select bit */
#define     fmr02     fmr0_addr.bit.b2      /* Lock bit disable select bit */
#define     fmstp     fmr0_addr.bit.b3      /* Flash memory stop bit */
                                            /* (b4) Reserved bit (Set to 0) */
#define     fmr05     fmr0_addr.bit.b5      /* User ROM area select bit (Available in boot mode only) */
#define     fmr06     fmr0_addr.bit.b6      /* Program status flag */
#define     fmr07     fmr0_addr.bit.b7      /* Erase status flag */

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
                                            /* (b6) Reserved bit (Set to 0) */
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
                                            /* (b7-b6) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Processor mode register 2
------------------------------------------------------*/
union byte_def pm2_addr;
#define     pm2     pm2_addr.byte
                                            /* (b0) Reserved bit (Set to 0) */
#define     pm21        pm2_addr.bit.b1     /* System clock protect bit */
#define     pm22        pm2_addr.bit.b2     /* WDT count source protect bit */
                                            /* (b5-b3) Reserved bit (Set to 0) */
#define     pm26        pm2_addr.bit.b6     /* (b7-b6) f2n count source select bit */
#define     pm27        pm2_addr.bit.b7

/*------------------------------------------------------
    System clock control register 0
------------------------------------------------------*/
union byte_def cm0_addr;
#define     cm0     cm0_addr.byte

#define     cm00        cm0_addr.bit.b0     /* Clock output function select bit */
#define     cm01        cm0_addr.bit.b1     /* Clock output function select bit */
#define     cm02        cm0_addr.bit.b2     /* WAIT peripheral function clock stop bit */
#define     cm03        cm0_addr.bit.b3     /* Xcin-Xcout drive capacity select bit */
#define     cm04        cm0_addr.bit.b4     /* Port Xc select bit */
#define     cm05        cm0_addr.bit.b5     /* Main clock stop bit */
#define     cm06        cm0_addr.bit.b6     /* WDT function select bit */
#define     cm07        cm0_addr.bit.b7     /* CPU clock select bit0 */

/*------------------------------------------------------
    System clock control register 1
------------------------------------------------------*/
union byte_def cm1_addr;
#define     cm1     cm1_addr.byte

#define     cm10        cm1_addr.bit.b0     /* All clock stop control bit */
                                            /* (b4-b1) Reserved bit (Set to 0) */
                                            /* (b5) Reserved bit (Set to 1) */
                                            /* (b6) Reserved bit (Set to 0) */
#define     cm17        cm1_addr.bit.b7     /* CPU clock select bit1 */

/*------------------------------------------------------
    Oscillation stop detect register
------------------------------------------------------*/
union byte_def cm2_addr;
#define     cm2     cm2_addr.byte

#define     cm20        cm2_addr.bit.b0     /* Oscillation stop detect enable bit */
#define     cm21        cm2_addr.bit.b1     /* CPU clock select bit2 */
#define     cm22        cm2_addr.bit.b2     /* Oscillation stop detect flag */
#define     cm23        cm2_addr.bit.b3     /* Main clock monitor flag */
                                            /* (b7-b4) Reserved bit (Set to 0) */


/*------------------------------------------------------
    Address match interrupt enable register
------------------------------------------------------*/
union byte_def aier_addr;
#define     aier        aier_addr.byte

#define     aier0       aier_addr.bit.b0    /* Address match interrupt 0 enable bit */
#define     aier1       aier_addr.bit.b1    /* Address match interrupt 1 enable bit */
#define     aier2       aier_addr.bit.b2    /* Address match interrupt 2 enable bit */
#define     aier3       aier_addr.bit.b3    /* Address match interrupt 3 enable bit */
#define     aier4       aier_addr.bit.b4    /* Address match interrupt 4 enable bit */
#define     aier5       aier_addr.bit.b5    /* Address match interrupt 5 enable bit */
#define     aier6       aier_addr.bit.b6    /* Address match interrupt 6 enable bit */
#define     aier7       aier_addr.bit.b7    /* Address match interrupt 7 enable bit */

/*------------------------------------------------------
    X-Y control register
------------------------------------------------------*/
union byte_def xyc_addr;
#define     xyc     xyc_addr.byte

#define     xyc0        xyc_addr.bit.b0     /* Read-mode set bit */
#define     xyc1        xyc_addr.bit.b1     /* Write-mode set bit */
                                            /* (b7-b2) Nothing is assigned */

/*------------------------------------------------------
    Protect register
------------------------------------------------------*/
union byte_def prcr_addr;
#define     prcr        prcr_addr.byte

#define     prc0        prcr_addr.bit.b0    /* Protect bit0 */
#define     prc1        prcr_addr.bit.b1    /* Protect bit1 */
#define     prc2        prcr_addr.bit.b2    /* Protect bit2 */
#define     prc3        prcr_addr.bit.b3    /* Protect bit3 */
                                            /* (b7-b4) Nothing is assigned */

/*------------------------------------------------------
    External data bus width control register
------------------------------------------------------*/
union byte_def ds_addr;
#define     ds      ds_addr.byte

#define     ds0     ds_addr.bit.b0          /* External space 0 data bus width select bit */
#define     ds1     ds_addr.bit.b1          /* External space 1 data bus width select bit */
#define     ds2     ds_addr.bit.b2          /* External space 2 data bus width select bit */
#define     ds3     ds_addr.bit.b3          /* External space 3 data bus width select bit */
                                            /* (b7-b4) Nothing is assigned */

/*------------------------------------------------------
    Main clock division register
------------------------------------------------------*/
union byte_def mcd_addr;
#define     mcd     mcd_addr.byte

#define     mcd0        mcd_addr.bit.b0     /* (b4-b0) Main clock division select bit */
#define     mcd1        mcd_addr.bit.b1
#define     mcd2        mcd_addr.bit.b2
#define     mcd3        mcd_addr.bit.b3
#define     mcd4        mcd_addr.bit.b4
                                            /* (b7-b5) Reserved bit (Set to 0) */

/*------------------------------------------------------
   Count source prescaler register
------------------------------------------------------*/
union byte_def tcspr_addr;
#define     tcspr     tcspr_addr.byte

#define     cnt0        tcspr_addr.bit.b0   /* (b3-b0) Divide ratio select bit */
#define     cnt1        tcspr_addr.bit.b1
#define     cnt2        tcspr_addr.bit.b2
#define     cnt3        tcspr_addr.bit.b3
                                            /* (b6-b4) Reserved bit (Set to 0) */
#define     cst         tcspr_addr.bit.b7   /* Operation enable bit */

/*------------------------------------------------------
    Exit priority register
------------------------------------------------------*/
union byte_def rlvl_addr;
#define     rlvl        rlvl_addr.byte

#define     rlvl0       rlvl_addr.bit.b0    /* (b2-b0) Interrupt priority set bits to exit STOP/WAIT mode */
#define     rlvl1       rlvl_addr.bit.b1
#define     rlvl2       rlvl_addr.bit.b2
#define     fsit        rlvl_addr.bit.b3    /* High-speed interrupt set bit */
                                            /* (b4) Nothing is assigned */
#define     dmaii       rlvl_addr.bit.b5    /* DMAC II select bit */
                                            /* (b7-b6) Nothing is assigned */

/*------------------------------------------------------
    External interrupt request cause select register 1
------------------------------------------------------*/
union byte_def ifsra_addr;
#define     ifsra        ifsra_addr.byte

#define     ifsr10      ifsra_addr.bit.b0   /* INT6 interrupt polarity select bit */
#define     ifsr11      ifsra_addr.bit.b1   /* INT7 interrupt polarity select bit */
#define     ifsr12      ifsra_addr.bit.b2   /* INT8 interrupt polarity select bit */
                                            /* (b7-b3) Reserved bit (Set to 0) */

/*------------------------------------------------------
    External interrupt request cause select register
------------------------------------------------------*/
union byte_def ifsr_addr;
#define     ifsr        ifsr_addr.byte

#define     ifsr0       ifsr_addr.bit.b0    /* INT0 interrupt polarity select bit */
#define     ifsr1       ifsr_addr.bit.b1    /* INT1 interrupt polarity select bit */
#define     ifsr2       ifsr_addr.bit.b2    /* INT2 interrupt polarity select bit */
#define     ifsr3       ifsr_addr.bit.b3    /* INT3 interrupt polarity select bit */
#define     ifsr4       ifsr_addr.bit.b4    /* INT4 interrupt polarity select bit */
#define     ifsr5       ifsr_addr.bit.b5    /* INT5 interrupt polarity select bit */
#define     ifsr6       ifsr_addr.bit.b6    /* UART0,3 interrupt cause select bit */
#define     ifsr7       ifsr_addr.bit.b7    /* UART1,4 interrupt cause select bit */

/*------------------------------------------------------
    Timer B2 special mode register
------------------------------------------------------*/
union byte_def tb2sc_addr;
#define     tb2sc     tb2sc_addr.byte

#define     pwcon     tb2sc_addr.bit.b0     /* Timer B2 reload timing switching bit */
                                            /* (b7-b1) Nothing is assigned */

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

                                            /* (b4-b0) High-order bits of the watchdog timer */
#define     wdc5        wdc_addr.bit.b5     /* Cold start/warm start detect flag */
                                            /* (b6) Reserved bit (Set to 0) */
#define     wdc7        wdc_addr.bit.b7     /* Prescaler select bit */

/*------------------------------------------------------
    Voltage detection register 1
------------------------------------------------------*/
union byte_def vcr1_addr;
#define     vcr1     vcr1_addr.byte
                                            /* (b2-b0) Reserved bit (Set to 0) */
#define     vc13        vcr1_addr.bit.b3    /* Voltage down monitor flag */
                                            /* (b7-b4) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Voltage detection register 2
------------------------------------------------------*/
union byte_def vcr2_addr;
#define     vcr2     vcr2_addr.byte
                                            /* (b5-b0) Reserved bit (Set to 0) */
#define     vc26        vcr2_addr.bit.b6    /* Reset level monitor bit */
#define     vc27        vcr2_addr.bit.b7    /* Voltage down monitor bit */

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
                                            /* (b4-b0) Nothing is assigned */
#define     tb3s        tbsr_addr.bit.b5    /* Timer B3 count start flag */
#define     tb4s        tbsr_addr.bit.b6    /* Timer B4 count start flag */
#define     tb5s        tbsr_addr.bit.b7    /* Timer B5 count start flag */

/*------------------------------------------------------
    Three-phase PWM control register 0
------------------------------------------------------*/
union byte_def invc0_addr;
#define     invc0       invc0_addr.byte

#define     inv00       invc0_addr.bit.b0   /* Interrupt enable output polarity select bit */
#define     inv01       invc0_addr.bit.b1   /* Interrupt enable output specification bit */
#define     inv02       invc0_addr.bit.b2   /* Mode select bit */
#define     inv03       invc0_addr.bit.b3   /* Output control bit */
#define     inv04       invc0_addr.bit.b4   /* Positive & negative phases concurrent active disable function enable bit */
#define     inv05       invc0_addr.bit.b5   /* Positive & negative phases concurrent active output detect flag */
#define     inv06       invc0_addr.bit.b6   /* Modulation mode select bit */
#define     inv07       invc0_addr.bit.b7   /* Software trigger select bit */

/*------------------------------------------------------
    Three-phase PWM control register 1
------------------------------------------------------*/
union byte_def invc1_addr;
#define     invc1       invc1_addr.byte

#define     inv10       invc1_addr.bit.b0   /* Timer A1,A2 and A4 start trigger select bit */
#define     inv11       invc1_addr.bit.b1   /* Timer A1-1,A2-1,A4-1 control bit */
#define     inv12       invc1_addr.bit.b2   /* Dead time timer count source select bit */
#define     inv13       invc1_addr.bit.b3   /* Carrier wave detect flag */
#define     inv14       invc1_addr.bit.b4   /* Output polarity control bit */
#define     inv15       invc1_addr.bit.b5   /* Dead time disable bit */
#define     inv16       invc1_addr.bit.b6   /* Dead time timer trigger select bit */
                                            /* (b7) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Three-phase output buffer register 0
------------------------------------------------------*/
union byte_def idb0_addr;
#define     idb0        idb0_addr.byte

#define     du0         idb0_addr.bit.b0    /*  U-phase output buffer 0 */
#define     dub0        idb0_addr.bit.b1    /* ~U-phase output buffer 0 */
#define     dv0         idb0_addr.bit.b2    /*  V-phase output buffer 0 */
#define     dvb0        idb0_addr.bit.b3    /* ~V-phase output buffer 0 */
#define     dw0         idb0_addr.bit.b4    /*  W-phase output buffer 0 */
#define     dwb0        idb0_addr.bit.b5    /* ~W-phase output buffer 0 */
                                            /* (b7-b6) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Three-phase output buffer register 1
------------------------------------------------------*/
union byte_def idb1_addr;
#define     idb1        idb1_addr.byte

#define     du1         idb1_addr.bit.b0    /*  U-phase output buffer 1 */
#define     dub1        idb1_addr.bit.b1    /* ~U-phase output buffer 1 */
#define     dv1         idb1_addr.bit.b2    /*  V-phase output buffer 1 */
#define     dvb1        idb1_addr.bit.b3    /* ~V-phase output buffer 1 */
#define     dw1         idb1_addr.bit.b4    /*  W-phase output buffer 1 */
#define     dwb1        idb1_addr.bit.b5    /* ~W-phase output buffer 1 */
                                            /* (b7-b6) Reserved bit (Set to 0) */


/*------------------------------------------------------
     Dead time timer 
        (1) The MOV instruction should be used to set the DTT register
------------------------------------------------------*/
union byte_def dtt_addr;
#define     dtt     dtt_addr.byte

/*------------------------------------------------------
    Timer B2 interrupt generation frequency set counter 
        (1) The MOV instruction should be used to the ICTB2 register
------------------------------------------------------*/
union byte_def ictb2_addr;
#define     ictb2       ictb2_addr.byte     /* (b3-b0) function */
                                            /* (b7-b4) Nothing is assigned */

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
#define     tazie       onsf_addr.bit.b5    /* Z-phase input enable bit */
#define     ta0tgl      onsf_addr.bit.b6    /* Timer A0 event/trigger select bit */
#define     ta0tgh      onsf_addr.bit.b7    /* Timer A0 event/trigger select bit */

/*------------------------------------------------------
    Clock prescaler reset flag
------------------------------------------------------*/
union byte_def cpsrf_addr;
#define     cpsrf       cpsrf_addr.byte
                                            /* (b6-b0) Nothing is assigned */
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
        (1) The MOV instruction should be used to set the UDF register
------------------------------------------------------*/
union byte_def   udf_addr;               /* Up/down flag */
#define     udf     udf_addr.byte

#define     ta0ud   udf_addr.bit.b0     /* Timer A0 up/down flag */
#define     ta1ud   udf_addr.bit.b1     /* Timer A1 up/down flag */
#define     ta2ud   udf_addr.bit.b2     /* Timer A2 up/down flag */
#define     ta3ud   udf_addr.bit.b3     /* Timer A3 up/down flag */
#define     ta4ud   udf_addr.bit.b4     /* Timer A4 up/down flag */
#define     ta2p    udf_addr.bit.b5     /* Timer A2 2-phase pulse signal processing function select bit */
#define     ta3p    udf_addr.bit.b6     /* Timer A3 2-phase pulse signal processing function select bit */
#define     ta4p    udf_addr.bit.b7     /* Timer A4 2-phase pulse signal processing function select bit */

/*------------------------------------------------------
    UARTi transmit/receive control register 1 (i=0,1,2,3,4)
------------------------------------------------------*/
/*------------------------------------------------------
    u0c1
------------------------------------------------------*/
union byte_def u0c1_addr;
#define     u0c1            u0c1_addr.byte
#define     te_u0c1         u0c1_addr.bit.b0    /* Transmit enable bit */
#define     ti_u0c1         u0c1_addr.bit.b1    /* Transmit buffer empty flag */
#define     re_u0c1         u0c1_addr.bit.b2    /* Receive enable bit */
#define     ri_u0c1         u0c1_addr.bit.b3    /* Receive complete flag */
#define     u0irs_u0c1      u0c1_addr.bit.b4    /* UARTi transmit interrupt cause select bit */
#define     u0rrm_u0c1      u0c1_addr.bit.b5    /* UARTi continuous receive mode enable bit */
#define     u0lch_u0c1      u0c1_addr.bit.b6    /* Data logic select bit */
#define     sclkstpb_u0c1   u0c1_addr.bit.b7    /* Clock divide synchronizing stop bit */
#define     u0ere_u0c1      u0c1_addr.bit.b7    /* Error signal output enable bit */

/*------------------------------------------------------
    u1c1
------------------------------------------------------*/
union byte_def u1c1_addr;
#define     u1c1            u1c1_addr.byte
#define     te_u1c1         u1c1_addr.bit.b0
#define     ti_u1c1         u1c1_addr.bit.b1
#define     re_u1c1         u1c1_addr.bit.b2
#define     ri_u1c1         u1c1_addr.bit.b3
#define     u1irs_u1c1      u1c1_addr.bit.b4
#define     u1rrm_u1c1      u1c1_addr.bit.b5
#define     u1lch_u1c1      u1c1_addr.bit.b6
#define     sclkstpb_u1c1   u1c1_addr.bit.b7
#define     u1ere_u1c1      u1c1_addr.bit.b7

/*------------------------------------------------------
    u2c1
------------------------------------------------------*/
union byte_def u2c1_addr;
#define     u2c1            u2c1_addr.byte
#define     te_u2c1         u2c1_addr.bit.b0
#define     ti_u2c1         u2c1_addr.bit.b1
#define     re_u2c1         u2c1_addr.bit.b2
#define     ri_u2c1         u2c1_addr.bit.b3
#define     u2irs_u2c1      u2c1_addr.bit.b4
#define     u2rrm_u2c1      u2c1_addr.bit.b5
#define     u2lch_u2c1      u2c1_addr.bit.b6
#define     sclkstpb_u2c1   u2c1_addr.bit.b7
#define     u2ere_u2c1      u2c1_addr.bit.b7

/*------------------------------------------------------
    u3c1
------------------------------------------------------*/
union byte_def u3c1_addr;
#define     u3c1            u3c1_addr.byte
#define     te_u3c1         u3c1_addr.bit.b0
#define     ti_u3c1         u3c1_addr.bit.b1
#define     re_u3c1         u3c1_addr.bit.b2
#define     ri_u3c1         u3c1_addr.bit.b3
#define     u3irs_u3c1      u3c1_addr.bit.b4
#define     u3rrm_u3c1      u3c1_addr.bit.b5
#define     u3lch_u3c1      u3c1_addr.bit.b6
#define     sclkstpb_u3c1   u3c1_addr.bit.b7
#define     u3ere_u3c1      u3c1_addr.bit.b7

/*------------------------------------------------------
    u4c1
------------------------------------------------------*/
union byte_def u4c1_addr;
#define     u4c1            u4c1_addr.byte
#define     te_u4c1         u4c1_addr.bit.b0
#define     ti_u4c1         u4c1_addr.bit.b1
#define     re_u4c1         u4c1_addr.bit.b2
#define     ri_u4c1         u4c1_addr.bit.b3
#define     u4irs_u4c1      u4c1_addr.bit.b4
#define     u4rrm_u4c1      u4c1_addr.bit.b5
#define     u4lch_u4c1      u4c1_addr.bit.b6
#define     sclkstpb_u4c1   u4c1_addr.bit.b7
#define     u4ere_u4c1      u4c1_addr.bit.b7

/*------------------------------------------------------
    u5c1
------------------------------------------------------*/
union byte_def u5c1_addr;
#define     u5c1            u5c1_addr.byte
#define     te_u5c1         u5c1_addr.bit.b0
#define     ti_u5c1         u5c1_addr.bit.b1
#define     re_u5c1         u5c1_addr.bit.b2
#define     ri_u5c1         u5c1_addr.bit.b3
                                                 /* (b7-b4) Nothing is assigned */

/*------------------------------------------------------
    u6c1
------------------------------------------------------*/
union byte_def u6c1_addr;
#define     u6c1            u6c1_addr.byte
#define     te_u6c1         u6c1_addr.bit.b0
#define     ti_u6c1         u6c1_addr.bit.b1
#define     re_u6c1         u6c1_addr.bit.b2
#define     ri_u6c1         u6c1_addr.bit.b3
                                                 /* (b7-b4) Nothing is assigned */

/*------------------------------------------------------

------------------------------------------------------*/
union byte_def ircon_addr;
#define     ircon           ircon_addr.byte
#define     irsel           ircon_addr.bit.b0
#define     plssel          ircon_addr.bit.b1
#define     irtpol          ircon_addr.bit.b2
#define     irrpol          ircon_addr.bit.b3
#define     irpd0           ircon_addr.bit.b4
#define     irpd1           ircon_addr.bit.b5
#define     irck            ircon_addr.bit.b6
                                                 /* (b7) Nothing is assigned */

/*------------------------------------------------------

------------------------------------------------------*/
union byte_def u56con_addr;
#define     u56con          u56con_addr.byte
#define     u5irs           u56con_addr.bit.b0
#define     u6irs           u56con_addr.bit.b1
#define     u5rrm           u56con_addr.bit.b2
#define     u6rrm           u56con_addr.bit.b3
                                            /* (b7-b4) Reserved bit (Set to 0) */

/*------------------------------------------------------

------------------------------------------------------*/
union byte_def u56is_addr;
#define     u56is           u56is_addr.byte
#define     u5clk           u56is_addr.bit.b0
#define     u5rxd           u56is_addr.bit.b1
#define     u5cts           u56is_addr.bit.b2
                                                 /* (b3) Nothing is assigned */
#define     u6clk           u56is_addr.bit.b4
#define     u6rxd           u56is_addr.bit.b5
#define     u6cts           u56is_addr.bit.b6
                                                 /* (b7) Nothing is assigned */

/*------------------------------------------------------

------------------------------------------------------*/
union byte_def rtp0r_addr;
#define     rtp0r           rtp0r_addr.byte
#define     rtp00           rtp0r_addr.bit.b0
#define     rtp01           rtp0r_addr.bit.b1
#define     rtp02           rtp0r_addr.bit.b2
                                                 /* (b7-b3) Nothing is assigned */
/*------------------------------------------------------

------------------------------------------------------*/
union byte_def rtp1r_addr;
#define     rtp1r           rtp1r_addr.byte
#define     rtp10           rtp1r_addr.bit.b0
#define     rtp11           rtp1r_addr.bit.b1
#define     rtp12           rtp1r_addr.bit.b2
                                                 /* (b7-b3) Nothing is assigned */
/*------------------------------------------------------

------------------------------------------------------*/
union byte_def rtp2r_addr;
#define     rtp2r           rtp2r_addr.byte
#define     rtp20           rtp2r_addr.bit.b0
#define     rtp21           rtp2r_addr.bit.b1
#define     rtp22           rtp2r_addr.bit.b2
                                                 /* (b7-b3) Nothing is assigned */
/*------------------------------------------------------

------------------------------------------------------*/
union byte_def rtp3r_addr;
#define     rtp3r           rtp3r_addr.byte
#define     rtp30           rtp3r_addr.bit.b0
#define     rtp31           rtp3r_addr.bit.b1
#define     rtp32           rtp3r_addr.bit.b2
                                                 /* (b7-b3) Nothing is assigned */

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

#define     scan0_ad0con1   ad0con1_addr.bit.b0  /* A/D sweep pin select bit */
#define     scan1_ad0con1   ad0con1_addr.bit.b1  /* A/D sweep pin select bit */
#define     md2_ad0con1     ad0con1_addr.bit.b2  /* A/D operation mode select bit 1 */
#define     bits_ad0con1    ad0con1_addr.bit.b3  /* 8/10-bit mode select bit */
#define     cks1_ad0con1    ad0con1_addr.bit.b4  /* Frequency select bit 1 */
#define     vcut_ad0con1    ad0con1_addr.bit.b5  /* Vref connection bit */
#define     opa0_ad0con1    ad0con1_addr.bit.b6  /* External op-amp connection mode bit */
#define     opa1_ad0con1    ad0con1_addr.bit.b7  /* External op-amp connection mode bit */

/*------------------------------------------------------
    A/D0 control register 2
------------------------------------------------------*/
union byte_def ad0con2_addr;
#define     ad0con2      ad0con2_addr.byte

#define     smp_ad0con2     ad0con2_addr.bit.b0  /* A/D conversion method select bit */
#define     aps0_ad0con2    ad0con2_addr.bit.b1  /* Analog input port select bit */
#define     aps1_ad0con2    ad0con2_addr.bit.b2  /* Analog input port select bit */
                                                 /* (b4-b3) Nothing is assigned */
#define     trg0_ad0con2    ad0con2_addr.bit.b5  /* External trigger request cause select bit */
                                                 /* (b7-b6) Reserved bit (Set to 0) */

/*------------------------------------------------------
    A/D0 Control Register 3
------------------------------------------------------*/
union byte_def ad0con3_addr;
#define     ad0con3      ad0con3_addr.byte

#define     dus_ad0con3     ad0con3_addr.bit.b0  /* DMAC operation select bit */
#define     mss_ad0con3     ad0con3_addr.bit.b1  /* Multi-port sweep mode select bit */
#define     cks2_ad0con3    ad0con3_addr.bit.b2  /* Frequency select bit */
#define     msf0_ad0con3    ad0con3_addr.bit.b3  /* Multi-port sweep status flag */
#define     msf1_ad0con3    ad0con3_addr.bit.b4  /* Multi-port sweep status flag */
                                                 /* (b7-b5):Reserved bit (Set to 0) */

/*------------------------------------------------------
    A/D0 Control Register 4
------------------------------------------------------*/
union byte_def ad0con4_addr;
#define     ad0con4      ad0con4_addr.byte
                                                /* (b1-b0) Reserved bit (Set to 0) */
#define     mps10_ad0con4   ad0con4_addr.bit.b2 /* Multi-port sweep port select bit */
#define     mps11_ad0con4   ad0con4_addr.bit.b3 /* Multi-port sweep port select bit */
                                                /* (b7-b4) Reserved bit (Set to 0) */

/*------------------------------------------------------
    D/A control register
------------------------------------------------------*/
union byte_def dacon_addr;
#define     dacon       dacon_addr.byte

#define     da0e        dacon_addr.bit.b0   /* D/A0 output enable bit */
#define     da1e        dacon_addr.bit.b1   /* D/A1 output enable bit */
                                            /* (b7-b2) Nothing is assigned */

/*------------------------------------------------------
    D/A control register 1
------------------------------------------------------*/
union byte_def dacon1_addr;
#define     dacon1      dacon1_addr.byte

#define     dat00       dacon1_addr.bit.b0
#define     dat01       dacon1_addr.bit.b1
#define     dat10       dacon1_addr.bit.b2
#define     dat11       dacon1_addr.bit.b3
                                            /* (b7-b4) Nothing is assigned */

/*------------------------------------------------------
    SI/O Communication Mode Register 0
------------------------------------------------------*/
union byte_def g0mr_addr;
#define     g0mr    g0mr_addr.byte

#define     gmd0_g0mr   g0mr_addr.bit.b0    /* (b1-b0) Communication mode select bit */
#define     gmd1_g0mr   g0mr_addr.bit.b1
#define     ckdir_g0mr  g0mr_addr.bit.b2    /* Internal/external clock select bit */
                                            /* (b5-b3) Reserved bit (Set to 0) */
#define     uform_g0mr  g0mr_addr.bit.b6    /* Transfer direction select bit */
#define     irs_g0mr    g0mr_addr.bit.b7    /* Transmit interrupt cause select bit */

/*------------------------------------------------------
    SI/O Communication Control Register 0
------------------------------------------------------*/
union byte_def g0cr_addr;
#define     g0cr    g0cr_addr.byte

#define     ti_g0cr     g0cr_addr.bit.b0    /* Transmit buffer empty flag */
#define     txept_g0cr  g0cr_addr.bit.b1    /* Transmit register empty flag */
#define     ri_g0cr     g0cr_addr.bit.b2    /* Receive complete flag */
                                            /* (b3) Nothing is assigned */
#define     te_g0cr     g0cr_addr.bit.b4    /* Transmit enable bit */
#define     re_g0cr     g0cr_addr.bit.b5    /* Receive enable bit */
                                            /* (b7-b6) Reserved bit (Set to 0) */

/*------------------------------------------------------
    SI/O Expansion Mode Register 0
------------------------------------------------------*/
union byte_def g0emr_addr;
#define     g0emr       g0emr_addr.byte
                                                /* (b0) Reserved bit (Set to 0) */
#define     crcv_g0emr      g0emr_addr.bit.b1   /* CRC default value select bit */
#define     acrc_g0emr      g0emr_addr.bit.b2   /* CRC reset select bit */
#define     bsint_g0emr     g0emr_addr.bit.b3   /* Bit stuffing error interrupt select bit */
#define     rxsl_g0emr      g0emr_addr.bit.b4   /* Receive source switch bit */
#define     txsl_g0emr      g0emr_addr.bit.b5   /* Transmit source switch bit */
#define     crc0_g0emr      g0emr_addr.bit.b6   /* CRC generation polynomial select bit */
#define     crc1_g0emr      g0emr_addr.bit.b7   /* CRC generation polynomial select bit */

/*------------------------------------------------------
    SI/O Expansion Transmit Control Register 0
------------------------------------------------------*/
union byte_def g0etc_addr;
#define     g0etc       g0etc_addr.byte
                                                /* (b2-b0) Reserved bit (Set to 0) */
                                                /* (b3) Reserved bit (Set to 0) */
#define     tcrce_g0etc     g0etc_addr.bit.b4   /* Transmit CRC enable bit */
                                                /* (b5) Reserved bit (Set to 0) */
#define     tbsf0_g0etc     g0etc_addr.bit.b6   /* Transmit bit stuffing "1" insert select bit */
#define     tbsf1_g0etc     g0etc_addr.bit.b7   /* Transmit bit stuffing "0" insert select bit */

/*------------------------------------------------------
    SI/O Expansion Receive Control Register 0
------------------------------------------------------*/
union byte_def g0erc_addr;
#define     g0erc       g0erc_addr.byte
#define     cmp0e_g0erc     g0erc_addr.bit.b0   /* Data compare function 0 select bit */
#define     cmp1e_g0erc     g0erc_addr.bit.b1   /* Data compare function 1 select bit */
#define     cmp2e_g0erc     g0erc_addr.bit.b2   /* Data compare function 2 select bit */
#define     cmp3e_g0erc     g0erc_addr.bit.b3   /* Data compare function 3 select bit */
#define     rcrce_g0erc     g0erc_addr.bit.b4   /* Receive CRC enable bit */
#define     rshte_g0erc     g0erc_addr.bit.b5   /* Receive shift operation enable bit */
#define     rbsf0_g0erc     g0erc_addr.bit.b6   /* Receive bit stuffing "1" delete select bit */
#define     rbsf1_g0erc     g0erc_addr.bit.b7   /* Receive bit stuffing "0" delete select bit */

/*------------------------------------------------------
    SI/O Special Communication Interrupt Detect Register 0
------------------------------------------------------*/
union byte_def g0irf_addr;
#define     g0irf       g0irf_addr.byte
                                                /* (b1-b0) Reserved bit (Set to 0) */
#define     bserr_g0irf     g0irf_addr.bit.b2   /* Bit stuffing error detect flag */
                                                /* (b3) Reserved bit (Set to 0) */
#define     irf0_g0irf      g0irf_addr.bit.b4   /* Interrupt cause determination flag 0 */
#define     irf1_g0irf      g0irf_addr.bit.b5   /* Interrupt cause determination flag 1 */
#define     irf2_g0irf      g0irf_addr.bit.b6   /* Interrupt cause determination flag 2 */
#define     irf3_g0irf      g0irf_addr.bit.b7   /* Interrupt cause determination flag 3 */

/*------------------------------------------------------
    Receive Data Register 0
------------------------------------------------------*/
union byte_def g0dr_addr;
#define     g0dr       g0dr_addr.byte

/*------------------------------------------------------
    Transmit Buffer Register 0
------------------------------------------------------*/
union byte_def g0tb_addr;
#define     g0tb       g0tb_addr.byte

/*------------------------------------------------------
    Data Compare Register 00
------------------------------------------------------*/
union byte_def g0cmp0_addr;
#define     g0cmp0       g0cmp0_addr.byte

/*------------------------------------------------------
    Data Compare Register 01
------------------------------------------------------*/
union byte_def g0cmp1_addr;
#define     g0cmp1       g0cmp1_addr.byte

/*------------------------------------------------------
    Data Compare Register 02
------------------------------------------------------*/
union byte_def g0cmp2_addr;
#define     g0cmp2       g0cmp2_addr.byte

/*------------------------------------------------------
    Data Compare Register 03
------------------------------------------------------*/
union byte_def g0cmp3_addr;
#define     g0cmp3       g0cmp3_addr.byte

/*------------------------------------------------------
    Data Mask Register 00
------------------------------------------------------*/
union byte_def g0msk0_addr;
#define     g0msk0       g0msk0_addr.byte

/*------------------------------------------------------
    Data Mask Register 01
------------------------------------------------------*/
union byte_def g0msk1_addr;
#define     g0msk1       g0msk1_addr.byte

/*------------------------------------------------------
    Communication Clock Select Register
------------------------------------------------------*/
union byte_def ccs_addr;
#define     ccs       ccs_addr.byte

#define     ccs0      ccs_addr.bit.b0   /* Communication unit 0 clock select bit */
#define     ccs1      ccs_addr.bit.b1   /* Communication unit 0 clock select bit */
#define     ccs2      ccs_addr.bit.b2   /* Communication unit 1 clock select bit */
#define     ccs3      ccs_addr.bit.b3   /* Communication unit 1 clock select bit */
                                        /* (b7-b4) Nothing is assigned */

/*------------------------------------------------------
    Transmit Output Register 0
------------------------------------------------------*/
union byte_def g0to_addr;
#define     g0to       g0to_addr.byte

/*------------------------------------------------------
    Receive Input Register 0
------------------------------------------------------*/
union byte_def g0ri_addr;
#define     g0ri       g0ri_addr.byte

/*------------------------------------------------------
    Base Timer Control Register 10
------------------------------------------------------*/
union byte_def g1bcr0_addr;
#define     g1bcr0       g1bcr0_addr.byte
#define     bck0_g1bcr0        g1bcr0_addr.bit.b0   /* (b1-b0) Count source select bit */
#define     bck1_g1bcr0        g1bcr0_addr.bit.b1
#define     div0_g1bcr0        g1bcr0_addr.bit.b2   /* (b6-b2) Count source division ratio select bit */
#define     div1_g1bcr0        g1bcr0_addr.bit.b3
#define     div2_g1bcr0        g1bcr0_addr.bit.b4
#define     div3_g1bcr0        g1bcr0_addr.bit.b5
#define     div4_g1bcr0        g1bcr0_addr.bit.b6
#define     it_g1bcr0          g1bcr0_addr.bit.b7   /* Base timer interrupt select bit */

/*------------------------------------------------------
    Base Timer Control Register 11
------------------------------------------------------*/
union byte_def g1bcr1_addr;
#define     g1bcr1       g1bcr1_addr.byte
                                                    /* (b0) Nothing is assigned */
#define     rst1_g1bcr1        g1bcr1_addr.bit.b1   /* Base timer reset cause select bit 1 */
#define     rst2_g1bcr1        g1bcr1_addr.bit.b2   /* Base timer reset cause select bit 2 */
                                                    /* (b3) Reserved bit (Set to 0) */
#define     bts_g1bcr1         g1bcr1_addr.bit.b4   /* Base timer start bit */
#define     ud0_g1bcr1         g1bcr1_addr.bit.b5   /* (b6-b5) Counter increment/decrement control bit */
#define     ud1_g1bcr1         g1bcr1_addr.bit.b6
                                                    /* (b7) Nothing is assigned */

/*------------------------------------------------------
    Time Measurement Control Register 10
------------------------------------------------------*/
union byte_def g1tmcr0_addr;
#define     g1tmcr0       g1tmcr0_addr.byte
#define     cts0_g1tmcr0      g1tmcr0_addr.bit.b0   /* (b1b0) Time measurement trigger select bit */
#define     cts1_g1tmcr0      g1tmcr0_addr.bit.b1
#define     df0_g1tmcr0       g1tmcr0_addr.bit.b2   /* (b3b2) Digital filter function select bit */
#define     df1_g1tmcr0       g1tmcr0_addr.bit.b3
#define     gt_g1tmcr0        g1tmcr0_addr.bit.b4   /* Gate function select bit */
#define     goc_g1tmcr0       g1tmcr0_addr.bit.b5   /* Gate function clear select bit */
#define     gsc_g1tmcr0       g1tmcr0_addr.bit.b6   /* Gate function clear bit */
#define     pr_g1tmcr0        g1tmcr0_addr.bit.b7   /* Prescaler function select bit */

/*------------------------------------------------------
    Time Measurement Control Register 11
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
    Time Measurement Control Register 12
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
    Time Measurement Control Register 13
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
    Time Measurement Control Register 14
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
    Time Measurement Control Register 15
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
    Time Measurement Control Register 16
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
    Time Measurement Control Register 17
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
    Time Measurement Prescaler Register 16
------------------------------------------------------*/
union byte_def g1tpr6_addr;
#define     g1tpr6       g1tpr6_addr.byte

/*------------------------------------------------------
    Time Measurement Prescaler Register 17
------------------------------------------------------*/
union byte_def g1tpr7_addr;
#define     g1tpr7       g1tpr7_addr.byte

/*------------------------------------------------------
    Waveform Generation Control Register 10
------------------------------------------------------*/
union byte_def g1pocr0_addr;
#define     g1pocr0       g1pocr0_addr.byte
#define     mod0_g1pocr0        g1pocr0_addr.bit.b0     /* (b2-b0) Operation mode select bit */
#define     mod1_g1pocr0        g1pocr0_addr.bit.b1
#define     mod2_g1pocr0        g1pocr0_addr.bit.b2
                                                        /* (b3) Nothing is assigned */
#define     ivl_g1pocr0         g1pocr0_addr.bit.b4     /* Output initial value select bit */
#define     rld_g1pocr0         g1pocr0_addr.bit.b5     /* G1POj register value reload timing select bit */
#define     btre_g1pocr0        g1pocr0_addr.bit.b6     /* Base timer reset enable bit */
#define     inv_g1pocr0         g1pocr0_addr.bit.b7     /* Inverse output function select bit */

/*------------------------------------------------------
     Waveform Generation Control Register 11
------------------------------------------------------*/
union byte_def g1pocr1_addr;
#define     g1pocr1       g1pocr1_addr.byte
#define     mod0_g1pocr1        g1pocr1_addr.bit.b0
#define     mod1_g1pocr1        g1pocr1_addr.bit.b1
#define     mod2_g1pocr1        g1pocr1_addr.bit.b2

#define     ivl_g1pocr1         g1pocr1_addr.bit.b4
#define     rld_g1pocr1         g1pocr1_addr.bit.b5
#define     btre_g1pocr1        g1pocr1_addr.bit.b6
#define     inv_g1pocr1         g1pocr1_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 12
------------------------------------------------------*/
union byte_def g1pocr2_addr;
#define     g1pocr2       g1pocr2_addr.byte
#define     mod0_g1pocr2        g1pocr2_addr.bit.b0
#define     mod1_g1pocr2        g1pocr2_addr.bit.b1
#define     mod2_g1pocr2        g1pocr2_addr.bit.b2

#define     ivl_g1pocr2         g1pocr2_addr.bit.b4
#define     rld_g1pocr2         g1pocr2_addr.bit.b5
#define     btre_g1pocr2        g1pocr2_addr.bit.b6
#define     inv_g1pocr2         g1pocr2_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 13
------------------------------------------------------*/
union byte_def g1pocr3_addr;
#define     g1pocr3       g1pocr3_addr.byte
#define     mod0_g1pocr3        g1pocr3_addr.bit.b0
#define     mod1_g1pocr3        g1pocr3_addr.bit.b1
#define     mod2_g1pocr3        g1pocr3_addr.bit.b2

#define     ivl_g1pocr3         g1pocr3_addr.bit.b4
#define     rld_g1pocr3         g1pocr3_addr.bit.b5
#define     btre_g1pocr3        g1pocr3_addr.bit.b6
#define     inv_g1pocr3         g1pocr3_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 14
------------------------------------------------------*/
union byte_def g1pocr4_addr;
#define     g1pocr4       g1pocr4_addr.byte
#define     mod0_g1pocr4        g1pocr4_addr.bit.b0
#define     mod1_g1pocr4        g1pocr4_addr.bit.b1
#define     mod2_g1pocr4        g1pocr4_addr.bit.b2

#define     ivl_g1pocr4         g1pocr4_addr.bit.b4
#define     rld_g1pocr4         g1pocr4_addr.bit.b5
#define     btre_g1pocr4        g1pocr4_addr.bit.b6
#define     inv_g1pocr4         g1pocr4_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 15
------------------------------------------------------*/
union byte_def g1pocr5_addr;
#define     g1pocr5       g1pocr5_addr.byte
#define     mod0_g1pocr5        g1pocr5_addr.bit.b0
#define     mod1_g1pocr5        g1pocr5_addr.bit.b1
#define     mod2_g1pocr5        g1pocr5_addr.bit.b2

#define     ivl_g1pocr5         g1pocr5_addr.bit.b4
#define     rld_g1pocr5         g1pocr5_addr.bit.b5
#define     btre_g1pocr5        g1pocr5_addr.bit.b6
#define     inv_g1pocr5         g1pocr5_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 16
------------------------------------------------------*/
union byte_def g1pocr6_addr;
#define     g1pocr6       g1pocr6_addr.byte
#define     mod0_g1pocr6        g1pocr6_addr.bit.b0
#define     mod1_g1pocr6        g1pocr6_addr.bit.b1
#define     mod2_g1pocr6        g1pocr6_addr.bit.b2

#define     ivl_g1pocr6         g1pocr6_addr.bit.b4
#define     rld_g1pocr6         g1pocr6_addr.bit.b5
#define     btre_g1pocr6        g1pocr6_addr.bit.b6
#define     inv_g1pocr6         g1pocr6_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 17
------------------------------------------------------*/
union byte_def g1pocr7_addr;
#define     g1pocr7       g1pocr7_addr.byte
#define     mod0_g1pocr7        g1pocr7_addr.bit.b0
#define     mod1_g1pocr7        g1pocr7_addr.bit.b1
#define     mod2_g1pocr7        g1pocr7_addr.bit.b2

#define     ivl_g1pocr7         g1pocr7_addr.bit.b4
#define     rld_g1pocr7         g1pocr7_addr.bit.b5
#define     btre_g1pocr7        g1pocr7_addr.bit.b6
#define     inv_g1pocr7         g1pocr7_addr.bit.b7

/*------------------------------------------------------
    Waveform Generation Control Register 20
------------------------------------------------------*/
union byte_def g2pocr0_addr;
#define     g2pocr0       g2pocr0_addr.byte
#define     mod0_g2pocr0        g2pocr0_addr.bit.b0     /* (b2-b0) Operation mode select bit */
#define     mod1_g2pocr0        g2pocr0_addr.bit.b1
#define     mod2_g2pocr0        g2pocr0_addr.bit.b2
                                                        /* (b3) Nothing is assigned */
#define     ivl_g2pocr0         g2pocr0_addr.bit.b4     /* Output initial value select bit */
#define     rld_g2pocr0         g2pocr0_addr.bit.b5     /* G2POj register value reload timing select bit */
#define     btre_g2pocr0        g2pocr0_addr.bit.b6     /* Base timer reset enable bit */
#define     inv_g2pocr0         g2pocr0_addr.bit.b7     /* Inverse output function select bit */

/*------------------------------------------------------
     Waveform Generation Control Register 21
------------------------------------------------------*/
union byte_def g2pocr1_addr;
#define     g2pocr1       g2pocr1_addr.byte
#define     mod0_g2pocr1        g2pocr1_addr.bit.b0
#define     mod1_g2pocr1        g2pocr1_addr.bit.b1
#define     mod2_g2pocr1        g2pocr1_addr.bit.b2

#define     ivl_g2pocr1         g2pocr1_addr.bit.b4
#define     rld_g2pocr1         g2pocr1_addr.bit.b5
#define     btre_g2pocr1        g2pocr1_addr.bit.b6
#define     inv_g2pocr1         g2pocr1_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 22
------------------------------------------------------*/
union byte_def g2pocr2_addr;
#define     g2pocr2       g2pocr2_addr.byte
#define     mod0_g2pocr2        g2pocr2_addr.bit.b0
#define     mod1_g2pocr2        g2pocr2_addr.bit.b1
#define     mod2_g2pocr2        g2pocr2_addr.bit.b2

#define     ivl_g2pocr2         g2pocr2_addr.bit.b4
#define     rld_g2pocr2         g2pocr2_addr.bit.b5
#define     btre_g2pocr2        g2pocr2_addr.bit.b6
#define     inv_g2pocr2         g2pocr2_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 23
------------------------------------------------------*/
union byte_def g2pocr3_addr;
#define     g2pocr3       g2pocr3_addr.byte
#define     mod0_g2pocr3        g2pocr3_addr.bit.b0
#define     mod1_g2pocr3        g2pocr3_addr.bit.b1
#define     mod2_g2pocr3        g2pocr3_addr.bit.b2

#define     ivl_g2pocr3         g2pocr3_addr.bit.b4
#define     rld_g2pocr3         g2pocr3_addr.bit.b5
#define     btre_g2pocr3        g2pocr3_addr.bit.b6
#define     inv_g2pocr3         g2pocr3_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 24
------------------------------------------------------*/
union byte_def g2pocr4_addr;
#define     g2pocr4       g2pocr4_addr.byte
#define     mod0_g2pocr4        g2pocr4_addr.bit.b0
#define     mod1_g2pocr4        g2pocr4_addr.bit.b1
#define     mod2_g2pocr4        g2pocr4_addr.bit.b2

#define     ivl_g2pocr4         g2pocr4_addr.bit.b4
#define     rld_g2pocr4         g2pocr4_addr.bit.b5
#define     btre_g2pocr4        g2pocr4_addr.bit.b6
#define     inv_g2pocr4         g2pocr4_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 25
------------------------------------------------------*/
union byte_def g2pocr5_addr;
#define     g2pocr5       g2pocr5_addr.byte
#define     mod0_g2pocr5        g2pocr5_addr.bit.b0
#define     mod1_g2pocr5        g2pocr5_addr.bit.b1
#define     mod2_g2pocr5        g2pocr5_addr.bit.b2

#define     ivl_g2pocr5         g2pocr5_addr.bit.b4
#define     rld_g2pocr5         g2pocr5_addr.bit.b5
#define     btre_g2pocr5        g2pocr5_addr.bit.b6
#define     inv_g2pocr5         g2pocr5_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 26
------------------------------------------------------*/
union byte_def g2pocr6_addr;
#define     g2pocr6       g2pocr6_addr.byte
#define     mod0_g2pocr6        g2pocr6_addr.bit.b0
#define     mod1_g2pocr6        g2pocr6_addr.bit.b1
#define     mod2_g2pocr6        g2pocr6_addr.bit.b2

#define     ivl_g2pocr6         g2pocr6_addr.bit.b4
#define     rld_g2pocr6         g2pocr6_addr.bit.b5
#define     btre_g2pocr6        g2pocr6_addr.bit.b6
#define     inv_g2pocr6         g2pocr6_addr.bit.b7

/*------------------------------------------------------
     Waveform Generation Control Register 27
------------------------------------------------------*/
union byte_def g2pocr7_addr;
#define     g2pocr7       g2pocr7_addr.byte
#define     mod0_g2pocr7        g2pocr7_addr.bit.b0
#define     mod1_g2pocr7        g2pocr7_addr.bit.b1
#define     mod2_g2pocr7        g2pocr7_addr.bit.b2

#define     ivl_g2pocr7         g2pocr7_addr.bit.b4
#define     rld_g2pocr7         g2pocr7_addr.bit.b5
#define     btre_g2pocr7        g2pocr7_addr.bit.b6
#define     inv_g2pocr7         g2pocr7_addr.bit.b7

/*------------------------------------------------------
    Base Timer Control Register 20
------------------------------------------------------*/
union byte_def g2bcr0_addr;
#define     g2bcr0       g2bcr0_addr.byte
#define     bck0_g2bcr0        g2bcr0_addr.bit.b0   /* (b1-b0) Count source select bit */
#define     bck1_g2bcr0        g2bcr0_addr.bit.b1
#define     div0_g2bcr0        g2bcr0_addr.bit.b2   /* (b6-b2) Count source division ratio select bit */
#define     div1_g2bcr0        g2bcr0_addr.bit.b3
#define     div2_g2bcr0        g2bcr0_addr.bit.b4
#define     div3_g2bcr0        g2bcr0_addr.bit.b5
#define     div4_g2bcr0        g2bcr0_addr.bit.b6
#define     it_g2bcr0          g2bcr0_addr.bit.b7   /* Base timer interrupt select bit */

/*------------------------------------------------------
    Base Timer Control Register 21
------------------------------------------------------*/
union byte_def g2bcr1_addr;
#define     g2bcr1       g2bcr1_addr.byte
                                                    /* (b0) Nothing is assigned */
#define     rst1_g2bcr1        g2bcr1_addr.bit.b1   /* Base timer reset cause select bit 1 */
#define     rst2_g2bcr1        g2bcr1_addr.bit.b2   /* Base timer reset cause select bit 2 */
                                                    /* (b3) Reserved bit (Set to 0) */
#define     bts_g2bcr1         g2bcr1_addr.bit.b4   /* Base timer start bit */
#define     ud0_g2bcr1         g2bcr1_addr.bit.b5   /* (b6-b5) Counter increment/decrement control bit */
#define     ud1_g2bcr1         g2bcr1_addr.bit.b6
                                                    /* (b7) Nothing is assigned */

/*------------------------------------------------------
    Base Timer Start Register
------------------------------------------------------*/
union byte_def btsr_addr;
#define     btsr         btsr_addr.byte
                                                    /* (b0) Reserved bit (Set to 0) */
#define     bt1s               btsr_addr.bit.b1
#define     bt2s               btsr_addr.bit.b2
                                                    /* (b3) Reserved bit (Set to 0) */
                                                    /* (b7-b4) Nothing is assigned */
/*------------------------------------------------------

------------------------------------------------------*/
union byte_def iecr_addr;
#define     iecr         iecr_addr.byte

#define     ieb                iecr_addr.bit.b0
#define     iets               iecr_addr.bit.b1
#define     iebbs              iecr_addr.bit.b2
                                                    /* (b5-b3) Nothing is assigned */
#define     df                 iecr_addr.bit.b6
#define     iem                iecr_addr.bit.b7

/*------------------------------------------------------

------------------------------------------------------*/
union byte_def ietif_addr;
#define     ietif        ietif_addr.byte

#define     ietnf_ietif        ietif_addr.bit.b0
#define     ieack_ietif        ietif_addr.bit.b1
#define     ietmb_ietif        ietif_addr.bit.b2
#define     iett_ietif         ietif_addr.bit.b3
#define     ieabl_ietif        ietif_addr.bit.b4
                                                    /* (b7-b5) Nothing is assigned */

/*------------------------------------------------------

------------------------------------------------------*/
union byte_def ierif_addr;
#define     ierif        ierif_addr.byte

#define     ietnf_ierif        ierif_addr.bit.b0
#define     iepcr_ierif        ierif_addr.bit.b1
#define     iermb_ierif        ierif_addr.bit.b2
#define     iert_ierif         ierif_addr.bit.b3
#define     ieretc_ierif       ierif_addr.bit.b4
                                                    /* (b7-b5) Nothing is assigned */

/*------------------------------------------------------
    SI/O Communication Mode Register 2
------------------------------------------------------*/
union byte_def g2mr_addr;
#define     g2mr       g2mr_addr.byte
#define     gmd0_g2mr    g2mr_addr.bit.b0   /* (b1-b0) Communication mode select bit */
#define     gmd1_g2mr    g2mr_addr.bit.b1
#define     ckdir_g2mr   g2mr_addr.bit.b2   /* Internal/external clock select bit */
                                                    /* (b5-b3) Nothing is assigned */
#define     uform_g2mr   g2mr_addr.bit.b6   /* Transfer direction select bit */
#define     irs_g2mr     g2mr_addr.bit.b7   /* Transmit interrupt cause select bit */

/*------------------------------------------------------
    SI/O Communication Control Register 2
------------------------------------------------------*/
union byte_def g2cr_addr;
#define     g2cr       g2cr_addr.byte
#define     te_g2cr             g2cr_addr.bit.b0    /* Transmit enable bit */
#define     txept_g2cr          g2cr_addr.bit.b1    /* Transmit register empty flag */
#define     ti_g2cr             g2cr_addr.bit.b2    /* Transmit buffer empty flag */
                                                    /* (b3) Nothing is assigned */
#define     re_g2cr             g2cr_addr.bit.b4    /* Receive enable bit */
#define     ri_g2cr             g2cr_addr.bit.b5    /* Receive complete flag */
#define     opol_g2cr           g2cr_addr.bit.b6    /* ISRxD input polarity switch bit */
#define     ipol_g2cr           g2cr_addr.bit.b7    /* ISTxD output polarity switch bit */

/*------------------------------------------------------
    Function Enable Register 2
------------------------------------------------------*/
union byte_def g2fe_addr;
#define     g2fe       g2fe_addr.byte
#define     ife0_g2fe    g2fe_addr.bit.b0   /* Channel 0 function enable bit */
#define     ife1_g2fe    g2fe_addr.bit.b1   /* Channel 1 function enable bit */
#define     ife2_g2fe    g2fe_addr.bit.b2   /* Channel 2 function enable bit */
#define     ife3_g2fe    g2fe_addr.bit.b3   /* Channel 3 function enable bit */
#define     ife4_g2fe    g2fe_addr.bit.b4   /* Channel 4 function enable bit */
#define     ife5_g2fe    g2fe_addr.bit.b5   /* Channel 5 function enable bit */
#define     ife6_g2fe    g2fe_addr.bit.b6   /* Channel 6 function enable bit */
#define     ife7_g2fe    g2fe_addr.bit.b7   /* Channel 7 function enable bit */

/*------------------------------------------------------

------------------------------------------------------*/
union byte_def g2rtp_addr;
#define     g2rtp      g2rtp_addr.byte
#define     rtp0_g2rtp   g2rtp_addr.bit.b0
#define     rtp1_g2rtp   g2rtp_addr.bit.b1
#define     rtp2_g2rtp   g2rtp_addr.bit.b2
#define     rtp3_g2rtp   g2rtp_addr.bit.b3
#define     rtp4_g2rtp   g2rtp_addr.bit.b4
#define     rtp5_g2rtp   g2rtp_addr.bit.b5
#define     rtp6_g2rtp   g2rtp_addr.bit.b6
#define     rtp7_g2rtp   g2rtp_addr.bit.b7

/*------------------------------------------------------
    Function Select Register 1
------------------------------------------------------*/
union byte_def g1fs_addr;
#define     g1fs       g1fs_addr.byte
#define     fsc0_g1fs    g1fs_addr.bit.b0   /* Channel 0 time measurement/waveform generation function select bit */
#define     fsc1_g1fs    g1fs_addr.bit.b1   /* Channel 1 time measurement/waveform generation function select bit */
#define     fsc2_g1fs    g1fs_addr.bit.b2   /* Channel 2 time measurement/waveform generation function select bit */
#define     fsc3_g1fs    g1fs_addr.bit.b3   /* Channel 3 time measurement/waveform generation function select bit */
#define     fsc4_g1fs    g1fs_addr.bit.b4   /* Channel 4 time measurement/waveform generation function select bit */
#define     fsc5_g1fs    g1fs_addr.bit.b5   /* Channel 5 time measurement/waveform generation function select bit */
#define     fsc6_g1fs    g1fs_addr.bit.b6   /* Channel 6 time measurement/waveform generation function select bit */
#define     fsc7_g1fs    g1fs_addr.bit.b7   /* Channel 7 time measurement/waveform generation function select bit */

/*------------------------------------------------------
    Function Enable Register 1
------------------------------------------------------*/
union byte_def g1fe_addr;
#define     g1fe       g1fe_addr.byte
#define     ife0_g1fe    g1fe_addr.bit.b0   /* Channel 0 function enable bit */
#define     ife1_g1fe    g1fe_addr.bit.b1   /* Channel 1 function enable bit */
#define     ife2_g1fe    g1fe_addr.bit.b2   /* Channel 2 function enable bit */
#define     ife3_g1fe    g1fe_addr.bit.b3   /* Channel 3 function enable bit */
#define     ife4_g1fe    g1fe_addr.bit.b4   /* Channel 4 function enable bit */
#define     ife5_g1fe    g1fe_addr.bit.b5   /* Channel 5 function enable bit */
#define     ife6_g1fe    g1fe_addr.bit.b6   /* Channel 6 function enable bit */
#define     ife7_g1fe    g1fe_addr.bit.b7   /* Channel 7 function enable bit */

/*------------------------------------------------------
    SI/O Communication Mode Register 1
------------------------------------------------------*/
union byte_def g1mr_addr;
#define     g1mr       g1mr_addr.byte
#define     gmd0_g1mr    g1mr_addr.bit.b0   /* (b1-b0) Communication mode select bit */
#define     gmd1_g1mr    g1mr_addr.bit.b1
#define     ckdir_g1mr   g1mr_addr.bit.b2   /* Internal/external clock select bit */
#define     stps_g1mr    g1mr_addr.bit.b3   /* Stop bit length select bit */
#define     pry_g1mr     g1mr_addr.bit.b4   /* Odd/Even parity select bit */
#define     prye_g1mr    g1mr_addr.bit.b5   /* Parity enable bit */
#define     uform_g1mr   g1mr_addr.bit.b6   /* Transfer direction select bit */
#define     irs_g1mr     g1mr_addr.bit.b7   /* Transmit interrupt cause select bit */

/*------------------------------------------------------
    SI/O Communication Control Register 1
------------------------------------------------------*/
union byte_def g1cr_addr;
#define     g1cr       g1cr_addr.byte
#define     ti_g1cr             g1cr_addr.bit.b0    /* Transmit buffer empty flag */
#define     txept_g1cr          g1cr_addr.bit.b1    /* Transmit register empty flag */
#define     ri_g1cr             g1cr_addr.bit.b2    /* Receive complete flag */
                                                    /* (b3) Nothing is assigned */
#define     te_g1cr             g1cr_addr.bit.b4    /* Transmit enable bit */
#define     re_g1cr             g1cr_addr.bit.b5    /* Receive enable bit */
#define     ipol_g1cr           g1cr_addr.bit.b6    /* ISRxD input polarity switch bit */
#define     opol_g1cr           g1cr_addr.bit.b7    /* ISTxD output polarity switch bit */

/*------------------------------------------------------
    SI/O Expansion Mode Register 1
------------------------------------------------------*/
union byte_def g1emr_addr;
#define     g1emr       g1emr_addr.byte
#define     smode_g1emr         g1emr_addr.bit.b0   /* Synchronouse mode select bit */
#define     crcv_g1emr          g1emr_addr.bit.b1   /* CRC initial value select bit */
#define     acrc_g1emr          g1emr_addr.bit.b2   /* CRC initialization select bit */
#define     bsint_g1emr         g1emr_addr.bit.b3   /* Bit stuffing error interrupt select bit */
#define     rxsl_g1emr          g1emr_addr.bit.b4   /* Receive source switch bit */
#define     txsl_g1emr          g1emr_addr.bit.b5   /* Transmit source switch bit */
#define     crc0_g1emr          g1emr_addr.bit.b6   /* CRC generation polynomial select bit */
#define     crc1_g1emr          g1emr_addr.bit.b7   /* CRC generation polynomial select bit */

/*------------------------------------------------------
    SI/O Expansion Transmit Control Register 1
------------------------------------------------------*/
union byte_def g1etc_addr;
#define     g1etc       g1etc_addr.byte
                                                    /* (b2-b0) Reserved bit (Set to 0) */
#define     sof_g1etc         g1etc_addr.bit.b3     /* SOF transmit request bit */
#define     tcrce_g1etc       g1etc_addr.bit.b4     /* Transmit CRC enable bit */
#define     abte_g1etc        g1etc_addr.bit.b5     /* Arbitration enable bit */
#define     tbsf0_g1etc       g1etc_addr.bit.b6     /* Transmit bit stuffing "1" insert select bit */
#define     tbsf1_g1etc       g1etc_addr.bit.b7     /* Transmit bit stuffing "0" insert select bit */

/*------------------------------------------------------
    SI/O Expansion Receive Control Register 1
------------------------------------------------------*/
union byte_def g1erc_addr;
#define     g1erc       g1erc_addr.byte
#define     cmp0e_g1erc       g1erc_addr.bit.b0     /* Data compare function 0 select bit */
#define     cmp1e_g1erc       g1erc_addr.bit.b1     /* Data compare function 1 select bit */
#define     cmp2e_g1erc       g1erc_addr.bit.b2     /* Data compare function 2 select bit */
#define     cmp3e_g1erc       g1erc_addr.bit.b3     /* Data compare function 3 select bit */
#define     rcrce_g1erc       g1erc_addr.bit.b4     /* Receive CRC enable bit */
#define     rshte_g1erc       g1erc_addr.bit.b5     /* Receive shift operation enable bit */
#define     rbsf0_g1erc       g1erc_addr.bit.b6     /* Receive bit stuffing "1" delete select bit */
#define     rbsf1_g1erc       g1erc_addr.bit.b7     /* Receive bit stuffing "0" delete select bit */

/*------------------------------------------------------
    SI/O Special Communication Interrupt Detect Register 1
------------------------------------------------------*/
union byte_def g1irf_addr;
#define     g1irf       g1irf_addr.byte
                                                    /* (b1-b0) Reserved bit (Set to 0) */
#define     bserr_g1irf       g1irf_addr.bit.b2     /* Bit stuffing error detect flag */
#define     abt_g1irf         g1irf_addr.bit.b3     /* Arbitration lost detect flag */
#define     irf0_g1irf        g1irf_addr.bit.b4     /* Interrupt cause determination flag 0 */
#define     irf1_g1irf        g1irf_addr.bit.b5     /* Interrupt cause determination flag 1 */
#define     irf2_g1irf        g1irf_addr.bit.b6     /* Interrupt cause determination flag 2 */
#define     irf3_g1irf        g1irf_addr.bit.b7     /* Interrupt cause determination flag 3 */

/*------------------------------------------------------
     Receive Data Register 1
------------------------------------------------------*/
union byte_def g1dr_addr;
#define     g1dr       g1dr_addr.byte


/*------------------------------------------------------
    Transmit Buffer Register 1
------------------------------------------------------*/
union byte_def g1tb_addr;
#define     g1tb       g1tb_addr.byte

/*------------------------------------------------------
    Data Compare Register 10
------------------------------------------------------*/
union byte_def g1cmp0_addr;
#define     g1cmp0       g1cmp0_addr.byte

/*------------------------------------------------------
    Data Compare Register 11
------------------------------------------------------*/
union byte_def g1cmp1_addr;
#define     g1cmp1       g1cmp1_addr.byte

/*------------------------------------------------------
    Data Compare Register 12
------------------------------------------------------*/
union byte_def g1cmp2_addr;
#define     g1cmp2       g1cmp2_addr.byte

/*------------------------------------------------------
    Data Compare Register 13
------------------------------------------------------*/
union byte_def g1cmp3_addr;
#define     g1cmp3       g1cmp3_addr.byte

/*------------------------------------------------------
    Data Mask Register 10
------------------------------------------------------*/
union byte_def g1msk0_addr;
#define     g1msk0       g1msk0_addr.byte

/*------------------------------------------------------
    Data Mask Register 11
------------------------------------------------------*/
union byte_def g1msk1_addr;
#define     g1msk1       g1msk1_addr.byte

/*------------------------------------------------------
    Transmit Output Register 1
------------------------------------------------------*/
union byte_def g1to_addr;
#define     g1to       g1to_addr.byte

/*------------------------------------------------------
    Receive Input Register 0
------------------------------------------------------*/
union byte_def g1ri_addr;
#define     g1ri       g1ri_addr.byte


/*------------------------------------------------------
    Input Function Select Register
------------------------------------------------------*/
union byte_def ips_addr;
#define     ips      ips_addr.byte
#define     ips0     ips_addr.bit.b0    /* Communication unit 0 input pin select bit 0 */
#define     ips1     ips_addr.bit.b1    /* Communication unit 1 input pin select bit 1 */
#define     ips2     ips_addr.bit.b2    /* Port P15 input peripheral function select bit */
#define     ips3     ips_addr.bit.b3    /* CAN0in function pin select bit */
#define     ips4     ips_addr.bit.b4
#define     ips5     ips_addr.bit.b5
#define     ips6     ips_addr.bit.b6
                                        /* (b7) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Input Function Select Register A
------------------------------------------------------*/
union byte_def ipsa_addr;
#define     ipsa     ipsa_addr.byte
#define     ipsa_0   ipsa_addr.bit.b0   /* II/O 2-phase pulse input pin select bit */
                                        /* (b2-b1) Reserved bit (Set to 0) */
#define     ipsa_3   ipsa_addr.bit.b3   /* CAN1in function pin select bit */
                                        /* (b7-b4) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Input Function Select Register A
------------------------------------------------------*/
union byte_def ipsb_addr;
#define     ipsb     ipsb_addr.byte
#define     ipsb_0   ipsb_addr.bit.b0   /* Port P15 input peripheral function select bit */
#define     ipsb_1   ipsb_addr.bit.b1   /* Port P15 input peripheral function select bit */
#define     ipsb_2   ipsb_addr.bit.b2   /* Port P15 input peripheral function select bit */
#define     ipsb_3   ipsb_addr.bit.b3   /* Port P15 input peripheral function select bit */
#define     ipsb_4   ipsb_addr.bit.b4   /* Port P15 input peripheral function select bit */
#define     ipsb_5   ipsb_addr.bit.b5   /* Port P15 input peripheral function select bit */
#define     ipsb_6   ipsb_addr.bit.b6   /* Port P15 input peripheral function select bit */
#define     ipsb_7   ipsb_addr.bit.b7   /* Port P15 input peripheral function select bit */



/*------------------------------------------------------
    PLL Control Register
------------------------------------------------------*/
#define     plc         plc_addr.word

union byte_def plc0_addr;
#define     plc0    plc0_addr.byte

#define     plc00   plc0_addr.bit.b0    /* (b2-b0) Programmable counter select bit */
#define     plc01   plc0_addr.bit.b1
#define     plc02   plc0_addr.bit.b2
                                        /* (b3) Reserved bit (Set to 0) */
                                        /* (b4) Reserved bit (Set to 1) */
                                        /* (b5) Reserved bit (Set to 0) */
                                        /* (b6) Reserved bit (Set to 1) */
#define     plc07   plc0_addr.bit.b7    /* Operation enable bit */

/*------------------------------------------------------
    PLL Control Register 1
------------------------------------------------------*/
union byte_def plc1_addr;
#define     plc1    plc1_addr.byte
                                        /* (b0) Reserved bit (Set to 0) */
                                        /* (b1) Reserved bit (Set to 1) */
#define     plc12   plc1_addr.bit.b2    /* PLL clock division switch bit */
                                        /* (b3) Reserved bit (Set to 0) */
                                        /* (b4) Reserved bit (Set to 0) */
                                        /* (b7-b5) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Voltage Down Detection Interrupt Register
------------------------------------------------------*/
union byte_def d4int_addr;
#define     d4int   d4int_addr.byte

#define     d40     d4int_addr.bit.b0   /* Voltage down detection interrupt enable bit */
#define     d41     d4int_addr.bit.b1   /* STOP-WAIT mode deactivation control bit */
#define     d42     d4int_addr.bit.b2   /* Voltage change detection flag */
#define     d43     d4int_addr.bit.b3   /* WDT overflow detect flag */
#define     df0     d4int_addr.bit.b4   /* (b5-b4) Sampling clock select bit */
#define     df1     d4int_addr.bit.b5
                                        /* (b7-b6) Reserved bit (Set to 0) */


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
                                            /* (b5) Nothing is assigned */
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
                                            /* (b7-b5) Nothing is assigned */

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
                                            /* (b7-b5) Nothing is assigned */

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
                                            /* (b7) Nothing is assigned */

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
                                            /* (b7) Nothing is assigned */

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
                                            /* (b7-b4) Nothing is assigned */

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
                                            /* (b7-b4) Nothing is assigned */

/*------------------------------------------------------
    Port control register
------------------------------------------------------*/
union byte_def pcr_addr;
#define     pcr     pcr_addr.byte

#define     pcr0        pcr_addr.bit.b0     /* Port P1 control bit */
                                            /* (b2-b1) Reserved bit (Set to 0) */
                                            /* (b7-b3) Nothing is assigned */


/*------------------------------------------------------
    Function select register A0
------------------------------------------------------*/
union byte_def ps0_addr;
#define     ps0     ps0_addr.byte

#define     ps0_0       ps0_addr.bit.b0 /* Port P60 output function select bit */
#define     ps0_1       ps0_addr.bit.b1 /* Port P61 output function select bit */
#define     ps0_2       ps0_addr.bit.b2 /* Port P62 output function select bit */
#define     ps0_3       ps0_addr.bit.b3 /* Port P63 output function select bit */
#define     ps0_4       ps0_addr.bit.b4 /* Port P64 output function select bit */
#define     ps0_5       ps0_addr.bit.b5 /* Port P65 output function select bit */
#define     ps0_6       ps0_addr.bit.b6 /* Port P66 output function select bit */
#define     ps0_7       ps0_addr.bit.b7 /* Port P67 output function select bit */

/*------------------------------------------------------
    Function select register A1
------------------------------------------------------*/
union byte_def ps1_addr;
#define     ps1     ps1_addr.byte

#define     ps1_0       ps1_addr.bit.b0 /* Port P70 output function select bit */
#define     ps1_1       ps1_addr.bit.b1 /* Port P71 output function select bit */
#define     ps1_2       ps1_addr.bit.b2 /* Port P72 output function select bit */
#define     ps1_3       ps1_addr.bit.b3 /* Port P73 output function select bit */
#define     ps1_4       ps1_addr.bit.b4 /* Port P74 output function select bit */
#define     ps1_5       ps1_addr.bit.b5 /* Port P75 output function select bit */
#define     ps1_6       ps1_addr.bit.b6 /* Port P76 output function select bit */
#define     ps1_7       ps1_addr.bit.b7 /* Port P77 output function select bit */

/*------------------------------------------------------
    Function select register A2
------------------------------------------------------*/
union byte_def ps2_addr;
#define     ps2     ps2_addr.byte

#define     ps2_0       ps2_addr.bit.b0 /* Port P80 output function select bit */
#define     ps2_1       ps2_addr.bit.b1 /* Port P81 output function select bit */
#define     ps2_2       ps2_addr.bit.b2 /* Port P82 output function select bit */
                                        /* (b4-b3) Reserved bit (Set to 0) */
                                        /* (b5) Nothing is assigned */
                                        /* (b7-b6) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Function select register A3
------------------------------------------------------*/
union byte_def ps3_addr;
#define     ps3     ps3_addr.byte

#define     ps3_0       ps3_addr.bit.b0 /* Port P90 output function select bit */
#define     ps3_1       ps3_addr.bit.b1 /* Port P91 output function select bit */
#define     ps3_2       ps3_addr.bit.b2 /* Port P92 output function select bit */
#define     ps3_3       ps3_addr.bit.b3 /* Port P93 output function select bit */
#define     ps3_4       ps3_addr.bit.b4 /* Port P94 output function select bit */
#define     ps3_5       ps3_addr.bit.b5 /* Port P95 output function select bit */
#define     ps3_6       ps3_addr.bit.b6 /* Port P96 output function select bit */
#define     ps3_7       ps3_addr.bit.b7 /* Port P97 output function select bit */

/*------------------------------------------------------
    Function select register A4
------------------------------------------------------*/
union byte_def ps4_addr;
#define     ps4     ps4_addr.byte

#define     ps4_0       ps4_addr.bit.b0 /* Port P100 output function select bit */
#define     ps4_1       ps4_addr.bit.b1 /* Port P101 output function select bit */
#define     ps4_2       ps4_addr.bit.b2 /* Port P102 output function select bit */
#define     ps4_3       ps4_addr.bit.b3 /* Port P103 output function select bit */
#define     ps4_4       ps4_addr.bit.b4 /* Port P104 output function select bit */
#define     ps4_5       ps4_addr.bit.b5 /* Port P105 output function select bit */
#define     ps4_6       ps4_addr.bit.b6 /* Port P106 output function select bit */
#define     ps4_7       ps4_addr.bit.b7 /* Port P107 output function select bit */

/*------------------------------------------------------
    Function select register A5
------------------------------------------------------*/
union byte_def ps5_addr;
#define     ps5     ps5_addr.byte

#define     ps5_0       ps5_addr.bit.b0 /* Port P110 output function select bit */
#define     ps5_1       ps5_addr.bit.b1 /* Port P111 output function select bit */
#define     ps5_2       ps5_addr.bit.b2 /* Port P112 output function select bit */
#define     ps5_3       ps5_addr.bit.b3 /* Port P113 output function select bit */
                                        /* (b4) Reserved bit (Set to 0) */
                                        /* (b7-b5) Nothing is assigned */

/*------------------------------------------------------
    Function Select Register A6
------------------------------------------------------*/
union byte_def ps6_addr;
#define     ps6     ps6_addr.byte
#define     ps6_0       ps6_addr.bit.b0 /* Port P120 output function select bit */
#define     ps6_1       ps6_addr.bit.b1 /* Port P121 output function select bit */
#define     ps6_2       ps6_addr.bit.b2 /* Port P122 output function select bit */
#define     ps6_3       ps6_addr.bit.b3 /* Port P123 output function select bit */
#define     ps6_4       ps6_addr.bit.b4 /* Port P124 output function select bit */
#define     ps6_5       ps6_addr.bit.b5 /* Port P125 output function select bit */
#define     ps6_6       ps6_addr.bit.b6 /* Port P126 output function select bit */
#define     ps6_7       ps6_addr.bit.b7 /* Port P127 output function select bit */

/*------------------------------------------------------
    Function Select Register A7
------------------------------------------------------*/
union byte_def ps7_addr;
#define     ps7     ps7_addr.byte
#define     ps7_0       ps7_addr.bit.b0 /* Port P130 output function select bit */
#define     ps7_1       ps7_addr.bit.b1 /* Port P131 output function select bit */
#define     ps7_2       ps7_addr.bit.b2 /* Port P132 output function select bit */
#define     ps7_3       ps7_addr.bit.b3 /* Port P133 output function select bit */
#define     ps7_4       ps7_addr.bit.b4 /* Port P134 output function select bit */
#define     ps7_5       ps7_addr.bit.b5 /* Port P135 output function select bit */
#define     ps7_6       ps7_addr.bit.b6 /* Port P136 output function select bit */
#define     ps7_7       ps7_addr.bit.b7 /* Port P137 output function select bit */

/*------------------------------------------------------
    Function select register A8
------------------------------------------------------*/
union byte_def ps8_addr;
#define     ps8     ps8_addr.byte

#define     ps8_0       ps8_addr.bit.b0 /* Port P140 output function select bit */
#define     ps8_1       ps8_addr.bit.b1 /* Port P141 output function select bit */
#define     ps8_2       ps8_addr.bit.b2 /* Port P142 output function select bit */
#define     ps8_3       ps8_addr.bit.b3 /* Port P143 output function select bit */
                                        /* (b6-b4) Reserved bit (Set to 0) */
                                        /* (b7) Nothing is assigned */

/*------------------------------------------------------
    Function select register A9
------------------------------------------------------*/
union byte_def ps9_addr;
#define     ps9     ps9_addr.byte

#define     ps9_0       ps9_addr.bit.b0 /* Port P150 output function select bit */
#define     ps9_1       ps9_addr.bit.b1 /* Port P151 output function select bit */
                                        /* (b2) Reserved bit (Set to 0) */
#define     ps9_3       ps9_addr.bit.b3 /* Port P153 output function select bit */
#define     ps9_4       ps9_addr.bit.b4 /* Port P154 output function select bit */
                                        /* (b5) Reserved bit (Set to 0) */
#define     ps9_6       ps9_addr.bit.b6 /* Port P156 output function select bit */
#define     ps9_7       ps9_addr.bit.b7 /* Port P157 output function select bit */

/*------------------------------------------------------
    Function select register B0
------------------------------------------------------*/
union byte_def psl0_addr;
#define     psl0    psl0_addr.byte
#define     psl0_0      psl0_addr.bit.b0 /* Port P60 output peripheral function select bit */
#define     psl0_1      psl0_addr.bit.b1 /* Port P61 output peripheral function select bit */
#define     psl0_2      psl0_addr.bit.b2 /* Port P62 output peripheral function select bit */
                                         /* (b3) Reserved bit (Set to 0) */
#define     psl0_4      psl0_addr.bit.b4 /* Port P64 output peripheral function select bit */
                                         /* (b5) Reserved bit (Set to 0) */
#define     psl0_6      psl0_addr.bit.b6 /* Port P66 output peripheral function select bit */
                                         /* (b7) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Function select register B1
------------------------------------------------------*/
union byte_def psl1_addr;
#define     psl1    psl1_addr.byte

#define     psl1_0      psl1_addr.bit.b0 /* Port P70 output peripheral function select bit */
#define     psl1_1      psl1_addr.bit.b1 /* Port P71 output peripheral function select bit */
#define     psl1_2      psl1_addr.bit.b2 /* Port P72 output peripheral function select bit */
#define     psl1_3      psl1_addr.bit.b3 /* Port P73 output peripheral function select bit */
#define     psl1_4      psl1_addr.bit.b4 /* Port P74 output peripheral function select bit */
#define     psl1_5      psl1_addr.bit.b5 /* Port P75 output peripheral function select bit */
#define     psl1_6      psl1_addr.bit.b6 /* Port P76 output peripheral function select bit */
#define     psl1_7      psl1_addr.bit.b7 /* Port P77 output peripheral function select bit */

/*------------------------------------------------------
    Function select register B2
------------------------------------------------------*/
union byte_def psl2_addr;
#define     psl2    psl2_addr.byte

#define     psl2_0      psl2_addr.bit.b0 /* Port P80 output peripheral function select bit */
#define     psl2_1      psl2_addr.bit.b1 /* Port P81 output peripheral function select bit */
#define     psl2_2      psl2_addr.bit.b2 /* Port P82 output peripheral function select bit */
                                         /* (b4-b3) Reserved bit (Set to 0) */
                                         /* (b5) Nothing is assigned */
                                         /* (b7-b6) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Function select register B3
------------------------------------------------------*/
union byte_def psl3_addr;
#define     psl3    psl3_addr.byte
                                         /* (b0) Reserved bit (Set to 0) */
#define     psl3_1      psl3_addr.bit.b1 /* Port P91 output peripheral function select bit */
#define     psl3_2      psl3_addr.bit.b2 /* Port P92 output peripheral function select bit */
#define     psl3_3      psl3_addr.bit.b3 /* Port P93 output peripheral function select bit */
#define     psl3_4      psl3_addr.bit.b4 /* Port P94 output peripheral function select bit */
#define     psl3_5      psl3_addr.bit.b5 /* Port P95 output peripheral function select bit */
#define     psl3_6      psl3_addr.bit.b6 /* Port P96 output peripheral function select bit */
#define     psl3_7      psl3_addr.bit.b7 /* Port P97 output peripheral function select bit */

/*------------------------------------------------------
    Function Select Register B6
------------------------------------------------------*/
union byte_def psl6_addr;
#define     psl6    psl6_addr.byte
#define     psl6_0      psl6_addr.bit.b0 /* Port P120 output peripheral function select bit */
#define     psl6_1      psl6_addr.bit.b1 /* Port P121 output peripheral function select bit */
                                         /* (b2) Reserved bit (Set to 0) */
#define     psl6_3      psl6_addr.bit.b3 /* Port P123 output peripheral function select bit */
                                         /* (b7-b4) Reserved bit (Set to 0) */

/*------------------------------------------------------
    Function select register B9
------------------------------------------------------*/
union byte_def psl9_addr;
#define     psl9    psl9_addr.byte

#define     psl9_0      psl9_addr.bit.b0 /* Port P152 output peripheral function select bit */
#define     psl9_1      psl9_addr.bit.b1 /* Port P151 output peripheral function select bit */
                                         /* (b3-b2) Nothing is assigned */
#define     psl9_4      psl9_addr.bit.b4 /* Port P154 output peripheral function select bit */
                                         /* (b7-b5) Nothing is assigned */

/*------------------------------------------------------
    Function select register C
------------------------------------------------------*/
union byte_def psc_addr;
#define     psc     psc_addr.byte

#define     psc_0       psc_addr.bit.b0 /* Port P70 output peripheral function select bit */
#define     psc_1       psc_addr.bit.b1 /* Port P71 output peripheral function select bit */
#define     psc_2       psc_addr.bit.b2 /* Port P72 output peripheral function select bit */
#define     psc_3       psc_addr.bit.b3 /* Port P73 output peripheral function select bit */
#define     psc_4       psc_addr.bit.b4 /* Port P74 output peripheral function select bit */
#define     psc_5       psc_addr.bit.b5 /* Port P75 output peripheral function select bit */
#define     psc_6       psc_addr.bit.b6 /* Port P76 output peripheral function select bit */
#define     psc_7       psc_addr.bit.b7 /* Port Key input interrupt disable bit */

/*------------------------------------------------------
    Function Select Register C2
------------------------------------------------------*/
union byte_def psc2_addr;
#define     psc2     psc2_addr.byte
                                         /* (b0) Nothing is assigned */
#define     psc2_1      psc2_addr.bit.b1 /* Port P81 output peripheral function select bit */
#define     psc2_2      psc2_addr.bit.b2 /* Port P82 output peripheral function select bit */
                                         /* (b7-b3) Nothing is assigned */

/*------------------------------------------------------
    Function Select Register C3
------------------------------------------------------*/
union byte_def psc3_addr;
#define     psc3     psc3_addr.byte
                                         /* (b5-b0) Nothing is assigned */
#define     psc3_6      psc3_addr.bit.b6 /* Port P96 output peripheral function select bit */
                                         /* (b7) Nothing is assigned */

/*------------------------------------------------------
    Function Select Register C6
------------------------------------------------------*/
union byte_def psc6_addr;
#define     psc6     psc6_addr.byte

#define     psc6_0      psc6_addr.bit.b0 /* Port P120 output peripheral function select bit */
#define     psc6_1      psc6_addr.bit.b1 /* Port P121 output peripheral function select bit */
                                         /* (b2) Nothing is assigned */
#define     psc6_3      psc6_addr.bit.b3 /* Port P123 output peripheral function select bit */
                                         /* (b7-b4) Nothing is assigned */

/*------------------------------------------------------
    Function Select Register D1
------------------------------------------------------*/
union byte_def psd1_addr;
#define     psd1     psd1_addr.byte

#define     psd1_0      psd1_addr.bit.b0    /* Port P70 output peripheral function select bit */
#define     psd1_1      psd1_addr.bit.b1    /* Port P71 output peripheral function select bit */
                                            /* (b3-b2) Nothing is assigned */
#define     psd1_4      psd1_addr.bit.b4    /* Port P74 output peripheral function select bit */
                                            /* (b5) Nothing is assigned */
#define     psd1_6      psd1_addr.bit.b6    /* Port P76 output peripheral function select bit */
#define     psd1_7      psd1_addr.bit.b7    /* Port P77 output peripheral function select bit */

/*------------------------------------------------------
    Function select register D2
------------------------------------------------------*/
union byte_def psd2_addr;
#define     psd2    psd2_addr.byte
                                         /* (b0) Nothing is assigned */
#define     psd2_1      psd2_addr.bit.b1 /* Port P81 output peripheral function select bit */
                                         /* (b7-b2) Nothing is assigned */

/*------------------------------------------------------
    Function select register E1
------------------------------------------------------*/
union byte_def pse1_addr;
#define     pse1    pse1_addr.byte
#define     pse1_0      pse1_addr.bit.b0 /* Port P70 output peripheral function select bit */
#define     pse1_1      pse1_addr.bit.b1 /* Port P71 output peripheral function select bit */
                                         /* (b5-b2) Nothing is assigned */
#define     pse1_6      pse1_addr.bit.b6 /* Port P76 output peripheral function select bit */
#define     pse1_7      pse1_addr.bit.b7 /* Port P77 output peripheral function select bit */

/*------------------------------------------------------
    Function select register E2
------------------------------------------------------*/
union byte_def pse2_addr;
#define     pse2    pse2_addr.byte
                                         /* (b0) Nothing is assigned */
#define     pse2_1      pse2_addr.bit.b1 /* Port P81 output peripheral function select bit */
                                         /* (b7-b2) Nothing is assigned */

/*------------------------------------------------------
    UARTi boud rate register (i=0,1,2,3,4)
        (1) The MOV instruction should be used to set UiBRG register
        (2) The UiBRG register should be set while stop data transmitting and receiveing
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

union byte_def u5brg_addr;
#define     u5brg       u5brg_addr.byte

union byte_def u6brg_addr;
#define     u6brg       u6brg_addr.byte


/********************************************************
*   declare SFR union                                   *
********************************************************/

/*------------------------------------------------------
    Interrupt control registers
------------------------------------------------------*/

/*------------------------------------------------------
     ad0ic
------------------------------------------------------*/
union byte_def ad0ic_addr;
#define     ad0ic        ad0ic_addr.byte

#define     ilvl0_ad0ic  ad0ic_addr.bit.b0
#define     ilvl1_ad0ic  ad0ic_addr.bit.b1
#define     ilvl2_ad0ic  ad0ic_addr.bit.b2
#define     ir_ad0ic     ad0ic_addr.bit.b3

/*------------------------------------------------------
     bcn0ic
------------------------------------------------------*/
union byte_def bcn0ic_addr;
#define     bcn0ic      bcn0ic_addr.byte

#define     ilvl0_bcn0ic    bcn0ic_addr.bit.b0
#define     ilvl1_bcn0ic    bcn0ic_addr.bit.b1
#define     ilvl2_bcn0ic    bcn0ic_addr.bit.b2
#define     ir_bcn0ic       bcn0ic_addr.bit.b3

/*------------------------------------------------------
     bcn1ic
------------------------------------------------------*/
union byte_def bcn1ic_addr;
#define     bcn1ic      bcn1ic_addr.byte

#define     ilvl0_bcn1ic    bcn1ic_addr.bit.b0
#define     ilvl1_bcn1ic    bcn1ic_addr.bit.b1
#define     ilvl2_bcn1ic    bcn1ic_addr.bit.b2
#define     ir_bcn1ic       bcn1ic_addr.bit.b3

/*------------------------------------------------------
     bcn2ic
------------------------------------------------------*/
union byte_def bcn2ic_addr;
#define     bcn2ic      bcn2ic_addr.byte

#define     ilvl0_bcn2ic    bcn2ic_addr.bit.b0
#define     ilvl1_bcn2ic    bcn2ic_addr.bit.b1
#define     ilvl2_bcn2ic    bcn2ic_addr.bit.b2
#define     ir_bcn2ic       bcn2ic_addr.bit.b3

/*------------------------------------------------------
     bcn3ic
------------------------------------------------------*/
union byte_def bcn3ic_addr;
#define     bcn3ic      bcn3ic_addr.byte

#define     ilvl0_bcn3ic    bcn3ic_addr.bit.b0
#define     ilvl1_bcn3ic    bcn3ic_addr.bit.b1
#define     ilvl2_bcn3ic    bcn3ic_addr.bit.b2
#define     ir_bcn3ic       bcn3ic_addr.bit.b3

/*------------------------------------------------------
     bcn4ic
------------------------------------------------------*/
union byte_def bcn4ic_addr;
#define     bcn4ic      bcn4ic_addr.byte

#define     ilvl0_bcn4ic    bcn4ic_addr.bit.b0
#define     ilvl1_bcn4ic    bcn4ic_addr.bit.b1
#define     ilvl2_bcn4ic    bcn4ic_addr.bit.b2
#define     ir_bcn4ic       bcn4ic_addr.bit.b3

/*------------------------------------------------------
     dm0ic
------------------------------------------------------*/
union byte_def dm0ic_addr;
#define     dm0ic       dm0ic_addr.byte

#define     ilvl0_dm0ic dm0ic_addr.bit.b0
#define     ilvl1_dm0ic dm0ic_addr.bit.b1
#define     ilvl2_dm0ic dm0ic_addr.bit.b2
#define     ir_dm0ic    dm0ic_addr.bit.b3

/*------------------------------------------------------
     dm1ic
------------------------------------------------------*/
union byte_def dm1ic_addr;
#define     dm1ic       dm1ic_addr.byte

#define     ilvl0_dm1ic dm1ic_addr.bit.b0
#define     ilvl1_dm1ic dm1ic_addr.bit.b1
#define     ilvl2_dm1ic dm1ic_addr.bit.b2
#define     ir_dm1ic    dm1ic_addr.bit.b3

/*------------------------------------------------------
     dm2ic
------------------------------------------------------*/
union byte_def dm2ic_addr;
#define     dm2ic       dm2ic_addr.byte

#define     ilvl0_dm2ic dm2ic_addr.bit.b0
#define     ilvl1_dm2ic dm2ic_addr.bit.b1
#define     ilvl2_dm2ic dm2ic_addr.bit.b2
#define     ir_dm2ic    dm2ic_addr.bit.b3

/*------------------------------------------------------
     dm3ic
------------------------------------------------------*/
union byte_def dm3ic_addr;
#define     dm3ic       dm3ic_addr.byte

#define     ilvl0_dm3ic dm3ic_addr.bit.b0
#define     ilvl1_dm3ic dm3ic_addr.bit.b1
#define     ilvl2_dm3ic dm3ic_addr.bit.b2
#define     ir_dm3ic    dm3ic_addr.bit.b3


/*------------------------------------------------------
     kupic
------------------------------------------------------*/
union byte_def kupic_addr;
#define     kupic       kupic_addr.byte

#define     ilvl0_kupic kupic_addr.bit.b0
#define     ilvl1_kupic kupic_addr.bit.b1
#define     ilvl2_kupic kupic_addr.bit.b2
#define     ir_kupic    kupic_addr.bit.b3

/*------------------------------------------------------
     ta0ic
------------------------------------------------------*/
union byte_def ta0ic_addr;
#define     ta0ic       ta0ic_addr.byte

#define     ilvl0_ta0ic ta0ic_addr.bit.b0
#define     ilvl1_ta0ic ta0ic_addr.bit.b1
#define     ilvl2_ta0ic ta0ic_addr.bit.b2
#define     ir_ta0ic    ta0ic_addr.bit.b3

/*------------------------------------------------------
     ta1ic
------------------------------------------------------*/
union byte_def ta1ic_addr;
#define     ta1ic       ta1ic_addr.byte

#define     ilvl0_ta1ic ta1ic_addr.bit.b0
#define     ilvl1_ta1ic ta1ic_addr.bit.b1
#define     ilvl2_ta1ic ta1ic_addr.bit.b2
#define     ir_ta1ic    ta1ic_addr.bit.b3

/*------------------------------------------------------
     ta2ic
------------------------------------------------------*/
union byte_def ta2ic_addr;
#define     ta2ic       ta2ic_addr.byte
#define     ilvl0_ta2ic ta2ic_addr.bit.b0
#define     ilvl1_ta2ic ta2ic_addr.bit.b1
#define     ilvl2_ta2ic ta2ic_addr.bit.b2
#define     ir_ta2ic    ta2ic_addr.bit.b3

/*------------------------------------------------------
     ta3ic
------------------------------------------------------*/
union byte_def ta3ic_addr;
#define     ta3ic       ta3ic_addr.byte

#define     ilvl0_ta3ic ta3ic_addr.bit.b0
#define     ilvl1_ta3ic ta3ic_addr.bit.b1
#define     ilvl2_ta3ic ta3ic_addr.bit.b2
#define     ir_ta3ic    ta3ic_addr.bit.b3

/*------------------------------------------------------
     ta4ic
------------------------------------------------------*/
union byte_def ta4ic_addr;
#define     ta4ic       ta4ic_addr.byte

#define     ilvl0_ta4ic ta4ic_addr.bit.b0
#define     ilvl1_ta4ic ta4ic_addr.bit.b1
#define     ilvl2_ta4ic ta4ic_addr.bit.b2
#define     ir_ta4ic    ta4ic_addr.bit.b3

/*------------------------------------------------------
     tb0ic
------------------------------------------------------*/
union byte_def tb0ic_addr;
#define     tb0ic       tb0ic_addr.byte

#define     ilvl0_tb0ic tb0ic_addr.bit.b0
#define     ilvl1_tb0ic tb0ic_addr.bit.b1
#define     ilvl2_tb0ic tb0ic_addr.bit.b2
#define     ir_tb0ic    tb0ic_addr.bit.b3

/*------------------------------------------------------
     tb1ic
------------------------------------------------------*/
union byte_def tb1ic_addr;
#define     tb1ic       tb1ic_addr.byte

#define     ilvl0_tb1ic tb1ic_addr.bit.b0
#define     ilvl1_tb1ic tb1ic_addr.bit.b1
#define     ilvl2_tb1ic tb1ic_addr.bit.b2
#define     ir_tb1ic    tb1ic_addr.bit.b3

/*------------------------------------------------------
     tb2ic
------------------------------------------------------*/
union byte_def tb2ic_addr;
#define     tb2ic       tb2ic_addr.byte

#define     ilvl0_tb2ic tb2ic_addr.bit.b0
#define     ilvl1_tb2ic tb2ic_addr.bit.b1
#define     ilvl2_tb2ic tb2ic_addr.bit.b2
#define     ir_tb2ic    tb2ic_addr.bit.b3

/*------------------------------------------------------
     tb3ic
------------------------------------------------------*/
union byte_def tb3ic_addr;
#define     tb3ic       tb3ic_addr.byte

#define     ilvl0_tb3ic tb3ic_addr.bit.b0
#define     ilvl1_tb3ic tb3ic_addr.bit.b1
#define     ilvl2_tb3ic tb3ic_addr.bit.b2
#define     ir_tb3ic    tb3ic_addr.bit.b3

/*------------------------------------------------------
     tb4ic
------------------------------------------------------*/
union byte_def tb4ic_addr;
#define     tb4ic       tb4ic_addr.byte

#define     ilvl0_tb4ic tb4ic_addr.bit.b0
#define     ilvl1_tb4ic tb4ic_addr.bit.b1
#define     ilvl2_tb4ic tb4ic_addr.bit.b2
#define     ir_tb4ic    tb4ic_addr.bit.b3

/*------------------------------------------------------
     tb5ic
------------------------------------------------------*/
union byte_def tb5ic_addr;
#define     tb5ic       tb5ic_addr.byte

#define     ilvl0_tb5ic tb5ic_addr.bit.b0
#define     ilvl1_tb5ic tb5ic_addr.bit.b1
#define     ilvl2_tb5ic tb5ic_addr.bit.b2
#define     ir_tb5ic    tb5ic_addr.bit.b3

/*------------------------------------------------------
     s0tic
------------------------------------------------------*/
union byte_def s0tic_addr;
#define     s0tic       s0tic_addr.byte

#define     ilvl0_s0tic s0tic_addr.bit.b0
#define     ilvl1_s0tic s0tic_addr.bit.b1
#define     ilvl2_s0tic s0tic_addr.bit.b2
#define     ir_s0tic    s0tic_addr.bit.b3

/*------------------------------------------------------
     s1tic
------------------------------------------------------*/
union byte_def s1tic_addr;
#define     s1tic       s1tic_addr.byte

#define     ilvl0_s1tic s1tic_addr.bit.b0
#define     ilvl1_s1tic s1tic_addr.bit.b1
#define     ilvl2_s1tic s1tic_addr.bit.b2
#define     ir_s1tic    s1tic_addr.bit.b3

/*------------------------------------------------------
     s2tic
------------------------------------------------------*/
union byte_def s2tic_addr;
#define     s2tic       s2tic_addr.byte

#define     ilvl0_s2tic s2tic_addr.bit.b0
#define     ilvl1_s2tic s2tic_addr.bit.b1
#define     ilvl2_s2tic s2tic_addr.bit.b2
#define     ir_s2tic    s2tic_addr.bit.b3

/*------------------------------------------------------
     s3tic
------------------------------------------------------*/
union byte_def s3tic_addr;
#define     s3tic       s3tic_addr.byte

#define     ilvl0_s3tic s3tic_addr.bit.b0
#define     ilvl1_s3tic s3tic_addr.bit.b1
#define     ilvl2_s3tic s3tic_addr.bit.b2
#define     ir_s3tic    s3tic_addr.bit.b3

/*------------------------------------------------------
     s4tic
------------------------------------------------------*/
union byte_def s4tic_addr;
#define     s4tic       s4tic_addr.byte

#define     ilvl0_s4tic s4tic_addr.bit.b0
#define     ilvl1_s4tic s4tic_addr.bit.b1
#define     ilvl2_s4tic s4tic_addr.bit.b2
#define     ir_s4tic    s4tic_addr.bit.b3

/*------------------------------------------------------
     s0ric
------------------------------------------------------*/
union byte_def s0ric_addr;
#define     s0ric       s0ric_addr.byte

#define     ilvl0_s0ric s0ric_addr.bit.b0
#define     ilvl1_s0ric s0ric_addr.bit.b1
#define     ilvl2_s0ric s0ric_addr.bit.b2
#define     ir_s0ric    s0ric_addr.bit.b3

/*------------------------------------------------------
     s1ric
------------------------------------------------------*/
union byte_def s1ric_addr;
#define     s1ric       s1ric_addr.byte

#define     ilvl0_s1ric s1ric_addr.bit.b0
#define     ilvl1_s1ric s1ric_addr.bit.b1
#define     ilvl2_s1ric s1ric_addr.bit.b2
#define     ir_s1ric    s1ric_addr.bit.b3

/*------------------------------------------------------
     s2ric
------------------------------------------------------*/
union byte_def s2ric_addr;
#define     s2ric       s2ric_addr.byte

#define     ilvl0_s2ric s2ric_addr.bit.b0
#define     ilvl1_s2ric s2ric_addr.bit.b1
#define     ilvl2_s2ric s2ric_addr.bit.b2
#define     ir_s2ric    s2ric_addr.bit.b3

/*------------------------------------------------------
     s3ric
------------------------------------------------------*/
union byte_def s3ric_addr;
#define     s3ric       s3ric_addr.byte

#define     ilvl0_s3ric s3ric_addr.bit.b0
#define     ilvl1_s3ric s3ric_addr.bit.b1
#define     ilvl2_s3ric s3ric_addr.bit.b2
#define     ir_s3ric    s3ric_addr.bit.b3

/*------------------------------------------------------
     s4ric
------------------------------------------------------*/
union byte_def s4ric_addr;
#define     s4ric       s4ric_addr.byte

#define     ilvl0_s4ric s4ric_addr.bit.b0
#define     ilvl1_s4ric s4ric_addr.bit.b1
#define     ilvl2_s4ric s4ric_addr.bit.b2
#define     ir_s4ric    s4ric_addr.bit.b3

/*------------------------------------------------------
     iio0ic
------------------------------------------------------*/
union byte_def iio0ic_addr;
#define     iio0ic       iio0ic_addr.byte

#define     ilvl0_iio0ic iio0ic_addr.bit.b0
#define     ilvl1_iio0ic iio0ic_addr.bit.b1
#define     ilvl2_iio0ic iio0ic_addr.bit.b2
#define     ir_iio0ic    iio0ic_addr.bit.b3

/*------------------------------------------------------
     iio1ic
------------------------------------------------------*/
union byte_def iio1ic_addr;
#define     iio1ic       iio1ic_addr.byte

#define     ilvl0_iio1ic iio1ic_addr.bit.b0
#define     ilvl1_iio1ic iio1ic_addr.bit.b1
#define     ilvl2_iio1ic iio1ic_addr.bit.b2
#define     ir_iio1ic    iio1ic_addr.bit.b3

/*------------------------------------------------------
     iio2ic
------------------------------------------------------*/
union byte_def iio2ic_addr;
#define     iio2ic       iio2ic_addr.byte

#define     ilvl0_iio2ic iio2ic_addr.bit.b0
#define     ilvl1_iio2ic iio2ic_addr.bit.b1
#define     ilvl2_iio2ic iio2ic_addr.bit.b2
#define     ir_iio2ic    iio2ic_addr.bit.b3

/*------------------------------------------------------
     iio3ic
------------------------------------------------------*/
union byte_def iio3ic_addr;
#define     iio3ic       iio3ic_addr.byte

#define     ilvl0_iio3ic iio3ic_addr.bit.b0
#define     ilvl1_iio3ic iio3ic_addr.bit.b1
#define     ilvl2_iio3ic iio3ic_addr.bit.b2
#define     ir_iio3ic    iio3ic_addr.bit.b3

/*------------------------------------------------------
     iio4ic
------------------------------------------------------*/
union byte_def iio4ic_addr;
#define     iio4ic       iio4ic_addr.byte

#define     ilvl0_iio4ic iio4ic_addr.bit.b0
#define     ilvl1_iio4ic iio4ic_addr.bit.b1
#define     ilvl2_iio4ic iio4ic_addr.bit.b2
#define     ir_iio4ic    iio4ic_addr.bit.b3

/*------------------------------------------------------
     iio5ic
------------------------------------------------------*/
union byte_def iio5ic_addr;
#define     iio5ic       iio5ic_addr.byte

#define     ilvl0_iio5ic iio5ic_addr.bit.b0
#define     ilvl1_iio5ic iio5ic_addr.bit.b1
#define     ilvl2_iio5ic iio5ic_addr.bit.b2
#define     ir_iio5ic    iio5ic_addr.bit.b3

/*------------------------------------------------------
     iio6ic
------------------------------------------------------*/
union byte_def iio6ic_addr;
#define     iio6ic       iio6ic_addr.byte

#define     ilvl0_iio6ic iio6ic_addr.bit.b0
#define     ilvl1_iio6ic iio6ic_addr.bit.b1
#define     ilvl2_iio6ic iio6ic_addr.bit.b2
#define     ir_iio6ic    iio6ic_addr.bit.b3

/*------------------------------------------------------
     iio7ic
------------------------------------------------------*/
union byte_def iio7ic_addr;
#define     iio7ic       iio7ic_addr.byte

#define     ilvl0_iio7ic iio7ic_addr.bit.b0
#define     ilvl1_iio7ic iio7ic_addr.bit.b1
#define     ilvl2_iio7ic iio7ic_addr.bit.b2
#define     ir_iio7ic    iio7ic_addr.bit.b3

/*------------------------------------------------------
     iio8ic
------------------------------------------------------*/
union byte_def iio8ic_addr;
#define     iio8ic       iio8ic_addr.byte

#define     ilvl0_iio8ic iio8ic_addr.bit.b0
#define     ilvl1_iio8ic iio8ic_addr.bit.b1
#define     ilvl2_iio8ic iio8ic_addr.bit.b2
#define     ir_iio8ic    iio8ic_addr.bit.b3

/*------------------------------------------------------
     iio9ic
------------------------------------------------------*/
union byte_def iio9ic_addr;
#define     iio9ic       iio9ic_addr.byte

#define     ilvl0_iio9ic iio9ic_addr.bit.b0
#define     ilvl1_iio9ic iio9ic_addr.bit.b1
#define     ilvl2_iio9ic iio9ic_addr.bit.b2
#define     ir_iio9ic    iio9ic_addr.bit.b3

/*------------------------------------------------------
     iio10ic
------------------------------------------------------*/
union byte_def iio10ic_addr;
#define     iio10ic       iio10ic_addr.byte

#define     ilvl0_iio10ic iio10ic_addr.bit.b0
#define     ilvl1_iio10ic iio10ic_addr.bit.b1
#define     ilvl2_iio10ic iio10ic_addr.bit.b2
#define     ir_iio10ic    iio10ic_addr.bit.b3

/*------------------------------------------------------
     iio11ic
------------------------------------------------------*/
union byte_def iio11ic_addr;
#define     iio11ic       iio11ic_addr.byte

#define     ilvl0_iio11ic iio11ic_addr.bit.b0
#define     ilvl1_iio11ic iio11ic_addr.bit.b1
#define     ilvl2_iio11ic iio11ic_addr.bit.b2
#define     ir_iio11ic    iio11ic_addr.bit.b3

/*------------------------------------------------------
     int0ic
------------------------------------------------------*/
union byte_def int0ic_addr;
#define     int0ic      int0ic_addr.byte

#define     ilvl0_int0ic    int0ic_addr.bit.b0
#define     ilvl1_int0ic    int0ic_addr.bit.b1
#define     ilvl2_int0ic    int0ic_addr.bit.b2
#define     ir_int0ic       int0ic_addr.bit.b3
#define     pol_int0ic      int0ic_addr.bit.b4
#define     lvs_int0ic      int0ic_addr.bit.b5

/*------------------------------------------------------
     int1ic
------------------------------------------------------*/
union byte_def int1ic_addr;
#define     int1ic      int1ic_addr.byte

#define     ilvl0_int1ic    int1ic_addr.bit.b0
#define     ilvl1_int1ic    int1ic_addr.bit.b1
#define     ilvl2_int1ic    int1ic_addr.bit.b2
#define     ir_int1ic       int1ic_addr.bit.b3
#define     pol_int1ic      int1ic_addr.bit.b4
#define     lvs_int1ic      int1ic_addr.bit.b5

/*------------------------------------------------------
     int2ic
------------------------------------------------------*/
union byte_def int2ic_addr;
#define     int2ic      int2ic_addr.byte

#define     ilvl0_int2ic    int2ic_addr.bit.b0
#define     ilvl1_int2ic    int2ic_addr.bit.b1
#define     ilvl2_int2ic    int2ic_addr.bit.b2
#define     ir_int2ic       int2ic_addr.bit.b3
#define     pol_int2ic      int2ic_addr.bit.b4
#define     lvs_int2ic      int2ic_addr.bit.b5

/*------------------------------------------------------
     int3ic
------------------------------------------------------*/
union byte_def int3ic_addr;
#define     int3ic      int3ic_addr.byte

#define     ilvl0_int3ic    int3ic_addr.bit.b0
#define     ilvl1_int3ic    int3ic_addr.bit.b1
#define     ilvl2_int3ic    int3ic_addr.bit.b2
#define     ir_int3ic       int3ic_addr.bit.b3
#define     pol_int3ic      int3ic_addr.bit.b4
#define     lvs_int3ic      int3ic_addr.bit.b5

/*------------------------------------------------------
     int4ic
------------------------------------------------------*/
union byte_def int4ic_addr;
#define     int4ic      int4ic_addr.byte

#define     ilvl0_int4ic    int4ic_addr.bit.b0
#define     ilvl1_int4ic    int4ic_addr.bit.b1
#define     ilvl2_int4ic    int4ic_addr.bit.b2
#define     ir_int4ic       int4ic_addr.bit.b3
#define     pol_int4ic      int4ic_addr.bit.b4
#define     lvs_int4ic      int4ic_addr.bit.b5

/*------------------------------------------------------
     int5ic
------------------------------------------------------*/
union byte_def int5ic_addr;
#define     int5ic      int5ic_addr.byte

#define     ilvl0_int5ic    int5ic_addr.bit.b0
#define     ilvl1_int5ic    int5ic_addr.bit.b1
#define     ilvl2_int5ic    int5ic_addr.bit.b2
#define     ir_int5ic       int5ic_addr.bit.b3
#define     pol_int5ic      int5ic_addr.bit.b4
#define     lvs_int5ic      int5ic_addr.bit.b5

/*------------------------------------------------------
     CAN0 Interrupt control register
------------------------------------------------------*/
union byte_def can0ic_addr;
#define     can0ic      can0ic_addr.byte

#define     ilvl0_can0ic    can0ic_addr.bit.b0   /* Interrupt priority level select bit */
#define     ilvl1_can0ic    can0ic_addr.bit.b1   /* Interrupt priority level select bit */
#define     ilvl2_can0ic    can0ic_addr.bit.b2   /* Interrupt priority level select bit */
#define     ir_can0ic       can0ic_addr.bit.b3      /* Interrupt request bit */

/*------------------------------------------------------
     CAN1 Interrupt control register
------------------------------------------------------*/
union byte_def can1ic_addr;
#define     can1ic      can1ic_addr.byte

#define     ilvl0_can1ic    can1ic_addr.bit.b0
#define     ilvl1_can1ic    can1ic_addr.bit.b1
#define     ilvl2_can1ic    can1ic_addr.bit.b2
#define     ir_can1ic       can1ic_addr.bit.b3

/*------------------------------------------------------
     CAN2 Interrupt control register
------------------------------------------------------*/
union byte_def can2ic_addr;
#define     can2ic      can2ic_addr.byte

#define     ilvl0_can2ic    can2ic_addr.bit.b0
#define     ilvl1_can2ic    can2ic_addr.bit.b1
#define     ilvl2_can2ic    can2ic_addr.bit.b2
#define     ir_can2ic       can2ic_addr.bit.b3

/*------------------------------------------------------
     CAN3 Interrupt control register
------------------------------------------------------*/
union byte_def can3ic_addr;
#define     can3ic      can3ic_addr.byte

#define     ilvl0_can3ic    can3ic_addr.bit.b0
#define     ilvl1_can3ic    can3ic_addr.bit.b1
#define     ilvl2_can3ic    can3ic_addr.bit.b2
#define     ir_can3ic       can3ic_addr.bit.b3

/*------------------------------------------------------
     CAN4 Interrupt control register
------------------------------------------------------*/
union byte_def can4ic_addr;
#define     can4ic      can4ic_addr.byte

#define     ilvl0_can4ic    can4ic_addr.bit.b0
#define     ilvl1_can4ic    can4ic_addr.bit.b1
#define     ilvl2_can4ic    can4ic_addr.bit.b2
#define     ir_can4ic       can4ic_addr.bit.b3

/*------------------------------------------------------
     CAN5 Interrupt control register
------------------------------------------------------*/
union byte_def can5ic_addr;
#define     can5ic      can5ic_addr.byte

#define     ilvl0_can5ic    can5ic_addr.bit.b0
#define     ilvl1_can5ic    can5ic_addr.bit.b1
#define     ilvl2_can5ic    can5ic_addr.bit.b2
#define     ir_can5ic       can5ic_addr.bit.b3

/*------------------------------------------------------
     Interrupt Request Register
------------------------------------------------------*/

/*------------------------------------------------------
     iio0ir
------------------------------------------------------*/
union byte_def iio0ir_addr;
#define    iio0ir   iio0ir_addr.byte
                                            /* (b0) - */
                                            /* (b1) - */
#define    tm13r    iio0ir_addr.bit.b2    /* II/O time measurement 3 interrupt */
#define    po13r    iio0ir_addr.bit.b2    /* II/O waveform generation function 3 interrupt */
                                            /* (b3) - */
#define    g0rir    iio0ir_addr.bit.b4    /* II/O communication unit 0 HDLC data processing function interrupt */
#define    sio0rr   iio0ir_addr.bit.b5    /* II/O communication unit 0 receive interrupt */
#define    u5rr     iio0ir_addr.bit.b6    /*  */
#define    can10r   iio0ir_addr.bit.b7    /* CAN1 communication function interrupt */

/*------------------------------------------------------
     iio1ir
------------------------------------------------------*/
union byte_def iio1ir_addr;
#define    iio1ir   iio1ir_addr.byte
                                            /* (b0) - */
                                            /* (b1) - */
#define    tm14r    iio1ir_addr.bit.b2    /* II/O time measurement 4 interrupt */
#define    po14r    iio1ir_addr.bit.b2    /* II/O waveform generation function 4 interrupt */
                                            /* (b3) - */
#define    g0tor    iio1ir_addr.bit.b4    /* II/O communication unit 0 HDLC data processing function interrupt */
#define    sio0tr   iio1ir_addr.bit.b5    /* II/O communication unit 0 transmit interrupt */
#define    u5tr     iio1ir_addr.bit.b6    /*  */
#define    can11r   iio1ir_addr.bit.b7    /* CAN1 communication function interrupt */

/*------------------------------------------------------
     iio2ir
------------------------------------------------------*/
union byte_def iio2ir_addr;
#define    iio2ir   iio2ir_addr.byte
                                            /* (b0) - */
                                            /* (b1) - */
#define    tm12r    iio2ir_addr.bit.b2    /* II/O time measurement 2 interrupt */
#define    po12r    iio2ir_addr.bit.b2    /* II/O waveform generation function 2 interrupt */
                                            /* (b3) - */
#define    g1rir    iio2ir_addr.bit.b4    /* II/O communication unit 1 HDLC data processing function interrupt */
#define    sio1rr   iio2ir_addr.bit.b5    /* II/O communication unit 1 receive interrupt */
                                            /* (b6) - */
                                            /* (b7) - */

/*------------------------------------------------------
     iio3ir
------------------------------------------------------*/
union byte_def iio3ir_addr;
#define    iio3ir   iio3ir_addr.byte
                                            /* (b0) - */
                                            /* (b1) - */
#define    tm10r    iio3ir_addr.bit.b2    /* II/O time measurement 0 interrupt */
#define    po10r    iio3ir_addr.bit.b2    /* II/O waveform generation function 0 interrupt */
#define    po27r    iio3ir_addr.bit.b3    /* II/O waveform generation function 7 interrupt */
#define    g1tor    iio3ir_addr.bit.b4    /* II/O communication unit 1 HDLC data processing function interrupt */
#define    sio1tr   iio3ir_addr.bit.b5    /* II/O communication unit 0 transmit interrupt */
                                            /* (b6) - */
                                            /* (b7) - */

/*------------------------------------------------------
     iio4ir
------------------------------------------------------*/
union byte_def iio4ir_addr;
#define    iio4ir   iio4ir_addr.byte
                                            /* (b0) - */
                                            /* (b1) - */
#define    tm17r    iio4ir_addr.bit.b2    /* II/O time measurement 7 interrupt */
#define    po17r    iio4ir_addr.bit.b2    /* II/O waveform generation function 7 interrupt */
                                            /* (b3) - */
#define    bt1r     iio4ir_addr.bit.b4    /* II/O communication base timer interrupt */
                                            /* (b5) - */
#define    srt1r    iio4ir_addr.bit.b6    /* II/O special communication function interrupt */
#define    srt0r    iio4ir_addr.bit.b7    /* II/O special communication function interrupt */

/*------------------------------------------------------
     iio5ir
------------------------------------------------------*/
union byte_def iio5ir_addr;
#define    iio5ir   iio5ir_addr.byte
                                            /* (b1-b0) - */
#define    po21r    iio5ir_addr.bit.b2    /* II/O waveform generation function 1 interrupt */
                                            /* (b3) - */
#define    sio2rr   iio5ir_addr.bit.b4    /* II/O communication unit 2 receive interrupt */
                                            /* (b5) - */
#define    can1wur  iio5ir_addr.bit.b6    /* CAN1 wake-up interrupt */
#define    can12r   iio5ir_addr.bit.b7    /* CAN1 communication function interrupt */

/*------------------------------------------------------
     iio6ir
------------------------------------------------------*/
union byte_def iio6ir_addr;
#define    iio6ir   iio6ir_addr.byte
                                            /* (b1-b0) - */
#define    po20r    iio6ir_addr.bit.b2    /* II/O waveform generation function 0 interrupt */
                                            /* (b3) - */
#define    sio2tr   iio6ir_addr.bit.b4    /* II/O communication unit 2 transmit interrupt */
                                            /* (b5) - */

/*------------------------------------------------------
     iio7ir
------------------------------------------------------*/
union byte_def iio7ir_addr;
#define    iio7ir   iio7ir_addr.byte
                                            /* (b1-b0) - */
#define    po22r    iio7ir_addr.bit.b2    /* II/O waveform generation function 2 interrupt */
                                            /* (b6-b3) - */
#define    ie0r     iio7ir_addr.bit.b7

/*------------------------------------------------------
     iio8ir
------------------------------------------------------*/
union byte_def iio8ir_addr;
#define    iio8ir   iio8ir_addr.byte
                                            /* (b0) - */
#define    tm11r    iio8ir_addr.bit.b1    /* II/O time measurement 1 interrupt */
#define    po11r    iio8ir_addr.bit.b1    /* II/O waveform generation function 1 interrupt */
#define    po23r    iio8ir_addr.bit.b2    /* II/O waveform generation function 3 interrupt */
                                            /* (b3) - */
#define    bt2r     iio8ir_addr.bit.b1    /* II/O communication base timer 2 interrupt */
                                            /* (b5) - */
#define    ie2r     iio7ir_addr.bit.b6
#define    ie1r     iio7ir_addr.bit.b7

/*------------------------------------------------------
     iio9ir
------------------------------------------------------*/
union byte_def iio9ir_addr;
#define    iio9ir   iio9ir_addr.byte
                                            /* (b0) - */
#define    tm15r    iio9ir_addr.bit.b1    /* II/O time measurement 5 interrupt */
#define    po15r    iio9ir_addr.bit.b1    /* II/O waveform generation function 5 interrupt */
#define    po24r    iio9ir_addr.bit.b2    /* II/O waveform generation function 4 interrupt */
                                            /* (b4-b3) - */
#define    u6rr     iio9ir_addr.bit.b5
#define    int6r    iio9ir_addr.bit.b6
#define    can00r   iio9ir_addr.bit.b7    /* CAN0 communication function interrupt */

/*------------------------------------------------------
     iio10ir
------------------------------------------------------*/
union byte_def iio10ir_addr;
#define    iio10ir  iio10ir_addr.byte
                                            /* (b0) - */
#define    tm16r    iio10ir_addr.bit.b1   /* II/O time measurement 6 interrupt */
#define    po16r    iio10ir_addr.bit.b1   /* II/O waveform generation function 6 interrupt */
#define    po25r    iio10ir_addr.bit.b2    /* II/O waveform generation function 5 interrupt */
                                            /* (b4-b3) - */
#define    u6tr     iio10ir_addr.bit.b5
#define    int7r    iio10ir_addr.bit.b6
#define    can01r   iio10ir_addr.bit.b7   /* CAN0 communication function interrupt */

/*------------------------------------------------------
     iio11ir
------------------------------------------------------*/
union byte_def iio11ir_addr;
#define    iio11ir  iio11ir_addr.byte
                                            /* (b0) - */
                                            /* (b6-b1) - */
#define    po26r    iio11ir_addr.bit.b2    /* II/O waveform generation function 6 interrupt */
                                            /* (b5-b3) - */
#define    int8r    iio11ir_addr.bit.b6
#define    can02r   iio11ir_addr.bit.b7   /* CAN0 communication function interrupt */

/*------------------------------------------------------
        Interrupt Enable Register
------------------------------------------------------*/

/*------------------------------------------------------
     iio0ie
------------------------------------------------------*/
union byte_def iio0ie_addr;
#define    iio0ie   iio0ie_addr.byte
#define    irlt_iio0ie  iio0ie_addr.bit.b0    /* Interrupt request select bit */
                                                /* (b1) - */
#define    tm13e        iio0ie_addr.bit.b2    /* II/O time measurement 3 interrupt */
#define    po13e        iio0ie_addr.bit.b2    /* II/O waveform generation function 3 interrupt */
                                                /* (b3) - */
#define    g0rie        iio0ie_addr.bit.b4    /* II/O communication unit 0 HDLC data processing function interrupt */
#define    sio0re       iio0ie_addr.bit.b5    /* II/O communication unit 0 receive interrupt */
#define    u5re         iio0ie_addr.bit.b6
#define    can10e       iio0ie_addr.bit.b7    /* CAN1 communication function interrupt */

/*------------------------------------------------------
     iio1ie
------------------------------------------------------*/
union byte_def iio1ie_addr;
#define    iio1ie       iio1ie_addr.byte
#define    irlt_iio1ie  iio1ie_addr.bit.b0    /* Interrupt request select bit */
                                                /* (b1) - */
#define    tm14e        iio1ie_addr.bit.b2    /* II/O time measurement 4 interrupt */
#define    po14e        iio1ie_addr.bit.b2    /* II/O waveform generation function 4 interrupt */
                                                /* (b3) - */
#define    g0toe        iio1ie_addr.bit.b4    /* II/O communication unit 0 HDLC data processing function interrupt */
#define    sio0te       iio1ie_addr.bit.b5    /* II/O communication unit 0 receive interrupt */
#define    u5te         iio1ie_addr.bit.b6
#define    can11e       iio1ie_addr.bit.b7    /* CAN1 communication function interrupt */

/*------------------------------------------------------
     iio2ie
------------------------------------------------------*/
union byte_def iio2ie_addr;
#define    iio2ie       iio2ie_addr.byte
#define    irlt_iio2ie  iio2ie_addr.bit.b0    /* Interrupt request select bit */
                                                /* (b1) - */
#define    tm12e        iio2ie_addr.bit.b2    /* II/O time measurement 2 interrupt */
#define    po12e        iio2ie_addr.bit.b2    /* II/O waveform generation function 2 interrupt */
                                              /* (b3) - */
#define    g1rie        iio2ie_addr.bit.b4    /* II/O communication unit 1 HDLC data processing function interrupt */
#define    sio1re       iio2ie_addr.bit.b5    /* II/O communication unit 1 receive interrupt */
                                                /* (b6) - */
                                                /* (b7) - */

/*------------------------------------------------------
     iio3ie
------------------------------------------------------*/
union byte_def iio3ie_addr;
#define    iio3ie       iio3ie_addr.byte
#define    irlt_iio3ie  iio3ie_addr.bit.b0    /* Interrupt request select bit */
                                                /* (b1) - */
#define    tm10e        iio3ie_addr.bit.b2    /* II/O time measurement 0 interrupt */
#define    po10e        iio3ie_addr.bit.b2    /* II/O waveform generation function 0 interrupt */
#define    po27e        iio3ie_addr.bit.b3    /* II/O waveform generation function 7 interrupt */
#define    g1toe        iio3ie_addr.bit.b4    /* II/O communication unit 1 HDLC data processing function interrupt */
#define    sio1te       iio3ie_addr.bit.b5    /* II/O communication unit 0 transmit interrupt */
                                                /* (b6) - */
                                                /* (b7) - */

/*------------------------------------------------------
     iio4ie
------------------------------------------------------*/
union byte_def iio4ie_addr;
#define    iio4ie       iio4ie_addr.byte
#define    irlt_iio4ie  iio4ie_addr.bit.b0    /* Interrupt request select bit */
                                                /* (b1) - */
#define    tm17e        iio4ie_addr.bit.b2    /* II/O time measurement 7 interrupt */
#define    po17e        iio4ie_addr.bit.b2    /* II/O waveform generation function 7 interrupt */
                                              /* (b3) - */
#define    bt1e         iio4ie_addr.bit.b4    /* II/O communication base timer interrupt */
                                              /* (b5) - */
#define    srt1e        iio4ie_addr.bit.b6    /* II/O special communication function interrupt */
#define    srt0e        iio4ie_addr.bit.b7    /* II/O special communication function interrupt */

/*------------------------------------------------------
     iio5ie
------------------------------------------------------*/
union byte_def iio5ie_addr;
#define    iio5ie       iio5ie_addr.byte

#define    irlt_iio5ie  iio5ie_addr.bit.b0    /* Interrupt request select bit */
                                                /* (b1) - */
#define    po21e        iio5ie_addr.bit.b2    /* II/O waveform generation function 1 interrupt */
                                                /* (b3) - */
#define    sio2re       iio5ie_addr.bit.b4    /* II/O communication unit 2 receive interrupt */
                                                /* (b5-b1) - */
#define    can1wue      iio5ie_addr.bit.b6    /* CAN1 wake-up interrupt */
#define    can12e       iio5ie_addr.bit.b7    /* CAN1 communication function interrupt */

/*------------------------------------------------------
     iio6ie
------------------------------------------------------*/
union byte_def iio6ie_addr;
#define    iio6ie       iio6ie_addr.byte

#define    irlt_iio6ie  iio6ie_addr.bit.b0    /* Interrupt request select bit */
                                                /* (b1) - */
#define    po20e        iio6ie_addr.bit.b2    /* II/O waveform generation function 0 interrupt */
                                                /* (b3) - */
#define    sio2te       iio6ie_addr.bit.b4    /* II/O communication unit 2 transmit interrupt */
                                                /* (b7-b5) - */

/*------------------------------------------------------
     iio7ie
------------------------------------------------------*/
union byte_def iio7ie_addr;
#define    iio7ie       iio7ie_addr.byte

#define    irlt_iio7ie  iio7ie_addr.bit.b0    /* Interrupt request select bit */
                                                /* (b1) - */
#define    po22e        iio7ie_addr.bit.b2    /* II/O waveform generation function 2 interrupt */
                                                /* (b6-b3) - */
#define    ie0e         iio7ie_addr.bit.b7

/*------------------------------------------------------
     iio8ie
------------------------------------------------------*/
union byte_def iio8ie_addr;
#define    iio8ie       iio8ie_addr.byte
#define    irlt_iio8ie  iio8ie_addr.bit.b0    /* Interrupt request select bit */
#define    tm11e        iio8ie_addr.bit.b1    /* II/O time measurement 1 interrupt */
#define    po11e        iio8ie_addr.bit.b1    /* II/O waveform generation function 1 interrupt */
#define    po23e        iio8ie_addr.bit.b2    /* II/O waveform generation function 3 interrupt */
                                                /* (b3) - */
#define    bt2e         iio8ie_addr.bit.b4    /* II/O communication base timer 2 interrupt */
                                                /* (b5) - */
#define    ie2e         iio8ie_addr.bit.b6
#define    ie1e         iio8ie_addr.bit.b7

/*------------------------------------------------------
     iio9ie
------------------------------------------------------*/
union byte_def iio9ie_addr;
#define    iio9ie       iio9ie_addr.byte
#define    irlt_iio9ie  iio9ie_addr.bit.b0    /* Interrupt request select bit */
#define    tm15e        iio9ie_addr.bit.b1    /* II/O time measurement 5 interrupt */
#define    po15e        iio9ie_addr.bit.b1    /* II/O waveform generation function 5 interrupt */
#define    po24e        iio9ie_addr.bit.b2    /* II/O waveform generation function 4 interrupt */
                                              /* (b4-b3) - */
#define    u6re         iio9ie_addr.bit.b5
#define    int6e        iio9ie_addr.bit.b6
#define    can00e       iio9ie_addr.bit.b7    /* CAN0 communication function interrupt */

/*------------------------------------------------------
     iio10ie
------------------------------------------------------*/
union byte_def iio10ie_addr;
#define    iio10ie      iio10ie_addr.byte
#define    irlt_iio10ie iio10ie_addr.bit.b0   /* Interrupt request select bit */
#define    tm16e        iio10ie_addr.bit.b1   /* II/O time measurement 6 interrupt */
#define    po16e        iio10ie_addr.bit.b1   /* II/O waveform generation function 6 interrupt */
#define    po25e        iio10ie_addr.bit.b2   /* II/O waveform generation function 5 interrupt */
                                                /* (b4-b3) - */
#define    u6te         iio10ie_addr.bit.b5
#define    int7e        iio10ie_addr.bit.b6
#define    can01e       iio10ie_addr.bit.b7   /* CAN0 communication function interrupt */

/*------------------------------------------------------
     iio11ie
------------------------------------------------------*/
union byte_def iio11ie_addr;
#define    iio11ie      iio11ie_addr.byte
#define    irlt_iio11ie iio11ie_addr.bit.b0   /* Interrupt request select bit */
#define    po26e        iio11ie_addr.bit.b2   /* II/O waveform generation function 6 interrupt */
                                                /* (b5-b3) - */
#define    int8e        iio11ie_addr.bit.b6
#define    can02e       iio11ie_addr.bit.b7   /* CAN0 communication function interrupt */

/*------------------------------------------------------
    Timer mode registers
------------------------------------------------------*/

/*------------------------------------------------------
     ta0mr
------------------------------------------------------*/
union byte_def ta0mr_addr;
#define     ta0mr       ta0mr_addr.byte

#define     tmod0_ta0mr     ta0mr_addr.bit.b0
#define     tmod1_ta0mr     ta0mr_addr.bit.b1
#define     mr1_ta0mr       ta0mr_addr.bit.b3
#define     mr2_ta0mr       ta0mr_addr.bit.b4
#define     mr3_ta0mr       ta0mr_addr.bit.b5
#define     tck0_ta0mr      ta0mr_addr.bit.b6
#define     tck1_ta0mr      ta0mr_addr.bit.b7

/*------------------------------------------------------
     ta1mr
------------------------------------------------------*/
union byte_def ta1mr_addr;
#define     ta1mr       ta1mr_addr.byte

#define     tmod0_ta1mr     ta1mr_addr.bit.b0
#define     tmod1_ta1mr     ta1mr_addr.bit.b1
#define     mr1_ta1mr       ta1mr_addr.bit.b3
#define     mr2_ta1mr       ta1mr_addr.bit.b4
#define     mr3_ta1mr       ta1mr_addr.bit.b5
#define     tck0_ta1mr      ta1mr_addr.bit.b6
#define     tck1_ta1mr      ta1mr_addr.bit.b7

/*------------------------------------------------------
     ta2mr
------------------------------------------------------*/
union byte_def ta2mr_addr;
#define     ta2mr       ta2mr_addr.byte

#define     tmod0_ta2mr     ta2mr_addr.bit.b0
#define     tmod1_ta2mr     ta2mr_addr.bit.b1
#define     mr1_ta2mr       ta2mr_addr.bit.b3
#define     mr2_ta2mr       ta2mr_addr.bit.b4
#define     mr3_ta2mr       ta2mr_addr.bit.b5
#define     tck0_ta2mr      ta2mr_addr.bit.b6
#define     tck1_ta2mr      ta2mr_addr.bit.b7

/*------------------------------------------------------
     ta3mr
------------------------------------------------------*/
union byte_def ta3mr_addr;
#define     ta3mr       ta3mr_addr.byte

#define     tmod0_ta3mr     ta3mr_addr.bit.b0
#define     tmod1_ta3mr     ta3mr_addr.bit.b1
#define     mr1_ta3mr       ta3mr_addr.bit.b3
#define     mr2_ta3mr       ta3mr_addr.bit.b4
#define     mr3_ta3mr       ta3mr_addr.bit.b5
#define     tck0_ta3mr      ta3mr_addr.bit.b6
#define     tck1_ta3mr      ta3mr_addr.bit.b7

/*------------------------------------------------------
     ta4mr
------------------------------------------------------*/
union byte_def ta4mr_addr;
#define     ta4mr       ta4mr_addr.byte

#define     tmod0_ta4mr     ta4mr_addr.bit.b0
#define     tmod1_ta4mr     ta4mr_addr.bit.b1
#define     mr1_ta4mr       ta4mr_addr.bit.b3
#define     mr2_ta4mr       ta4mr_addr.bit.b4
#define     mr3_ta4mr       ta4mr_addr.bit.b5
#define     tck0_ta4mr      ta4mr_addr.bit.b6
#define     tck1_ta4mr      ta4mr_addr.bit.b7

/*------------------------------------------------------
     tb0mr
 ------------------------------------------------------*/
union byte_def tb0mr_addr;
#define     tb0mr       tb0mr_addr.byte

#define     tmod0_tb0mr     tb0mr_addr.bit.b0
#define     tmod1_tb0mr     tb0mr_addr.bit.b1
#define     mr0_tb0mr       tb0mr_addr.bit.b2
#define     mr1_tb0mr       tb0mr_addr.bit.b3
#define     mr2_tb0mr       tb0mr_addr.bit.b4
#define     mr3_tb0mr       tb0mr_addr.bit.b5
#define     tck0_tb0mr      tb0mr_addr.bit.b6
#define     tck1_tb0mr      tb0mr_addr.bit.b7

/*------------------------------------------------------
     tb1mr
------------------------------------------------------*/
union byte_def tb1mr_addr;
#define     tb1mr       tb1mr_addr.byte

#define     tmod0_tb1mr     tb1mr_addr.bit.b0
#define     tmod1_tb1mr     tb1mr_addr.bit.b1
#define     mr0_tb1mr       tb1mr_addr.bit.b2
#define     mr1_tb1mr       tb1mr_addr.bit.b3
#define     mr2_tb1mr       tb1mr_addr.bit.b4
#define     mr3_tb1mr       tb1mr_addr.bit.b5
#define     tck0_tb1mr      tb1mr_addr.bit.b6
#define     tck1_tb1mr      tb1mr_addr.bit.b7

/*------------------------------------------------------
     tb2mr
------------------------------------------------------*/
union byte_def tb2mr_addr;
#define     tb2mr       tb2mr_addr.byte

#define     tmod0_tb2mr     tb2mr_addr.bit.b0
#define     tmod1_tb2mr     tb2mr_addr.bit.b1
#define     mr0_tb2mr       tb2mr_addr.bit.b2
#define     mr1_tb2mr       tb2mr_addr.bit.b3
#define     mr2_tb2mr       tb2mr_addr.bit.b4
#define     mr3_tb2mr       tb2mr_addr.bit.b5
#define     tck0_tb2mr      tb2mr_addr.bit.b6
#define     tck1_tb2mr      tb2mr_addr.bit.b7

/*------------------------------------------------------
     tb3mr
------------------------------------------------------*/
union byte_def tb3mr_addr;
#define     tb3mr       tb3mr_addr.byte

#define     tmod0_tb3mr     tb3mr_addr.bit.b0
#define     tmod1_tb3mr     tb3mr_addr.bit.b1
#define     mr0_tb3mr       tb3mr_addr.bit.b2
#define     mr1_tb3mr       tb3mr_addr.bit.b3
#define     mr2_tb3mr       tb3mr_addr.bit.b4
#define     mr3_tb3mr       tb3mr_addr.bit.b5
#define     tck0_tb3mr      tb3mr_addr.bit.b6
#define     tck1_tb3mr      tb3mr_addr.bit.b7

/*------------------------------------------------------
     tb4mr
------------------------------------------------------*/
union byte_def tb4mr_addr;
#define     tb4mr       tb4mr_addr.byte

#define     tmod0_tb4mr     tb4mr_addr.bit.b0
#define     tmod1_tb4mr     tb4mr_addr.bit.b1
#define     mr0_tb4mr       tb4mr_addr.bit.b2
#define     mr1_tb4mr       tb4mr_addr.bit.b3
#define     mr2_tb4mr       tb4mr_addr.bit.b4
#define     mr3_tb4mr       tb4mr_addr.bit.b5
#define     tck0_tb4mr      tb4mr_addr.bit.b6
#define     tck1_tb4mr      tb4mr_addr.bit.b7

/*------------------------------------------------------
     tb5mr
------------------------------------------------------*/
union byte_def tb5mr_addr;
#define     tb5mr       tb5mr_addr.byte

#define     tmod0_tb5mr     tb5mr_addr.bit.b0
#define     tmod1_tb5mr     tb5mr_addr.bit.b1
#define     mr0_tb5mr       tb5mr_addr.bit.b2
#define     mr1_tb5mr       tb5mr_addr.bit.b3
#define     mr2_tb5mr       tb5mr_addr.bit.b4
#define     mr3_tb5mr       tb5mr_addr.bit.b5
#define     tck0_tb5mr      tb5mr_addr.bit.b6
#define     tck1_tb5mr      tb5mr_addr.bit.b7

/*------------------------------------------------------
    UARTi transmit/receive mode registers
------------------------------------------------------*/

/*------------------------------------------------------
     u0mr
------------------------------------------------------*/
union byte_def u0mr_addr;
#define     u0mr        u0mr_addr.byte

#define     smd0_u0mr   u0mr_addr.bit.b0  /* Serial I/O mode select bit */
#define     smd1_u0mr   u0mr_addr.bit.b1  /* Serial I/O mode select bit */
#define     smd2_u0mr   u0mr_addr.bit.b2  /* Serial I/O mode select bit */
#define     ckdir_u0mr  u0mr_addr.bit.b3  /* Internal/external clock select bit */
#define     stps_u0mr   u0mr_addr.bit.b4  /* Stop bit length select bit */
#define     pry_u0mr    u0mr_addr.bit.b5  /* Odd/even parity select bit */
#define     prye_u0mr   u0mr_addr.bit.b6  /* Parity enable bit */
#define     iopol_u0mr  u0mr_addr.bit.b7  /* TxD RxD I/O polarity switch bit */

/*------------------------------------------------------
     u1mr
------------------------------------------------------*/
union byte_def u1mr_addr;
#define     u1mr        u1mr_addr.byte

#define     smd0_u1mr   u1mr_addr.bit.b0
#define     smd1_u1mr   u1mr_addr.bit.b1
#define     smd2_u1mr   u1mr_addr.bit.b2
#define     ckdir_u1mr  u1mr_addr.bit.b3
#define     stps_u1mr   u1mr_addr.bit.b4
#define     pry_u1mr    u1mr_addr.bit.b5
#define     prye_u1mr   u1mr_addr.bit.b6
#define     iopol_u1mr  u1mr_addr.bit.b7

/*------------------------------------------------------
     u2mr
------------------------------------------------------*/
union byte_def u2mr_addr;
#define     u2mr        u2mr_addr.byte

#define     smd0_u2mr   u2mr_addr.bit.b0
#define     smd1_u2mr   u2mr_addr.bit.b1
#define     smd2_u2mr   u2mr_addr.bit.b2
#define     ckdir_u2mr  u2mr_addr.bit.b3
#define     stps_u2mr   u2mr_addr.bit.b4
#define     pry_u2mr    u2mr_addr.bit.b5
#define     prye_u2mr   u2mr_addr.bit.b6
#define     iopol_u2mr  u2mr_addr.bit.b7

/*------------------------------------------------------
     u3mr
------------------------------------------------------*/
union byte_def u3mr_addr;
#define     u3mr        u3mr_addr.byte

#define     smd0_u3mr   u3mr_addr.bit.b0
#define     smd1_u3mr   u3mr_addr.bit.b1
#define     smd2_u3mr   u3mr_addr.bit.b2
#define     ckdir_u3mr  u3mr_addr.bit.b3
#define     stps_u3mr   u3mr_addr.bit.b4
#define     pry_u3mr    u3mr_addr.bit.b5
#define     prye_u3mr   u3mr_addr.bit.b6
#define     iopol_u3mr  u3mr_addr.bit.b7

/*------------------------------------------------------
     u4mr
------------------------------------------------------*/
union byte_def u4mr_addr;
#define     u4mr        u4mr_addr.byte

#define     smd0_u4mr   u4mr_addr.bit.b0
#define     smd1_u4mr   u4mr_addr.bit.b1
#define     smd2_u4mr   u4mr_addr.bit.b2
#define     ckdir_u4mr  u4mr_addr.bit.b3
#define     stps_u4mr   u4mr_addr.bit.b4
#define     pry_u4mr    u4mr_addr.bit.b5
#define     prye_u4mr   u4mr_addr.bit.b6
#define     iopol_u4mr  u4mr_addr.bit.b7

/*------------------------------------------------------
     u5mr
------------------------------------------------------*/
union byte_def u5mr_addr;
#define     u5mr        u5mr_addr.byte

#define     smd0_u5mr   u5mr_addr.bit.b0
#define     smd1_u5mr   u5mr_addr.bit.b1
#define     smd2_u5mr   u5mr_addr.bit.b2
#define     ckdir_u5mr  u5mr_addr.bit.b3
#define     stps_u5mr   u5mr_addr.bit.b4
#define     pry_u5mr    u5mr_addr.bit.b5
#define     prye_u5mr   u5mr_addr.bit.b6

/*------------------------------------------------------
     u6mr
------------------------------------------------------*/
union byte_def u6mr_addr;
#define     u6mr        u6mr_addr.byte

#define     smd0_u6mr   u6mr_addr.bit.b0
#define     smd1_u6mr   u6mr_addr.bit.b1
#define     smd2_u6mr   u6mr_addr.bit.b2
#define     ckdir_u6mr  u6mr_addr.bit.b3
#define     stps_u6mr   u6mr_addr.bit.b4
#define     pry_u6mr    u6mr_addr.bit.b5
#define     prye_u6mr   u6mr_addr.bit.b6

/*------------------------------------------------------
    UARTi transmit/receive control register 0 (i=0,1,2,3,4)
------------------------------------------------------*/

/*------------------------------------------------------
     u0c0
------------------------------------------------------*/
union byte_def u0c0_addr;
#define     u0c0        u0c0_addr.byte

#define     clk0_u0c0   u0c0_addr.bit.b0     /* BRG count source select bit */
#define     clk1_u0c0   u0c0_addr.bit.b1     /* BRG count source select bit */
#define     crs_u0c0    u0c0_addr.bit.b2     /* CTS~/RTS~ function select bit */
#define     txept_u0c0  u0c0_addr.bit.b3     /* Transmit register empty flag */
#define     crd_u0c0    u0c0_addr.bit.b4     /* CTS~/RTS~ disable bit */
#define     nch_u0c0    u0c0_addr.bit.b5     /* Data output select bit */
#define     ckpol_u0c0  u0c0_addr.bit.b6     /* CLK polarity select bit */
#define     uform_u0c0  u0c0_addr.bit.b7     /* Transfer format select bit */

/*------------------------------------------------------
     u1c0
------------------------------------------------------*/
union byte_def u1c0_addr;
#define     u1c0        u1c0_addr.byte

#define     clk0_u1c0   u1c0_addr.bit.b0
#define     clk1_u1c0   u1c0_addr.bit.b1
#define     crs_u1c0    u1c0_addr.bit.b2
#define     txept_u1c0  u1c0_addr.bit.b3
#define     crd_u1c0    u1c0_addr.bit.b4
#define     nch_u1c0    u1c0_addr.bit.b5
#define     ckpol_u1c0  u1c0_addr.bit.b6
#define     uform_u1c0  u1c0_addr.bit.b7

/*------------------------------------------------------
     u2c0
------------------------------------------------------*/
union byte_def u2c0_addr;
#define     u2c0        u2c0_addr.byte

#define     clk0_u2c0   u2c0_addr.bit.b0
#define     clk1_u2c0   u2c0_addr.bit.b1
#define     crs_u2c0    u2c0_addr.bit.b2
#define     txept_u2c0  u2c0_addr.bit.b3
#define     crd_u2c0    u2c0_addr.bit.b4
#define     ckpol_u2c0  u2c0_addr.bit.b6
#define     uform_u2c0  u2c0_addr.bit.b7

/*------------------------------------------------------
     u3c0
------------------------------------------------------*/
union byte_def u3c0_addr;
#define     u3c0        u3c0_addr.byte

#define     clk0_u3c0   u3c0_addr.bit.b0
#define     clk1_u3c0   u3c0_addr.bit.b1
#define     crs_u3c0    u3c0_addr.bit.b2
#define     txept_u3c0  u3c0_addr.bit.b3
#define     crd_u3c0    u3c0_addr.bit.b4
#define     nch_u3c0    u3c0_addr.bit.b5
#define     ckpol_u3c0  u3c0_addr.bit.b6
#define     uform_u3c0  u3c0_addr.bit.b7

/*------------------------------------------------------
     u4c0
------------------------------------------------------*/
union byte_def u4c0_addr;
#define     u4c0        u4c0_addr.byte

#define     clk0_u4c0   u4c0_addr.bit.b0
#define     clk1_u4c0   u4c0_addr.bit.b1
#define     crs_u4c0    u4c0_addr.bit.b2
#define     txept_u4c0  u4c0_addr.bit.b3
#define     crd_u4c0    u4c0_addr.bit.b4
#define     nch_u4c0    u4c0_addr.bit.b5
#define     ckpol_u4c0  u4c0_addr.bit.b6
#define     uform_u4c0  u4c0_addr.bit.b7

/*------------------------------------------------------
     u5c0
------------------------------------------------------*/
union byte_def u5c0_addr;
#define     u5c0        u5c0_addr.byte

#define     clk0_u5c0   u5c0_addr.bit.b0
#define     clk1_u5c0   u5c0_addr.bit.b1
#define     crs_u5c0    u5c0_addr.bit.b2
#define     txept_u5c0  u5c0_addr.bit.b3
#define     crd_u5c0    u5c0_addr.bit.b4
#define     nch_u5c0    u5c0_addr.bit.b5
#define     ckpol_u5c0  u5c0_addr.bit.b6
#define     uform_u5c0  u5c0_addr.bit.b7

/*------------------------------------------------------
     u6c0
------------------------------------------------------*/
union byte_def u6c0_addr;
#define     u6c0        u6c0_addr.byte

#define     clk0_u6c0   u6c0_addr.bit.b0
#define     clk1_u6c0   u6c0_addr.bit.b1
#define     crs_u6c0    u6c0_addr.bit.b2
#define     txept_u6c0  u6c0_addr.bit.b3
#define     crd_u6c0    u6c0_addr.bit.b4
#define     nch_u6c0    u6c0_addr.bit.b5
#define     ckpol_u6c0  u6c0_addr.bit.b6
#define     uform_u6c0  u6c0_addr.bit.b7

/*------------------------------------------------------
    UARTi receive buffer register (i=0,1,2,3,4)
------------------------------------------------------*/

/*------------------------------------------------------
     u0rb
------------------------------------------------------*/
#define     u0rb        u0rb_addr.word
#define     u0rbl       u0rb_addr.byte.low
#define     u0rbh       u0rb_addr.byte.high

#define     abt_u0rb    u0rb_addr.bit.b11           /* Arbitration lost detect flag */
#define     oer_u0rb    u0rb_addr.bit.b12           /* Overrun error flag */
#define     fer_u0rb    u0rb_addr.bit.b13           /* Framing error flag */
#define     per_u0rb    u0rb_addr.bit.b14           /* Parity error flag */
#define     sum_u0rb    u0rb_addr.bit.b15           /* Error sum flag */

/*------------------------------------------------------
     u1rb
------------------------------------------------------*/
#define     u1rb        u1rb_addr.word
#define     u1rbl       u1rb_addr.byte.low
#define     u1rbh       u1rb_addr.byte.high

#define     abt_u1rb    u1rb_addr.bit.b11
#define     oer_u1rb    u1rb_addr.bit.b12
#define     fer_u1rb    u1rb_addr.bit.b13
#define     per_u1rb    u1rb_addr.bit.b14
#define     sum_u1rb    u1rb_addr.bit.b15

/*------------------------------------------------------
     u2rb
------------------------------------------------------*/
#define     u2rb        u2rb_addr.word
#define     u2rbl       u2rb_addr.byte.low
#define     u2rbh       u2rb_addr.byte.high

#define     abt_u2rb    u2rb_addr.bit.b11
#define     oer_u2rb    u2rb_addr.bit.b12
#define     fer_u2rb    u2rb_addr.bit.b13
#define     per_u2rb    u2rb_addr.bit.b14
#define     sum_u2rb    u2rb_addr.bit.b15

/*------------------------------------------------------
     u3rb
------------------------------------------------------*/
#define     u3rb        u3rb_addr.word
#define     u3rbl       u3rb_addr.byte.low
#define     u3rbh       u3rb_addr.byte.high

#define     abt_u3rb    u3rb_addr.bit.b11
#define     oer_u3rb    u3rb_addr.bit.b12
#define     fer_u3rb    u3rb_addr.bit.b13
#define     per_u3rb    u3rb_addr.bit.b14
#define     sum_u3rb    u3rb_addr.bit.b15

/*------------------------------------------------------
     u4rb
------------------------------------------------------*/
#define     u4rb        u4rb_addr.word
#define     u4rbl       u4rb_addr.byte.low
#define     u4rbh       u4rb_addr.byte.high

#define     abt_u4rb    u4rb_addr.bit.b11
#define     oer_u4rb    u4rb_addr.bit.b12
#define     fer_u4rb    u4rb_addr.bit.b13
#define     per_u4rb    u4rb_addr.bit.b14
#define     sum_u4rb    u4rb_addr.bit.b15

/*------------------------------------------------------
     u5rb
------------------------------------------------------*/
#define     u5rb        u5rb_addr.word
#define     u5rbl       u5rb_addr.byte.low
#define     u5rbh       u5rb_addr.byte.high

#define     oer_u5rb    u5rb_addr.bit.b12
#define     fer_u5rb    u5rb_addr.bit.b13
#define     per_u5rb    u5rb_addr.bit.b14
#define     sum_u5rb    u5rb_addr.bit.b15

/*------------------------------------------------------
     u6rb
------------------------------------------------------*/
#define     u6rb        u6rb_addr.word
#define     u6rbl       u6rb_addr.byte.low
#define     u6rbh       u6rb_addr.byte.high

#define     oer_u6rb    u6rb_addr.bit.b12
#define     fer_u6rb    u6rb_addr.bit.b13
#define     per_u6rb    u6rb_addr.bit.b14
#define     sum_u6rb    u6rb_addr.bit.b15

/*------------------------------------------------------
    UARTi (i= 0,1,2,3,4) special mode registers
------------------------------------------------------*/

/*------------------------------------------------------
     u0smr
------------------------------------------------------*/
union byte_def u0smr_addr;
#define     u0smr       u0smr_addr.byte

#define     iicm_u0smr      u0smr_addr.bit.b0    /* IIC mode select bit */
#define     abc_u0smr       u0smr_addr.bit.b1    /* Arbitration lost detect flag control bit */
#define     bbs_u0smr       u0smr_addr.bit.b2    /* Bus busy flag */
#define     lsyn_u0smr      u0smr_addr.bit.b3    /* SCLL sync output enable bit */
#define     abscs_u0smr     u0smr_addr.bit.b4    /* Bus conflict detect sampling clock select bit */
#define     acse_u0smr      u0smr_addr.bit.b5    /* Auto clear function select bit for transmit enable bit */
#define     sss_u0smr       u0smr_addr.bit.b6    /* Transmit start condition select bit */
#define     sclkdiv_u0smr   u0smr_addr.bit.b7    /* Clock divide synchronous bit */

/*------------------------------------------------------
     u1smr
------------------------------------------------------*/
union byte_def u1smr_addr;
#define     u1smr       u1smr_addr.byte

#define     iicm_u1smr      u1smr_addr.bit.b0 
#define     abc_u1smr       u1smr_addr.bit.b1
#define     bbs_u1smr       u1smr_addr.bit.b2
#define     lsyn_u1smr      u1smr_addr.bit.b3
#define     abscs_u1smr     u1smr_addr.bit.b4
#define     acse_u1smr      u1smr_addr.bit.b5
#define     sss_u1smr       u1smr_addr.bit.b6
#define     sclkdiv_u1smr   u1smr_addr.bit.b7

/*------------------------------------------------------
     u2smr
------------------------------------------------------*/
union byte_def u2smr_addr;
#define     u2smr       u2smr_addr.byte

#define     iicm_u2smr      u2smr_addr.bit.b0 
#define     abc_u2smr       u2smr_addr.bit.b1
#define     bbs_u2smr       u2smr_addr.bit.b2
#define     lsyn_u2smr      u2smr_addr.bit.b3
#define     abscs_u2smr     u2smr_addr.bit.b4
#define     acse_u2smr      u2smr_addr.bit.b5
#define     sss_u2smr       u2smr_addr.bit.b6
#define     sclkdiv_u2smr   u2smr_addr.bit.b7

/*------------------------------------------------------
     u3smr
------------------------------------------------------*/
union byte_def u3smr_addr;
#define     u3smr       u3smr_addr.byte

#define     iicm_u3smr      u3smr_addr.bit.b0
#define     abc_u3smr       u3smr_addr.bit.b1
#define     bbs_u3smr       u3smr_addr.bit.b2
#define     lsyn_u3smr      u3smr_addr.bit.b3
#define     abscs_u3smr     u3smr_addr.bit.b4
#define     acse_u3smr      u3smr_addr.bit.b5
#define     sss_u3smr       u3smr_addr.bit.b6
#define     sclkdiv_u3smr   u3smr_addr.bit.b7

/*------------------------------------------------------
     u4smr
------------------------------------------------------*/
union byte_def u4smr_addr;
#define     u4smr       u4smr_addr.byte

#define     iicm_u4smr      u4smr_addr.bit.b0
#define     abc_u4smr       u4smr_addr.bit.b1
#define     bbs_u4smr       u4smr_addr.bit.b2
#define     lsyn_u4smr      u4smr_addr.bit.b3
#define     abscs_u4smr     u4smr_addr.bit.b4
#define     acse_u4smr      u4smr_addr.bit.b5
#define     sss_u4smr       u4smr_addr.bit.b6
#define     sclkdiv_u4smr   u4smr_addr.bit.b7

/*------------------------------------------------------
    UARTi (i=0,1,2,3,4) special mode register 2
------------------------------------------------------*/

/*------------------------------------------------------
     u0smr2
------------------------------------------------------*/
union byte_def u0smr2_addr;
#define     u0smr2      u0smr2_addr.byte

#define     iicm2_u0smr2    u0smr2_addr.bit.b0   /* IIC mode select bit2 */
#define     csc_u0smr2      u0smr2_addr.bit.b1   /* Clock synchronous bit */
#define     swc_u0smr2      u0smr2_addr.bit.b2   /* SCL wait output bit */
#define     als_u0smr2      u0smr2_addr.bit.b3   /* SDA output stop bit */
#define     stc_u0smr2      u0smr2_addr.bit.b4   /* UARTi initialize bit */
#define     swc2_u0smr2     u0smr2_addr.bit.b5   /* SCL wait output bit2 */
#define     sdhi_u0smr2     u0smr2_addr.bit.b6   /* SDA output inhibit bit */
#define     su1him_u0smr2   u0smr2_addr.bit.b7   /* External clock synchronous enable bit */


/*------------------------------------------------------
     u1smr2
------------------------------------------------------*/
union byte_def u1smr2_addr;
#define     u1smr2      u1smr2_addr.byte

#define     iicm2_u1smr2    u1smr2_addr.bit.b0
#define     csc_u1smr2      u1smr2_addr.bit.b1
#define     swc_u1smr2      u1smr2_addr.bit.b2
#define     als_u1smr2      u1smr2_addr.bit.b3
#define     stc_u1smr2      u1smr2_addr.bit.b4
#define     swc2_u1smr2     u1smr2_addr.bit.b5
#define     sdhi_u1smr2     u1smr2_addr.bit.b6
#define     su1him_u1smr2   u1smr2_addr.bit.b7

/*------------------------------------------------------
     u2smr2
------------------------------------------------------*/
union byte_def u2smr2_addr;
#define     u2smr2      u2smr2_addr.byte

#define     iicm2_u2smr2    u2smr2_addr.bit.b0
#define     csc_u2smr2      u2smr2_addr.bit.b1
#define     swc_u2smr2      u2smr2_addr.bit.b2
#define     als_u2smr2      u2smr2_addr.bit.b3
#define     stc_u2smr2      u2smr2_addr.bit.b4
#define     swc2_u2smr2     u2smr2_addr.bit.b5
#define     sdhi_u2smr2     u2smr2_addr.bit.b6
#define     su1him_u2smr2   u2smr2_addr.bit.b7

/*------------------------------------------------------
     u3smr2
------------------------------------------------------*/
union byte_def u3smr2_addr;
#define     u3smr2      u3smr2_addr.byte

#define     iicm2_u3smr2    u3smr2_addr.bit.b0
#define     csc_u3smr2      u3smr2_addr.bit.b1
#define     swc_u3smr2      u3smr2_addr.bit.b2
#define     als_u3smr2      u3smr2_addr.bit.b3
#define     stc_u3smr2      u3smr2_addr.bit.b4
#define     swc2_u3smr2     u3smr2_addr.bit.b5
#define     sdhi_u3smr2     u3smr2_addr.bit.b6
#define     su1him_u3smr2   u3smr2_addr.bit.b7

/*------------------------------------------------------
     u4smr2
------------------------------------------------------*/
union byte_def u4smr2_addr;
#define     u4smr2      u4smr2_addr.byte

#define     iicm2_u4smr2    u4smr2_addr.bit.b0
#define     csc_u4smr2      u4smr2_addr.bit.b1
#define     swc_u4smr2      u4smr2_addr.bit.b2
#define     als_u4smr2      u4smr2_addr.bit.b3
#define     stc_u4smr2      u4smr2_addr.bit.b4
#define     swc2_u4smr2     u4smr2_addr.bit.b5
#define     sdhi_u4smr2     u4smr2_addr.bit.b6
#define     su1him_u4smr2   u4smr2_addr.bit.b7

/*------------------------------------------------------
    UARTi (i=0,1,2,3,4) special mode register 3
------------------------------------------------------*/

/*------------------------------------------------------
     u0smr3
------------------------------------------------------*/
union byte_def u0smr3_addr;
#define     u0smr3      u0smr3_addr.byte

#define     sse_u0smr3  u0smr3_addr.bit.b0   /* SS pin function enable bit */
#define     ckph_u0smr3 u0smr3_addr.bit.b1   /* Clock-phase set bit */
#define     dinc_u0smr3 u0smr3_addr.bit.b2   /* Serial input port set bit */
#define     nodc_u0smr3 u0smr3_addr.bit.b3   /* Clock output select bit */
#define     err_u0smr3  u0smr3_addr.bit.b4   /* Fault error flag */
#define     dl0_u0smr3  u0smr3_addr.bit.b5   /* (b7-b5) SDAi digital delay time set bit */
#define     dl1_u0smr3  u0smr3_addr.bit.b6
#define     dl2_u0smr3  u0smr3_addr.bit.b7

/*------------------------------------------------------
     u1smr3
------------------------------------------------------*/
union byte_def u1smr3_addr;
#define     u1smr3      u1smr3_addr.byte

#define     sse_u1smr3  u1smr3_addr.bit.b0
#define     ckph_u1smr3 u1smr3_addr.bit.b1
#define     dinc_u1smr3 u1smr3_addr.bit.b2
#define     nodc_u1smr3 u1smr3_addr.bit.b3
#define     err_u1smr3  u1smr3_addr.bit.b4
#define     dl0_u1smr3  u1smr3_addr.bit.b5
#define     dl1_u1smr3  u1smr3_addr.bit.b6
#define     dl2_u1smr3  u1smr3_addr.bit.b7

/*------------------------------------------------------
     u2smr3
------------------------------------------------------*/
union byte_def u2smr3_addr;
#define     u2smr3      u2smr3_addr.byte

#define     sse_u2smr3  u2smr3_addr.bit.b0
#define     ckph_u2smr3 u2smr3_addr.bit.b1
#define     dinc_u2smr3 u2smr3_addr.bit.b2
#define     nodc_u2smr3 u2smr3_addr.bit.b3
#define     err_u2smr3  u2smr3_addr.bit.b4
#define     dl0_u2smr3  u2smr3_addr.bit.b5
#define     dl1_u2smr3  u2smr3_addr.bit.b6
#define     dl2_u2smr3  u2smr3_addr.bit.b7

/*------------------------------------------------------
     u3smr3
------------------------------------------------------*/
union byte_def u3smr3_addr;
#define     u3smr3      u3smr3_addr.byte

#define     sse_u3smr3  u3smr3_addr.bit.b0
#define     ckph_u3smr3 u3smr3_addr.bit.b1
#define     dinc_u3smr3 u3smr3_addr.bit.b2
#define     nodc_u3smr3 u3smr3_addr.bit.b3
#define     err_u3smr3  u3smr3_addr.bit.b4
#define     dl0_u3smr3  u3smr3_addr.bit.b5
#define     dl1_u3smr3  u3smr3_addr.bit.b6
#define     dl2_u3smr3  u3smr3_addr.bit.b7

/*------------------------------------------------------
     u4smr3
------------------------------------------------------*/
union byte_def u4smr3_addr;
#define     u4smr3      u4smr3_addr.byte

#define     sse_u4smr3  u4smr3_addr.bit.b0
#define     ckph_u4smr3 u4smr3_addr.bit.b1
#define     dinc_u4smr3 u4smr3_addr.bit.b2
#define     nodc_u4smr3 u4smr3_addr.bit.b3
#define     err_u4smr3  u4smr3_addr.bit.b4
#define     dl0_u4smr3  u4smr3_addr.bit.b5
#define     dl1_u4smr3  u4smr3_addr.bit.b6
#define     dl2_u4smr3  u4smr3_addr.bit.b7

/*------------------------------------------------------
    UARTi (i=0,1,2,3,4) special mode register 4
------------------------------------------------------*/

/*------------------------------------------------------
     u0smr4
------------------------------------------------------*/
union byte_def u0smr4_addr;
#define     u0smr4      u0smr4_addr.byte

#define     stareq_u0smr4   u0smr4_addr.bit.b0    /* Start condition generate bit */
#define     rstareq_u0smr4  u0smr4_addr.bit.b1    /* Restart condition generate bit */
#define     stpreq_u0smr4   u0smr4_addr.bit.b2    /* Stop condition generate bit */
#define     stspsel_u0smr4  u0smr4_addr.bit.b3    /* SCL, SDA output select bit */
#define     ackd_u0smr4     u0smr4_addr.bit.b4    /* ACK data bit */
#define     ackc_u0smr4     u0smr4_addr.bit.b5    /* ACK data output enable bit */
#define     sclhi_u0smr4    u0smr4_addr.bit.b6    /* SCL output stop enable bit */
#define     swc9_u0smr4     u0smr4_addr.bit.b7    /* SCL wait output bit */


/*------------------------------------------------------
     u1smr4
------------------------------------------------------*/
union byte_def u1smr4_addr;
#define     u1smr4      u1smr4_addr.byte

#define     stareq_u1smr4   u1smr4_addr.bit.b0
#define     rstareq_u1smr4  u1smr4_addr.bit.b1
#define     stpreq_u1smr4   u1smr4_addr.bit.b2
#define     stspsel_u1smr4  u1smr4_addr.bit.b3
#define     ackd_u1smr4     u1smr4_addr.bit.b4
#define     ackc_u1smr4     u1smr4_addr.bit.b5
#define     sclhi_u1smr4    u1smr4_addr.bit.b6
#define     swc9_u1smr4     u1smr4_addr.bit.b7


/*------------------------------------------------------
     u2smr4
------------------------------------------------------*/
union byte_def u2smr4_addr;
#define     u2smr4      u2smr4_addr.byte

#define     stareq_u2smr4   u2smr4_addr.bit.b0
#define     rstareq_u2smr4  u2smr4_addr.bit.b1
#define     stpreq_u2smr4   u2smr4_addr.bit.b2
#define     stspsel_u2smr4  u2smr4_addr.bit.b3
#define     ackd_u2smr4     u2smr4_addr.bit.b4
#define     ackc_u2smr4     u2smr4_addr.bit.b5
#define     sclhi_u2smr4    u2smr4_addr.bit.b6
#define     swc9_u2smr4     u2smr4_addr.bit.b7


/*------------------------------------------------------
     u3smr4
------------------------------------------------------*/
union byte_def u3smr4_addr;
#define     u3smr4      u3smr4_addr.byte

#define     stareq_u3smr4   u3smr4_addr.bit.b0
#define     rstareq_u3smr4  u3smr4_addr.bit.b1
#define     stpreq_u3smr4   u3smr4_addr.bit.b2
#define     stspsel_u3smr4  u3smr4_addr.bit.b3
#define     ackd_u3smr4     u3smr4_addr.bit.b4
#define     ackc_u3smr4     u3smr4_addr.bit.b5
#define     sclhi_u3smr4    u3smr4_addr.bit.b6
#define     swc9_u3smr4     u3smr4_addr.bit.b7

/*------------------------------------------------------
     u4smr4
------------------------------------------------------*/
union byte_def u4smr4_addr;
#define     u4smr4      u4smr4_addr.byte

#define     stareq_u4smr4   u4smr4_addr.bit.b0
#define     rstareq_u4smr4  u4smr4_addr.bit.b1
#define     stpreq_u4smr4   u4smr4_addr.bit.b2
#define     stspsel_u4smr4  u4smr4_addr.bit.b3
#define     ackd_u4smr4     u4smr4_addr.bit.b4
#define     ackc_u4smr4     u4smr4_addr.bit.b5
#define     sclhi_u4smr4    u4smr4_addr.bit.b6
#define     swc9_u4smr4     u4smr4_addr.bit.b7

/*------------------------------------------------------
    DMAi request factor select register
------------------------------------------------------*/

/*------------------------------------------------------
     dm0sl
------------------------------------------------------*/
union byte_def dm0sl_addr;
#define     dm0sl       dm0sl_addr.byte

#define     dsel0_dm0sl dm0sl_addr.bit.b0         /* DMA request cause select bit */
#define     dsel1_dm0sl dm0sl_addr.bit.b1         /* DMA request cause select bit */
#define     dsel2_dm0sl dm0sl_addr.bit.b2         /* DMA request cause select bit */
#define     dsel3_dm0sl dm0sl_addr.bit.b3         /* DMA request cause select bit */
#define     dsel4_dm0sl dm0sl_addr.bit.b4         /* DMA request cause select bit */
#define     dsr_dm0sl   dm0sl_addr.bit.b5         /* Software DMA request bit */
#define     drq_dm0sl   dm0sl_addr.bit.b7         /* DMA request bit */

/*------------------------------------------------------
     dm1sl
------------------------------------------------------*/
union byte_def dm1sl_addr;
#define     dm1sl       dm1sl_addr.byte

#define     dsel0_dm1sl dm1sl_addr.bit.b0
#define     dsel1_dm1sl dm1sl_addr.bit.b1
#define     dsel2_dm1sl dm1sl_addr.bit.b2
#define     dsel3_dm1sl dm1sl_addr.bit.b3
#define     dsel4_dm1sl dm1sl_addr.bit.b4
#define     dsr_dm1sl   dm1sl_addr.bit.b5
#define     drq_dm1sl   dm1sl_addr.bit.b7

/*------------------------------------------------------
     dm2sl
------------------------------------------------------*/
union byte_def dm2sl_addr;
#define     dm2sl       dm2sl_addr.byte

#define     dsel0_dm2sl dm2sl_addr.bit.b0
#define     dsel1_dm2sl dm2sl_addr.bit.b1
#define     dsel2_dm2sl dm2sl_addr.bit.b2
#define     dsel3_dm2sl dm2sl_addr.bit.b3
#define     dsel4_dm2sl dm2sl_addr.bit.b4
#define     dsr_dm2sl   dm2sl_addr.bit.b5
#define     drq_dm2sl   dm2sl_addr.bit.b7

/*------------------------------------------------------
     dm3sl
------------------------------------------------------*/
union byte_def dm3sl_addr;
#define     dm3sl       dm3sl_addr.byte

#define     dsel0_dm3sl dm3sl_addr.bit.b0
#define     dsel1_dm3sl dm3sl_addr.bit.b1
#define     dsel2_dm3sl dm3sl_addr.bit.b2
#define     dsel3_dm3sl dm3sl_addr.bit.b3
#define     dsel4_dm3sl dm3sl_addr.bit.b4
#define     dsr_dm3sl   dm3sl_addr.bit.b5
#define     drq_dm3sl   dm3sl_addr.bit.b7

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
}rmad0_addr,rmad1_addr,rmad2_addr,rmad3_addr,
 rmad4_addr,rmad5_addr,rmad6_addr,rmad7_addr;
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
#define     rmad4   rmad4_addr.dword        /* Address match interrupt register 4 32 bit */
#define     rmad4l  rmad4_addr.byte.low         /* Address match interrupt register 3 low  8 bit */
#define     rmad4m  rmad4_addr.byte.mid         /* Address match interrupt register 3 mid  8 bit */
#define     rmad4h  rmad4_addr.byte.high        /* Address match interrupt register 3 high 8 bit */
#define     rmad5   rmad5_addr.dword        /* Address match interrupt register 5 32 bit */
#define     rmad5l  rmad5_addr.byte.low         /* Address match interrupt register 3 low  8 bit */
#define     rmad5m  rmad5_addr.byte.mid         /* Address match interrupt register 3 mid  8 bit */
#define     rmad5h  rmad5_addr.byte.high        /* Address match interrupt register 3 high 8 bit */
#define     rmad6   rmad6_addr.dword        /* Address match interrupt register 6 32 bit */
#define     rmad6l  rmad6_addr.byte.low         /* Address match interrupt register 3 low  8 bit */
#define     rmad6m  rmad6_addr.byte.mid         /* Address match interrupt register 3 mid  8 bit */
#define     rmad6h  rmad6_addr.byte.high        /* Address match interrupt register 3 high 8 bit */
#define     rmad7   rmad7_addr.dword        /* Address match interrupt register 7 32 bit */
#define     rmad7l  rmad7_addr.byte.low         /* Address match interrupt register 3 low  8 bit */
#define     rmad7m  rmad7_addr.byte.mid         /* Address match interrupt register 3 mid  8 bit */
#define     rmad7h  rmad7_addr.byte.high        /* Address match interrupt register 3 high 8 bit */


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
}u0tb_addr,u1tb_addr,u2tb_addr,u3tb_addr,u4tb_addr,u5tb_addr,u6tb_addr,crcd_addr,
 ad00_addr,ad01_addr,ad02_addr,ad03_addr,ad04_addr,ad05_addr,ad06_addr,ad07_addr,
 x0r_addr,y0r_addr,x1r_addr,y1r_addr,x2r_addr,y2r_addr,x3r_addr,y3r_addr,x4r_addr,y4r_addr,
 x5r_addr,y5r_addr,x6r_addr,y6r_addr,x7r_addr,y7r_addr,x8r_addr,y8r_addr,
 x9r_addr,y9r_addr,x10r_addr,y10r_addr,x11r_addr,y11r_addr,x12r_addr,y12r_addr,
 x13r_addr,y13r_addr,x14r_addr,y14r_addr,x15r_addr,y15r_addr,
 g1bt_addr,g2bt_addr,
 g1tm0_addr,g1tm1_addr,g1tm2_addr,g1tm3_addr,g1tm4_addr,g1tm5_addr,g1tm6_addr,g1tm7_addr,
 g1po0_addr,g1po1_addr,g1po2_addr,g1po3_addr,g1po4_addr,g1po5_addr,g1po6_addr,g1po7_addr,
 g2po0_addr,g2po1_addr,g2po2_addr,g2po3_addr,g2po4_addr,g2po5_addr,g2po6_addr,g2po7_addr,
 g0tcrc_addr,g1tcrc_addr,g0rcrc_addr,g1rcrc_addr,
 g0rb_addr,g1rb_addr,g2rb_addr,g2tb_addr,iear_addr,
 u0rb_addr,u1rb_addr,u2rb_addr,u3rb_addr,u4rb_addr,u5rb_addr,u6rb_addr,
 plc_addr,fmr_addr;
 
/*------------------------------------------------------
    UARTi transmit buffer register (i=0,1,2,3,4)
        (1) The MOV instruction should be used to set the UiTB register
------------------------------------------------------*/
#define     u0tb    u0tb_addr.word          /* UART0 Transmit buffer register 16 bit */
#define     u0tbl   u0tb_addr.byte.low          /* UART0 Transmit buffer register low  8 bit */
#define     u0tbh   u0tb_addr.byte.high         /* UART0 Transmit buffer register high 8 bit */
#define     u1tb    u1tb_addr.word          /* UART1 Transmit buffer register 16 bit */
#define     u1tbl   u1tb_addr.byte.low          /* UART1 Transmit buffer register low  8 bit */
#define     u1tbh   u1tb_addr.byte.high         /* UART1 Transmit buffer register high 8 bit */
#define     u2tb    u2tb_addr.word          /* UART2 Transmit buffer register 16 bit */
#define     u2tbl   u2tb_addr.byte.low          /* UART2 Transmit buffer register low  8 bit */
#define     u2tbh   u2tb_addr.byte.high         /* UART2 Transmit buffer register high 8 bit */
#define     u3tb    u3tb_addr.word          /* UART3 Transmit buffer register 16 bit */
#define     u3tbl   u3tb_addr.byte.low          /* UART3 Transmit buffer register low  8 bit */
#define     u3tbh   u3tb_addr.byte.high         /* UART3 Transmit buffer register high 8 bit */
#define     u4tb    u4tb_addr.word          /* UART4 Transmit buffer register 16 bit */
#define     u4tbl   u4tb_addr.byte.low          /* UART4 Transmit buffer register low  8 bit */
#define     u4tbh   u4tb_addr.byte.high         /* UART4 Transmit buffer register high 8 bit */
#define     u5tb    u5tb_addr.word          /* UART5 Transmit buffer register 16 bit */
#define     u5tbl   u5tb_addr.byte.low          /* UART5 Transmit buffer register low  8 bit */
#define     u5tbh   u5tb_addr.byte.high         /* UART5 Transmit buffer register high 8 bit */
#define     u6tb    u6tb_addr.word          /* UART6 Transmit buffer register 16 bit */
#define     u6tbl   u6tb_addr.byte.low          /* UART6 Transmit buffer register low  8 bit */
#define     u6tbh   u6tb_addr.byte.high         /* UART6 Transmit buffer register high 8 bit */

/*------------------------------------------------------
    CRC data register
------------------------------------------------------*/
#define     crcd    crcd_addr.word          /* CRC data register 16 bit */
#define     crcdl   crcd_addr.byte.low          /* CRC data register low  8 bit */
#define     crcdh   crcd_addr.byte.high         /* CRC data register high 8 bit */

/*------------------------------------------------------
    A/D0 register i (i=0 to7)
------------------------------------------------------*/
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


#define     x0r     x0r_addr.word       /* X-Y Conversion */
#define     x0rl    x0r_addr.byte.low
#define     x0rh    x0r_addr.byte.high
#define     y0r     y0r_addr.word
#define     y0rl    y0r_addr.byte.low
#define     y0rh    y0r_addr.byte.high
#define     x1r     x1r_addr.word
#define     x1rl    x1r_addr.byte.low
#define     x1rh    x1r_addr.byte.high
#define     y1r     y1r_addr.word
#define     y1rl    y1r_addr.byte.low
#define     y1rh    y1r_addr.byte.high
#define     x2r     x2r_addr.word
#define     x2rl    x2r_addr.byte.low
#define     x2rh    x2r_addr.byte.high
#define     y2r     y2r_addr.word
#define     y2rl    y2r_addr.byte.low
#define     y2rh    y2r_addr.byte.high
#define     x3r     x3r_addr.word
#define     x3rl    x3r_addr.byte.low
#define     x3rh    x3r_addr.byte.high
#define     y3r     y3r_addr.word
#define     y3rl    y3r_addr.byte.low
#define     y3rh    y3r_addr.byte.high
#define     x4r     x4r_addr.word
#define     x4rl    x4r_addr.byte.low
#define     x4rh    x4r_addr.byte.high
#define     y4r     y4r_addr.word
#define     y4rl    y4r_addr.byte.low
#define     y4rh    y4r_addr.byte.high
#define     x5r     x5r_addr.word
#define     x5rl    x5r_addr.byte.low
#define     x5rh    x5r_addr.byte.high
#define     y5r     y5r_addr.word
#define     y5rl    y5r_addr.byte.low
#define     y5rh    y5r_addr.byte.high
#define     x6r     x6r_addr.word
#define     x6rl    x6r_addr.byte.low
#define     x6rh    x6r_addr.byte.high
#define     y6r     y6r_addr.word
#define     y6rl    y6r_addr.byte.low
#define     y6rh    y6r_addr.byte.high
#define     x7r     x7r_addr.word
#define     x7rl    x7r_addr.byte.low
#define     x7rh    x7r_addr.byte.high
#define     y7r     y7r_addr.word
#define     y7rl    y7r_addr.byte.low
#define     y7rh    y7r_addr.byte.high
#define     x8r     x8r_addr.word
#define     x8rl    x8r_addr.byte.low
#define     x8rh    x8r_addr.byte.high
#define     y8r     y8r_addr.word
#define     y8rl    y8r_addr.byte.low
#define     y8rh    y8r_addr.byte.high
#define     x9r     x9r_addr.word
#define     x9rl    x9r_addr.byte.low
#define     x9rh    x9r_addr.byte.high
#define     y9r     y9r_addr.word
#define     y9rl    y9r_addr.byte.low
#define     y9rh    y9r_addr.byte.high
#define     x10r    x10r_addr.word
#define     x10rl   x10r_addr.byte.low
#define     x10rh   x10r_addr.byte.high
#define     y10r    y10r_addr.word
#define     y10rl   y10r_addr.byte.low
#define     y10rh   y10r_addr.byte.high
#define     x11r    x11r_addr.word
#define     x11rl   x11r_addr.byte.low
#define     x11rh   x11r_addr.byte.high
#define     y11r    y11r_addr.word
#define     y11rl   y11r_addr.byte.low
#define     y11rh   y11r_addr.byte.high
#define     x12r    x12r_addr.word
#define     x12rl   x12r_addr.byte.low
#define     x12rh   x12r_addr.byte.high
#define     y12r    y12r_addr.word
#define     y12rl   y12r_addr.byte.low
#define     y12rh   y12r_addr.byte.high
#define     x13r    x13r_addr.word
#define     x13rl   x13r_addr.byte.low
#define     x13rh   x13r_addr.byte.high
#define     y13r    y13r_addr.word
#define     y13rl   y13r_addr.byte.low
#define     y13rh   y13r_addr.byte.high
#define     x14r    x14r_addr.word
#define     x14rl   x14r_addr.byte.low
#define     x14rh   x14r_addr.byte.high
#define     y14r    y14r_addr.word
#define     y14rl   y14r_addr.byte.low
#define     y14rh   y14r_addr.byte.high
#define     x15r    x15r_addr.word
#define     x15rl   x15r_addr.byte.low
#define     x15rh   x15r_addr.byte.high
#define     y15r    y15r_addr.word
#define     y15rl   y15r_addr.byte.low
#define     y15rh   y15r_addr.byte.high

/*-------------------------------------------------------
    CAN0/1 control register 0
-------------------------------------------------------*/
union{
    struct{
        char    reset0:1;           /* Reset0 */
        char    loopback:1;         /* Loop Back Mode */
        char    dummy0:1;
        char    basiccan:1;         /* Basic CAN Mode */
        char    reset1:1;           /* Reset1 */
        char    dummy1:3;
        char    tspre:2;            /* Time Stamp Prescaler */
        char    tsreset:1;          /* Time Stamp Reset */
        char    ecreset:1;          /* Error Counter Reset */
        char    dummy2:4;
    }b;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}c0ctlr0_addr, c1ctlr0_addr;

#define     c0ctlr0             c0ctlr0_addr.word
#define     c0ctlr0l            c0ctlr0_addr.byte.low
#define     c0ctlr0h            c0ctlr0_addr.byte.high

#define     reset0_c0ctlr       c0ctlr0_addr.b.reset0       /* Reset 0 */
#define     loopback_c0ctlr     c0ctlr0_addr.b.loopback     /* Loop Back Mode */
#define     basiccan_c0ctlr     c0ctlr0_addr.b.basiccan     /* Basic CAN Mode */
#define     reset1_c0ctlr       c0ctlr0_addr.b.reset1       /* Reset 1 */
#define     tspre_c0ctlr        c0ctlr0_addr.b.tspre        /* Time Stamp Prescaler */
#define     tsreset_c0ctlr      c0ctlr0_addr.b.tsreset      /* Time Stamp Reset */
#define     ecreset_c0ctlr      c0ctlr0_addr.b.ecreset      /* Error Counter Reset */

#define     c1ctlr0             c1ctlr0_addr.word
#define     c1ctlr0l            c1ctlr0_addr.byte.low
#define     c1ctlr0h            c1ctlr0_addr.byte.high

#define     reset0_c1ctlr       c1ctlr0_addr.b.reset0       /* Reset 0 */
#define     loopback_c1ctlr     c1ctlr0_addr.b.loopback     /* Loop Back Mode */
#define     basiccan_c1ctlr     c1ctlr0_addr.b.basiccan     /* Basic CAN Mode */
#define     reset1_c1ctlr       c1ctlr0_addr.b.reset1       /* Reset 1 */
#define     tspre_c1ctlr        c1ctlr0_addr.b.tspre        /* Time Stamp Prescaler */
#define     tsreset_c1ctlr      c1ctlr0_addr.b.tsreset      /* Time Stamp Reset */
#define     ecreset_c1ctlr      c1ctlr0_addr.b.ecreset      /* Error Counter Reset */

/*-------------------------------------------------------
    CAN0/1 control register 1
-------------------------------------------------------*/
union{
    struct{
        char    dummy0:3;
        char    banksel:1;
        char    dummy1:2;
        char    intsel:1;
        char    dummy2:1;
    }b;
    char    byte;
}c0ctlr1_addr, c1ctlr1_addr;

#define     c0ctlr1     c0ctlr1_addr.byte

#define     banksel_c0ctlr  c0ctlr1_addr.b.banksel
#define     intsel_c0ctlr   c0ctlr1_addr.b.intsel

#define     c1ctlr1     c1ctlr1_addr.byte

#define     banksel_c1ctlr  c1ctlr1_addr.b.banksel
#define     intsel_c1ctlr   c1ctlr1_addr.b.intsel

/*-------------------------------------------------------
    CAN0/1 sleep control register
-------------------------------------------------------*/
union{
    struct{
        char    sleep:1;
        char    dummy0:7;
    }b;
    char    byte;
}c0slpr_addr, c1slpr_addr;

#define     c0slpr      c0slpr_addr.byte

#define     sleep_c0slpr    c0slpr_addr.b.sleep

#define     c1slpr      c1slpr_addr.byte

#define     sleep_c1slpr    c1slpr_addr.b.sleep

/*------------------------------------------------------
    CAN0/1 status register
------------------------------------------------------*/
union{
    struct{
        char    mbox:4;             /* Message Slot Number */
        char    trmsucc:1;          /* Transmit Success */
        char    recsucc:1;          /* Receive Success */
        char    trmstate:1;         /* Transmit Status */
        char    recstate:1;         /* Receive Status */
        char    state_reset:1;      /* CAN Reset Status */
        char    state_loopback:1;   /* LoopBack Status */
        char    dummy0:1;
        char    state_basiccan:1;   /* BasicCAN Status */
        char    state_buserror:1;   /* CAN BusError */
        char    state_errpas:1;     /* Error Passive Status */
        char    state_busoff:1;     /* BusOff Status */
        char    dummy1:1;
    }b;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}c0str_addr, c1str_addr;

#define     c0str                   c0str_addr.word
#define     c0strl                  c0str_addr.byte.low
#define     c0strh                  c0str_addr.byte.high

#define     mbox_c0str              c0str_addr.b.mbox               /* Message Slot Number */
#define     trmsucc_c0str           c0str_addr.b.trmsucc            /* Transmit Success */
#define     recsucc_c0str           c0str_addr.b.recsucc            /* Receive Success */
#define     trmstate_c0str          c0str_addr.b.trmstate           /* Transmit Status */
#define     recstate_c0str          c0str_addr.b.recstate           /* Receive Status */
#define     state_reset_c0str       c0str_addr.b.state_reset        /* CAN Reset Status */
#define     state_loopback_c0str    c0str_addr.b.state_loopback     /* LoopBack Status */
#define     state_basiccan_c0str    c0str_addr.b.state_basiccan     /* BasicCAN Status */
#define     state_buserror_c0str    c0str_addr.b.state_buserror     /* CAN BusError */
#define     state_errpas_c0str      c0str_addr.b.state_errpas       /* Error Passive Status */
#define     state_busoff_c0str      c0str_addr.b.state_busoff       /* BusOff Status */

#define     c1str                   c1str_addr.word
#define     c1strl                  c1str_addr.byte.low
#define     c1strh                  c1str_addr.byte.high

#define     mbox_c1str              c1str_addr.b.mbox               /* Message Slot Number */
#define     trmsucc_c1str           c1str_addr.b.trmsucc            /* Transmit Success */
#define     recsucc_c1str           c1str_addr.b.recsucc            /* Receive Success */
#define     trmstate_c1str          c1str_addr.b.trmstate           /* Transmit Status */
#define     recstate_c1str          c1str_addr.b.recstate           /* Receive Status */
#define     state_reset_c1str       c1str_addr.b.state_reset        /* CAN Reset Status */
#define     state_loopback_c1str    c1str_addr.b.state_loopback     /* LoopBack Status */
#define     state_basiccan_c1str    c1str_addr.b.state_basiccan     /* BasicCAN Status */
#define     state_buserror_c1str    c1str_addr.b.state_buserror     /* CAN BusError */
#define     state_errpas_c1str      c1str_addr.b.state_errpas       /* Error Passive Status */
#define     state_busoff_c1str      c1str_addr.b.state_busoff       /* BusOff Status */

/*------------------------------------------------------
    CAN0/1 extended ID register
------------------------------------------------------*/
union{
    struct{
        char    ide15:1;           /* for Slot15 */
        char    ide14:1;           /* for Slot14 */
        char    ide13:1;           /* for Slot13 */
        char    ide12:1;           /* for Slot12 */
        char    ide11:1;           /* for Slot11 */
        char    ide10:1;           /* for Slot10 */
        char    ide9:1;            /* for Slot9 */
        char    ide8:1;            /* for Slot8 */
        char    ide7:1;            /* for Slot7 */
        char    ide6:1;            /* for Slot6 */
        char    ide5:1;            /* for Slot5 */
        char    ide4:1;            /* for Slot4 */
        char    ide3:1;            /* for Slot3 */
        char    ide2:1;            /* for Slot2 */
        char    ide1:1;            /* for Slot1 */
        char    ide0:1;            /* for Slot0 */
    }b;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}c0idr_addr, c1idr_addr;

#define     c0idr           c0idr_addr.word
#define     c0idrl          c0idr_addr.byte.low
#define     c0idrh          c0idr_addr.byte.high

#define     ide15_c0idr         c0idr_addr.b.ide15         /* for Slot15 */
#define     ide14_c0idr         c0idr_addr.b.ide14         /* for Slot14 */
#define     ide13_c0idr         c0idr_addr.b.ide13         /* for Slot13 */
#define     ide12_c0idr         c0idr_addr.b.ide12         /* for Slot12 */
#define     ide11_c0idr         c0idr_addr.b.ide11         /* for Slot11 */
#define     ide10_c0idr         c0idr_addr.b.ide10         /* for Slot10 */
#define     ide9_c0idr          c0idr_addr.b.ide9          /* for Slot9 */
#define     ide8_c0idr          c0idr_addr.b.ide8          /* for Slot8 */
#define     ide7_c0idr          c0idr_addr.b.ide7          /* for Slot7 */
#define     ide6_c0idr          c0idr_addr.b.ide6          /* for Slot6 */
#define     ide5_c0idr          c0idr_addr.b.ide5          /* for Slot5 */
#define     ide4_c0idr          c0idr_addr.b.ide4          /* for Slot4 */
#define     ide3_c0idr          c0idr_addr.b.ide3          /* for Slot3 */
#define     ide2_c0idr          c0idr_addr.b.ide2          /* for Slot2 */
#define     ide1_c0idr          c0idr_addr.b.ide1          /* for Slot1 */
#define     ide0_c0idr          c0idr_addr.b.ide0          /* for Slot0 */

#define     c1idr           c1idr_addr.word
#define     c1idrl          c1idr_addr.byte.low
#define     c1idrh          c1idr_addr.byte.high

#define     ide15_c1idr         c1idr_addr.b.ide15         /* for Slot15 */
#define     ide14_c1idr         c1idr_addr.b.ide14         /* for Slot14 */
#define     ide13_c1idr         c1idr_addr.b.ide13         /* for Slot13 */
#define     ide12_c1idr         c1idr_addr.b.ide12         /* for Slot12 */
#define     ide11_c1idr         c1idr_addr.b.ide11         /* for Slot11 */
#define     ide10_c1idr         c1idr_addr.b.ide10         /* for Slot10 */
#define     ide9_c1idr          c1idr_addr.b.ide9          /* for Slot9 */
#define     ide8_c1idr          c1idr_addr.b.ide8          /* for Slot8 */
#define     ide7_c1idr          c1idr_addr.b.ide7          /* for Slot7 */
#define     ide6_c1idr          c1idr_addr.b.ide6          /* for Slot6 */
#define     ide5_c1idr          c1idr_addr.b.ide5          /* for Slot5 */
#define     ide4_c1idr          c1idr_addr.b.ide4          /* for Slot4 */
#define     ide3_c1idr          c1idr_addr.b.ide3          /* for Slot3 */
#define     ide2_c1idr          c1idr_addr.b.ide2          /* for Slot2 */
#define     ide1_c1idr          c1idr_addr.b.ide1          /* for Slot1 */
#define     ide0_c1idr          c1idr_addr.b.ide0          /* for Slot0 */

/*------------------------------------------------------
    CAN0/1 configuration register
------------------------------------------------------*/
union{
    struct{
        char    dummy0:4;
        char    sam:1;              /* Sampling Time */
        char    pts:3;              /* Propagation Time Segment */
        char    pbs1:3;             /* Phase Buffer Segment 1 */
        char    pbs2:3;             /* Phase Buffer Segment 2 */
        char    sjw:2;              /* ReSynchronization Jump Width */
    }b;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}c0conr_addr, c1conr_addr;

#define     c0conr          c0conr_addr.word
#define     c0conrl         c0conr_addr.byte.low
#define     c0conrh         c0conr_addr.byte.high

#define     sam_c0conr      c0conr_addr.b.sam       /* Sampling Time */
#define     pts_c0conr      c0conr_addr.b.pts       /* PTS */
#define     pbs1_c0conr     c0conr_addr.b.pbs1      /* PBS1 */
#define     pbs2_c0conr     c0conr_addr.b.pbs2      /* PBS2 */
#define     sjw_c0conr      c0conr_addr.b.sjw       /* SJW */

#define     c1conr          c1conr_addr.word
#define     c1conrl         c1conr_addr.byte.low
#define     c1conrh         c1conr_addr.byte.high

#define     sam_c1conr      c1conr_addr.b.sam       /* Sampling Time */
#define     pts_c1conr      c1conr_addr.b.pts       /* PTS */
#define     pbs1_c1conr     c1conr_addr.b.pbs1      /* PBS1 */
#define     pbs2_c1conr     c1conr_addr.b.pbs2      /* PBS2 */
#define     sjw_c1conr      c1conr_addr.b.sjw       /* SJW */

/*------------------------------------------------------
    CAN0/1 time stamp register
------------------------------------------------------*/
union{
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}c0tsr_addr, c1tsr_addr;

#define     c0tsr           c0tsr_addr.word
#define     c0tsrl          c0tsr_addr.byte.low
#define     c0tsrh          c0tsr_addr.byte.high

#define     c1tsr           c1tsr_addr.word
#define     c1tsrl          c1tsr_addr.byte.low
#define     c1tsrh          c1tsr_addr.byte.high

/*-------------------------------------------------------
    CAN0/1 transmit error counter
-------------------------------------------------------*/
unsigned char c0tec_addr, c1tec_addr;
#define     c0tec           c0tec_addr
#define     c1tec           c1tec_addr

/*-------------------------------------------------------
    CAN0/1 receive error counter
-------------------------------------------------------*/
unsigned char c0rec_addr, c1rec_addr;
#define     c0rec           c0rec_addr
#define     c1rec           c1rec_addr

/*-------------------------------------------------------
    CAN0/1 baud rate prescaler
-------------------------------------------------------*/
unsigned char c0brp_addr, c1brp_addr;
#define     c0brp           c0brp_addr
#define     c1brp           c1brp_addr

/*------------------------------------------------------
    CAN0/1 slot interrupt status register
------------------------------------------------------*/
union{
    struct{
        char    sis15:1;            /* for Slot15 */
        char    sis14:1;            /* for Slot14 */
        char    sis13:1;            /* for Slot13 */
        char    sis12:1;            /* for Slot12 */
        char    sis11:1;            /* for Slot11 */
        char    sis10:1;            /* for Slot10 */
        char    sis9:1;             /* for Slot9 */
        char    sis8:1;             /* for Slot8 */
        char    sis7:1;             /* for Slot7 */
        char    sis6:1;             /* for Slot6 */
        char    sis5:1;             /* for Slot5 */
        char    sis4:1;             /* for Slot4 */
        char    sis3:1;             /* for Slot3 */
        char    sis2:1;             /* for Slot2 */
        char    sis1:1;             /* for Slot1 */
        char    sis0:1;             /* for Slot0 */
    }b;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}c0sistr_addr, c1sistr_addr;

#define     c0sistr         c0sistr_addr.word
#define     c0sistrl        c0sistr_addr.byte.low
#define     c0sistrh        c0sistr_addr.byte.high

#define     sis15_c0sistr   c0sistr_addr.b.sis15       /* for Slot15 */
#define     sis14_c0sistr   c0sistr_addr.b.sis14       /* for Slot14 */
#define     sis13_c0sistr   c0sistr_addr.b.sis13       /* for Slot13 */
#define     sis12_c0sistr   c0sistr_addr.b.sis12       /* for Slot12 */
#define     sis11_c0sistr   c0sistr_addr.b.sis11       /* for Slot11 */
#define     sis10_c0sistr   c0sistr_addr.b.sis10       /* for Slot10 */
#define     sis9_c0sistr    c0sistr_addr.b.sis9        /* for Slot9 */
#define     sis8_c0sistr    c0sistr_addr.b.sis8        /* for Slot8 */
#define     sis7_c0sistr    c0sistr_addr.b.sis7        /* for Slot7 */
#define     sis6_c0sistr    c0sistr_addr.b.sis6        /* for Slot6 */
#define     sis5_c0sistr    c0sistr_addr.b.sis5        /* for Slot5 */
#define     sis4_c0sistr    c0sistr_addr.b.sis4        /* for Slot4 */
#define     sis3_c0sistr    c0sistr_addr.b.sis3        /* for Slot3 */
#define     sis2_c0sistr    c0sistr_addr.b.sis2        /* for Slot2 */
#define     sis1_c0sistr    c0sistr_addr.b.sis1        /* for Slot1 */
#define     sis0_c0sistr    c0sistr_addr.b.sis0        /* for Slot0 */

#define     c1sistr         c1sistr_addr.word
#define     c1sistrl        c1sistr_addr.byte.low
#define     c1sistrh        c1sistr_addr.byte.high

#define     sis15_c1sistr   c1sistr_addr.b.sis15       /* for Slot15 */
#define     sis14_c1sistr   c1sistr_addr.b.sis14       /* for Slot14 */
#define     sis13_c1sistr   c1sistr_addr.b.sis13       /* for Slot13 */
#define     sis12_c1sistr   c1sistr_addr.b.sis12       /* for Slot12 */
#define     sis11_c1sistr   c1sistr_addr.b.sis11       /* for Slot11 */
#define     sis10_c1sistr   c1sistr_addr.b.sis10       /* for Slot10 */
#define     sis9_c1sistr    c1sistr_addr.b.sis9        /* for Slot9 */
#define     sis8_c1sistr    c1sistr_addr.b.sis8        /* for Slot8 */
#define     sis7_c1sistr    c1sistr_addr.b.sis7        /* for Slot7 */
#define     sis6_c1sistr    c1sistr_addr.b.sis6        /* for Slot6 */
#define     sis5_c1sistr    c1sistr_addr.b.sis5        /* for Slot5 */
#define     sis4_c1sistr    c1sistr_addr.b.sis4        /* for Slot4 */
#define     sis3_c1sistr    c1sistr_addr.b.sis3        /* for Slot3 */
#define     sis2_c1sistr    c1sistr_addr.b.sis2        /* for Slot2 */
#define     sis1_c1sistr    c1sistr_addr.b.sis1        /* for Slot1 */
#define     sis0_c1sistr    c1sistr_addr.b.sis0        /* for Slot0 */

/*------------------------------------------------------
    CAN0/1 slot interrupt mask register
------------------------------------------------------*/
union{
    struct{
        char    sim15:1;            /* for Slot15 */
        char    sim14:1;            /* for Slot14 */
        char    sim13:1;            /* for Slot13 */
        char    sim12:1;            /* for Slot12 */
        char    sim11:1;            /* for Slot11 */
        char    sim10:1;            /* for Slot10 */
        char    sim9:1;             /* for Slot9 */
        char    sim8:1;             /* for Slot8 */
        char    sim7:1;             /* for Slot7 */
        char    sim6:1;             /* for Slot6 */
        char    sim5:1;             /* for Slot5 */
        char    sim4:1;             /* for Slot4 */
        char    sim3:1;             /* for Slot3 */
        char    sim2:1;             /* for Slot2 */
        char    sim1:1;             /* for Slot1 */
        char    sim0:1;             /* for Slot0 */
    }b;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}c0simkr_addr, c1simkr_addr;

#define     c0simkr         c0simkr_addr.word
#define     c0simkrl        c0simkr_addr.byte.low
#define     c0simkrh        c0simkr_addr.byte.high

#define     sim15_c0simkr   c0simkr_addr.b.sim15       /* for Slot15 */
#define     sim14_c0simkr   c0simkr_addr.b.sim14       /* for Slot14 */
#define     sim13_c0simkr   c0simkr_addr.b.sim13       /* for Slot13 */
#define     sim12_c0simkr   c0simkr_addr.b.sim12       /* for Slot12 */
#define     sim11_c0simkr   c0simkr_addr.b.sim11       /* for Slot11 */
#define     sim10_c0simkr   c0simkr_addr.b.sim10       /* for Slot10 */
#define     sim9_c0simkr    c0simkr_addr.b.sim9        /* for Slot9 */
#define     sim8_c0simkr    c0simkr_addr.b.sim8        /* for Slot8 */
#define     sim7_c0simkr    c0simkr_addr.b.sim7        /* for Slot7 */
#define     sim6_c0simkr    c0simkr_addr.b.sim6        /* for Slot6 */
#define     sim5_c0simkr    c0simkr_addr.b.sim5        /* for Slot5 */
#define     sim4_c0simkr    c0simkr_addr.b.sim4        /* for Slot4 */
#define     sim3_c0simkr    c0simkr_addr.b.sim3        /* for Slot3 */
#define     sim2_c0simkr    c0simkr_addr.b.sim2        /* for Slot2 */
#define     sim1_c0simkr    c0simkr_addr.b.sim1        /* for Slot1 */
#define     sim0_c0simkr    c0simkr_addr.b.sim0        /* for Slot0 */

#define     c1simkr         c1simkr_addr.word
#define     c1simkrl        c1simkr_addr.byte.low
#define     c1simkrh        c1simkr_addr.byte.high

#define     sim15_c1simkr   c1simkr_addr.b.sim15       /* for Slot15 */
#define     sim14_c1simkr   c1simkr_addr.b.sim14       /* for Slot14 */
#define     sim13_c1simkr   c1simkr_addr.b.sim13       /* for Slot13 */
#define     sim12_c1simkr   c1simkr_addr.b.sim12       /* for Slot12 */
#define     sim11_c1simkr   c1simkr_addr.b.sim11       /* for Slot11 */
#define     sim10_c1simkr   c1simkr_addr.b.sim10       /* for Slot10 */
#define     sim9_c1simkr    c1simkr_addr.b.sim9        /* for Slot9 */
#define     sim8_c1simkr    c1simkr_addr.b.sim8        /* for Slot8 */
#define     sim7_c1simkr    c1simkr_addr.b.sim7        /* for Slot7 */
#define     sim6_c1simkr    c1simkr_addr.b.sim6        /* for Slot6 */
#define     sim5_c1simkr    c1simkr_addr.b.sim5        /* for Slot5 */
#define     sim4_c1simkr    c1simkr_addr.b.sim4        /* for Slot4 */
#define     sim3_c1simkr    c1simkr_addr.b.sim3        /* for Slot3 */
#define     sim2_c1simkr    c1simkr_addr.b.sim2        /* for Slot2 */
#define     sim1_c1simkr    c1simkr_addr.b.sim1        /* for Slot1 */
#define     sim0_c1simkr    c1simkr_addr.b.sim0        /* for Slot0 */

/*------------------------------------------------------
     CAN0/1 error interrupt status register
------------------------------------------------------*/
union{
    struct{
        char    boim:1;         /* BusOff Interrupt */
        char    epim:1;         /* Error Passive Interrupt */
        char    beim:1;         /* CAN BusError Interrupt */
        char    dummy0:5;
    }b;
    char    byte;
}c0eimkr_addr, c1eimkr_addr;

#define     c0eimkr     c0eimkr_addr.byte

#define     boim_c0eimkr    c0eimkr_addr.b.boim     /* BusOff Interrupt Status */
#define     epim_c0eimkr    c0eimkr_addr.b.epim     /* Error Passive Interrupt Status */
#define     beim_c0eimkr    c0eimkr_addr.b.beim     /* CAN BusError Interrupt Status */

#define     c1eimkr     c1eimkr_addr.byte

#define     boim_c1eimkr    c1eimkr_addr.b.boim     /* BusOff Interrupt Status */
#define     epim_c1eimkr    c1eimkr_addr.b.epim     /* Error Passive Interrupt Status */
#define     beim_c1eimkr    c1eimkr_addr.b.beim     /* CAN BusError Interrupt Status */

/*------------------------------------------------------
     CAN0/1 error interrupt mask register
------------------------------------------------------*/
union{
    struct{
        char    bois:1;         /* BusOff Interrupt */
        char    epis:1;         /* Error Passive Interrupt */
        char    beis:1;         /* CAN BusError Interrupt */
        char    rsv4:1;
        char    rsv3:1;
        char    rsv2:1;
        char    rsv1:1;
        char    rsv0:1;
    }b;
    char    byte;
}c0eistr_addr, c1eistr_addr;

#define     c0eistr     c0eistr_addr.byte

#define     bois_c0eistr    c0eistr_addr.b.bois     /* BusOff Interrupt Mask */
#define     epis_c0eistr    c0eistr_addr.b.epis     /* Error Passive Interrupt Mask */
#define     beis_c0eistr    c0eistr_addr.b.beis     /* CAN BusError Interrupt Mask */

#define     c1eistr     c1eistr_addr.byte

#define     bois_c1eistr    c1eistr_addr.b.bois     /* BusOff Interrupt Mask */
#define     epis_c1eistr    c1eistr_addr.b.epis     /* Error Passive Interrupt Mask */
#define     beis_c1eistr    c1eistr_addr.b.beis     /* CAN BusError Interrupt Mask */

/*-------------------------------------------------------
    CAN0/1 error factor register
-------------------------------------------------------*/
union{
    struct{
        char    acke:1;
        char    crce:1;
        char    forme:1;
        char    stfe:1;
        char    bite0:1;
        char    bite1:1;
        char    rcve:1;
        char    tre:1;
    }b;
    char    byte;
}c0efr_addr, c1efr_addr;

#define     c0efr      c0efr_addr.byte

#define     acke_c0efr    c0efr_addr.b.acke
#define     crce_c0efr    c0efr_addr.b.crce
#define     forme_c0efr   c0efr_addr.b.forme
#define     stfe_c0efr    c0efr_addr.b.stfe
#define     bite0_c0efr   c0efr_addr.b.bite0
#define     bite1_c0efr   c0efr_addr.b.bite1
#define     rcve_c0efr    c0efr_addr.b.rcve
#define     tre_c0efr     c0efr_addr.b.tre

#define     c1efr      c1efr_addr.byte

#define     acke_c1efr    c1efr_addr.b.acke
#define     crce_c1efr    c1efr_addr.b.crce
#define     forme_c1efr   c1efr_addr.b.forme
#define     stfe_c1efr    c1efr_addr.b.stfe
#define     bite0_c1efr   c1efr_addr.b.bite0
#define     bite1_c1efr   c1efr_addr.b.bite1
#define     rcve_c1efr    c1efr_addr.b.rcve
#define     tre_c1efr     c1efr_addr.b.tre

/*-------------------------------------------------------
    CAN0/1 mode register
-------------------------------------------------------*/
union{
    struct{
        char    cmod:2;
        char    dummy0:6;
    }b;
    char    byte;
}c0mdr_addr, c1mdr_addr;

#define     c0mdr      c0mdr_addr.byte

#define     cmod_c0mdr    c0mdr_addr.b.cmod

#define     c1mdr      c1mdr_addr.byte

#define     cmod_c1mdr    c1mdr_addr.b.cmod

/*------------------------------------------------------
    CAN0/1 single shot control register
------------------------------------------------------*/
union{
    struct{
        char    ssc15:1;            /* for Slot15 */
        char    ssc14:1;            /* for Slot14 */
        char    ssc13:1;            /* for Slot13 */
        char    ssc12:1;            /* for Slot12 */
        char    ssc11:1;            /* for Slot11 */
        char    ssc10:1;            /* for Slot10 */
        char    ssc9:1;             /* for Slot9 */
        char    ssc8:1;             /* for Slot8 */
        char    ssc7:1;             /* for Slot7 */
        char    ssc6:1;             /* for Slot6 */
        char    ssc5:1;             /* for Slot5 */
        char    ssc4:1;             /* for Slot4 */
        char    ssc3:1;             /* for Slot3 */
        char    ssc2:1;             /* for Slot2 */
        char    ssc1:1;             /* for Slot1 */
        char    ssc0:1;             /* for Slot0 */
    }b;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}c0ssctlr_addr, c1ssctlr_addr;


#define     c0ssctlr         c0ssctlr_addr.word
#define     c0ssctlrl        c0ssctlr_addr.byte.low
#define     c0ssctlrh        c0ssctlr_addr.byte.high

#define     ssc15_c0ssctlr   c0ssctlr_addr.b.ssc15       /* for Slot15 */
#define     ssc14_c0ssctlr   c0ssctlr_addr.b.ssc14       /* for Slot14 */
#define     ssc13_c0ssctlr   c0ssctlr_addr.b.ssc13       /* for Slot13 */
#define     ssc12_c0ssctlr   c0ssctlr_addr.b.ssc12       /* for Slot12 */
#define     ssc11_c0ssctlr   c0ssctlr_addr.b.ssc11       /* for Slot11 */
#define     ssc10_c0ssctlr   c0ssctlr_addr.b.ssc10       /* for Slot10 */
#define     ssc9_c0ssctlr    c0ssctlr_addr.b.ssc9        /* for Slot9 */
#define     ssc8_c0ssctlr    c0ssctlr_addr.b.ssc8        /* for Slot8 */
#define     ssc7_c0ssctlr    c0ssctlr_addr.b.ssc7        /* for Slot7 */
#define     ssc6_c0ssctlr    c0ssctlr_addr.b.ssc6        /* for Slot6 */
#define     ssc5_c0ssctlr    c0ssctlr_addr.b.ssc5        /* for Slot5 */
#define     ssc4_c0ssctlr    c0ssctlr_addr.b.ssc4        /* for Slot4 */
#define     ssc3_c0ssctlr    c0ssctlr_addr.b.ssc3        /* for Slot3 */
#define     ssc2_c0ssctlr    c0ssctlr_addr.b.ssc2        /* for Slot2 */
#define     ssc1_c0ssctlr    c0ssctlr_addr.b.ssc1        /* for Slot1 */
#define     ssc0_c0ssctlr    c0ssctlr_addr.b.ssc0        /* for Slot0 */

#define     c1ssctlr         c1ssctlr_addr.word
#define     c1ssctlrl        c1ssctlr_addr.byte.low
#define     c1ssctlrh        c1ssctlr_addr.byte.high

#define     ssc15_c1ssctlr   c1ssctlr_addr.b.ssc15       /* for Slot15 */
#define     ssc14_c1ssctlr   c1ssctlr_addr.b.ssc14       /* for Slot14 */
#define     ssc13_c1ssctlr   c1ssctlr_addr.b.ssc13       /* for Slot13 */
#define     ssc12_c1ssctlr   c1ssctlr_addr.b.ssc12       /* for Slot12 */
#define     ssc11_c1ssctlr   c1ssctlr_addr.b.ssc11       /* for Slot11 */
#define     ssc10_c1ssctlr   c1ssctlr_addr.b.ssc10       /* for Slot10 */
#define     ssc9_c1ssctlr    c1ssctlr_addr.b.ssc9        /* for Slot9 */
#define     ssc8_c1ssctlr    c1ssctlr_addr.b.ssc8        /* for Slot8 */
#define     ssc7_c1ssctlr    c1ssctlr_addr.b.ssc7        /* for Slot7 */
#define     ssc6_c1ssctlr    c1ssctlr_addr.b.ssc6        /* for Slot6 */
#define     ssc5_c1ssctlr    c1ssctlr_addr.b.ssc5        /* for Slot5 */
#define     ssc4_c1ssctlr    c1ssctlr_addr.b.ssc4        /* for Slot4 */
#define     ssc3_c1ssctlr    c1ssctlr_addr.b.ssc3        /* for Slot3 */
#define     ssc2_c1ssctlr    c1ssctlr_addr.b.ssc2        /* for Slot2 */
#define     ssc1_c1ssctlr    c1ssctlr_addr.b.ssc1        /* for Slot1 */
#define     ssc0_c1ssctlr    c1ssctlr_addr.b.ssc0        /* for Slot0 */

/*------------------------------------------------------
    CAN0/1 single shot status register
------------------------------------------------------*/
union{
    struct{
        char    sss15:1;            /* for Slot15 */
        char    sss14:1;            /* for Slot14 */
        char    sss13:1;            /* for Slot13 */
        char    sss12:1;            /* for Slot12 */
        char    sss11:1;            /* for Slot11 */
        char    sss10:1;            /* for Slot10 */
        char    sss9:1;             /* for Slot9 */
        char    sss8:1;             /* for Slot8 */
        char    sss7:1;             /* for Slot7 */
        char    sss6:1;             /* for Slot6 */
        char    sss5:1;             /* for Slot5 */
        char    sss4:1;             /* for Slot4 */
        char    sss3:1;             /* for Slot3 */
        char    sss2:1;             /* for Slot2 */
        char    sss1:1;             /* for Slot1 */
        char    sss0:1;             /* for Slot0 */
    }b;
    struct{
        char    low;                /* Low  8 bit */
        char    high;               /* High 8 bit */
    }byte;
    unsigned short  word;
}c0ssstr_addr, c1ssstr_addr;

#define     c0ssstr         c0ssstr_addr.word
#define     c0ssstrl        c0ssstr_addr.byte.low
#define     c0ssstrh        c0ssstr_addr.byte.high

#define     sss15_c0ssstr   c0ssstr_addr.b.sss15       /* for Slot15 */
#define     sss14_c0ssstr   c0ssstr_addr.b.sss14       /* for Slot14 */
#define     sss13_c0ssstr   c0ssstr_addr.b.sss13       /* for Slot13 */
#define     sss12_c0ssstr   c0ssstr_addr.b.sss12       /* for Slot12 */
#define     sss11_c0ssstr   c0ssstr_addr.b.sss11       /* for Slot11 */
#define     sss10_c0ssstr   c0ssstr_addr.b.sss10       /* for Slot10 */
#define     sss9_c0ssstr    c0ssstr_addr.b.sss9        /* for Slot9 */
#define     sss8_c0ssstr    c0ssstr_addr.b.sss8        /* for Slot8 */
#define     sss7_c0ssstr    c0ssstr_addr.b.sss7        /* for Slot7 */
#define     sss6_c0ssstr    c0ssstr_addr.b.sss6        /* for Slot6 */
#define     sss5_c0ssstr    c0ssstr_addr.b.sss5        /* for Slot5 */
#define     sss4_c0ssstr    c0ssstr_addr.b.sss4        /* for Slot4 */
#define     sss3_c0ssstr    c0ssstr_addr.b.sss3        /* for Slot3 */
#define     sss2_c0ssstr    c0ssstr_addr.b.sss2        /* for Slot2 */
#define     sss1_c0ssstr    c0ssstr_addr.b.sss1        /* for Slot1 */
#define     sss0_c0ssstr    c0ssstr_addr.b.sss0        /* for Slot0 */

#define     c1ssstr         c1ssstr_addr.word
#define     c1ssstrl        c1ssstr_addr.byte.low
#define     c1ssstrh        c1ssstr_addr.byte.high

#define     sss15_c1ssstr   c1ssstr_addr.b.sss15       /* for Slot15 */
#define     sss14_c1ssstr   c1ssstr_addr.b.sss14       /* for Slot14 */
#define     sss13_c1ssstr   c1ssstr_addr.b.sss13       /* for Slot13 */
#define     sss12_c1ssstr   c1ssstr_addr.b.sss12       /* for Slot12 */
#define     sss11_c1ssstr   c1ssstr_addr.b.sss11       /* for Slot11 */
#define     sss10_c1ssstr   c1ssstr_addr.b.sss10       /* for Slot10 */
#define     sss9_c1ssstr    c1ssstr_addr.b.sss9        /* for Slot9 */
#define     sss8_c1ssstr    c1ssstr_addr.b.sss8        /* for Slot8 */
#define     sss7_c1ssstr    c1ssstr_addr.b.sss7        /* for Slot7 */
#define     sss6_c1ssstr    c1ssstr_addr.b.sss6        /* for Slot6 */
#define     sss5_c1ssstr    c1ssstr_addr.b.sss5        /* for Slot5 */
#define     sss4_c1ssstr    c1ssstr_addr.b.sss4        /* for Slot4 */
#define     sss3_c1ssstr    c1ssstr_addr.b.sss3        /* for Slot3 */
#define     sss2_c1ssstr    c1ssstr_addr.b.sss2        /* for Slot2 */
#define     sss1_c1ssstr    c1ssstr_addr.b.sss1        /* for Slot1 */
#define     sss0_c1ssstr    c1ssstr_addr.b.sss0        /* for Slot0 */

/*-------------------------------------------------------
    CAN0/1 global mask register
    CAN0/1 local mask A register
    CAN0/1 local mask B register
-------------------------------------------------------*/
unsigned char   c0gmr0_addr,c0gmr1_addr,c0gmr2_addr,c0gmr3_addr,c0gmr4_addr,
                c0lmar0_addr,c0lmar1_addr,c0lmar2_addr,c0lmar3_addr,c0lmar4_addr,
                c0lmbr0_addr,c0lmbr1_addr,c0lmbr2_addr,c0lmbr3_addr,c0lmbr4_addr,
                c1gmr0_addr,c1gmr1_addr,c1gmr2_addr,c1gmr3_addr,c1gmr4_addr,
                c1lmar0_addr,c1lmar1_addr,c1lmar2_addr,c1lmar3_addr,c1lmar4_addr,
                c1lmbr0_addr,c1lmbr1_addr,c1lmbr2_addr,c1lmbr3_addr,c1lmbr4_addr;
#define     c0gmr0          c0gmr0_addr         /* CAN0 Global Mask Register 0 */
#define     c0gmr1          c0gmr1_addr         /* CAN0 Global Mask Register 1 */
#define     c0gmr2          c0gmr2_addr         /* CAN0 Global Mask Register 2 */
#define     c0gmr3          c0gmr3_addr         /* CAN0 Global Mask Register 3 */
#define     c0gmr4          c0gmr4_addr         /* CAN0 Global Mask Register 4 */
#define     c0lmar0         c0lmar0_addr        /* CAN0 Local Mask A Register 0 */
#define     c0lmar1         c0lmar1_addr        /* CAN0 Local Mask A Register 1 */
#define     c0lmar2         c0lmar2_addr        /* CAN0 Local Mask A Register 2 */
#define     c0lmar3         c0lmar3_addr        /* CAN0 Local Mask A Register 3 */
#define     c0lmar4         c0lmar4_addr        /* CAN0 Local Mask A Register 4 */
#define     c0lmbr0         c0lmbr0_addr        /* CAN0 Local Mask B Register 0 */
#define     c0lmbr1         c0lmbr1_addr        /* CAN0 Local Mask B Register 1 */
#define     c0lmbr2         c0lmbr2_addr        /* CAN0 Local Mask B Register 2 */
#define     c0lmbr3         c0lmbr3_addr        /* CAN0 Local Mask B Register 3 */
#define     c0lmbr4         c0lmbr4_addr        /* CAN0 Local Mask B Register 4 */
#define     c1gmr0          c1gmr0_addr         /* CAN1 Global Mask Register 0 */
#define     c1gmr1          c1gmr1_addr         /* CAN1 Global Mask Register 1 */
#define     c1gmr2          c1gmr2_addr         /* CAN1 Global Mask Register 2 */
#define     c1gmr3          c1gmr3_addr         /* CAN1 Global Mask Register 3 */
#define     c1gmr4          c1gmr4_addr         /* CAN1 Global Mask Register 4 */
#define     c1lmar0         c1lmar0_addr        /* CAN1 Local Mask A Register 0 */
#define     c1lmar1         c1lmar1_addr        /* CAN1 Local Mask A Register 1 */
#define     c1lmar2         c1lmar2_addr        /* CAN1 Local Mask A Register 2 */
#define     c1lmar3         c1lmar3_addr        /* CAN1 Local Mask A Register 3 */
#define     c1lmar4         c1lmar4_addr        /* CAN1 Local Mask A Register 4 */
#define     c1lmbr0         c1lmbr0_addr        /* CAN1 Local Mask B Register 0 */
#define     c1lmbr1         c1lmbr1_addr        /* CAN1 Local Mask B Register 1 */
#define     c1lmbr2         c1lmbr2_addr        /* CAN1 Local Mask B Register 2 */
#define     c1lmbr3         c1lmbr3_addr        /* CAN1 Local Mask B Register 3 */
#define     c1lmbr4         c1lmbr4_addr        /* CAN1 Local Mask B Register 4 */

union{
    struct{
        char    sidh;                   /* Standard-ID register [10:6] */
        char    sidl;                   /* Standard-ID register [5:0] */
        char    eidh;                   /* Extended-ID register [17:14] */
        char    eidm;                   /* Extended-ID register [13:6] */
        char    eidl;                   /* Extended-ID register [5:0] */
    } ba;
    char byte[5];
}c0gmr,c0lmar,c0lmbr,
 c1gmr,c1lmar,c1lmbr;

/*-------------------------------------------------------
     CAN0/1 message slot(0-15) control register
-------------------------------------------------------*/
union {
    struct{
        char    newdata:1;      /* New Data */
        char    invaldata:1;    /* Invalid Data */
        char    msglost:1;      /* Message Lost */
        char    remactive:1;    /* Remote Active */
        char    rsplock:1;      /* Response Locked */
        char    remote:1;       /* Remote Mailbox */
        char    recreq:1;       /* Receive Request */
        char    dummy0:1;             /* Reserved bit */
    }receive;
    struct{
        char    sentdata:1;     /* Sent Data */
        char    trmactive:1;    /* Transmission Active */
        char    dummy0:1;             /* Reserved bit */
        char    remactive:1;    /* Remote Active */
        char    dummy1:1;             /* Reserved bit */
        char    remote:1;       /* Remote Mailbox */
        char    dummy2:1;             /* Reserved bit */
        char    trmreq:1;       /* Transmit Request */
    }transmit;
    char byte;
}c0mctl[16],
 c0mctl0,c0mctl1,c0mctl2,c0mctl3,c0mctl4, c0mctl5,c0mctl6,c0mctl7,
 c0mctl8,c0mctl9,c0mctl10,c0mctl11,c0mctl12,c0mctl13,c0mctl14,c0mctl15,
 c1mctl[16],
 c1mctl0,c1mctl1,c1mctl2,c1mctl3,c1mctl4,c1mctl5,c1mctl6,c1mctl7,
 c1mctl8,c1mctl9,c1mctl10,c1mctl11,c1mctl12,c1mctl13,c1mctl14,c1mctl15;

/*-------------------------------------------------------
    CAN0/1 slot buffer select register
-------------------------------------------------------*/
union{
    struct{
        char    buffer0:4;
        char    buffer1:4;
    }b;
    char    byte;
}c0sbs_addr, c1sbs_addr;

#define     c0sbs       c0sbs_addr.byte

#define     buffer0_c0sbs   c0sbs_addr.b.buffer0    /* CAN0 message slot buffer 0 */
#define     buffer1_c0sbs   c0sbs_addr.b.buffer1    /* CAN0 message slot buffer 1 */

#define     c1sbs       c1sbs_addr.byte

#define     buffer0_c1sbs   c1sbs_addr.b.buffer0    /* CAN1 message slot buffer 0 */
#define     buffer1_c1sbs   c1sbs_addr.b.buffer1    /* CAN1 message slot buffer 1 */

/*------------------------------------------------------
    CAN0/1 message slot buffer
------------------------------------------------------*/
union{
    struct{
        char    sidh;                   /* Standard-ID register [10:6] */
        char    sidl;                   /* Standard-ID register [5:0] */
        char    eidh;                   /* Extended-ID register [17:14] */
        char    eidm;                   /* Extended-ID register [13:6] */
        char    eidl;                   /* Extended-ID register [5:0] */
        char    dlc;                    /* Data length code */
        char    data[8];                /* Data(8byte) */
        char    tsh;                    /* Time stamp register(High) */
        char    tsl;                    /* Time stamp register(Low) */
    } ba;
    char byte[16];
    short word[8];
}c0slot[2],c0slot0,c0slot1,
 c1slot[2],c1slot0,c1slot1;

/*-------------------------------------------------------
     CAN0/1 acceptance filter support register
-------------------------------------------------------*/
union{
    struct{
        char    low;            /* Low  8 bit */
        char    high;           /* High 8 bit */
    }byte;
    unsigned short  word;
}c0afs_addr, c1afs_addr;

#define     c0afs           c0afs_addr.word
#define     c0afsl          c0afs_addr.byte.low
#define     c0afsh          c0afs_addr.byte.high

#define     c1afs           c1afs_addr.word
#define     c1afsl          c1afs_addr.byte.low
#define     c1afsh          c1afs_addr.byte.high

