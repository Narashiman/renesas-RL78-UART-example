                                                                        
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                          
/******************************************************************************/
/* DISCLAIMER                                                                 */
/* This software is supplied by Renesas Electronics Corporation and is only   */
/* intended for use with Renesas products. No other uses are authorized.This  */
/* software is owned by Renesas Electronics Corporation and is protected      */
/* under all applicable laws, including copyright laws.                       */
/* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES          */
/* REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING  */
/* BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR */
/* PURPOSE AND NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY           */
/* DISCLAIMED.                                                                */
/* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS     */
/* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE       */
/* LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL      */
/* DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS    */
/* AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.           */
/* Renesas reserves the right, without notice, to make changes to this        */
/* software and to discontinue the availability of this software.             */
/* By using this software, you agree to the additional terms and conditions   */
/* found by accessing the following link:                                     */
/* http://www.renesas.com/disclaimer                                          */
/*                                                                            */
/* Device     : RL78/R5F10268                                                 */
/* File Name  : R5F10268.h                                                    */
/* Abstract   : Definition of Special Function Register (SFR)                 */
/* History    : V1.12  [Device File version]                                  */
/* Options    : -df=DR5F10268.DVF -o=R5F10268.h -f                            */
/* Date       : 2016/02/18                                                    */
/* Version    : V1.04.00.04  [df2iodef.exe version]                           */
/* This is a typical example.                                                 */
/*                                                                            */
/******************************************************************************/
#ifndef __R5F10268IODEFINE_HEADER__
#define __R5F10268IODEFINE_HEADER__

typedef struct
{
    unsigned char no0:1;
    unsigned char no1:1;
    unsigned char no2:1;
    unsigned char no3:1;
    unsigned char no4:1;
    unsigned char no5:1;
    unsigned char no6:1;
    unsigned char no7:1;
} __bitf_T;

typedef struct
{
    unsigned char no0:1;
    unsigned char no1:1;
    unsigned char no2:1;
    unsigned char no3:1;
    unsigned char no4:1;
    unsigned char no5:1;
    unsigned char no6:1;
    unsigned char no7:1;
    unsigned char no8:1;
    unsigned char no9:1;
    unsigned char no10:1;
    unsigned char no11:1;
    unsigned char no12:1;
    unsigned char no13:1;
    unsigned char no14:1;
    unsigned char no15:1;
} __bitf_T2;



#define ADM2         (*(volatile __near unsigned char  *)0x10)
#define ADM2_bit     (*(volatile __near __bitf_T *)0x10)
#define ADTYP        (((volatile __near __bitf_T *)0x10)->no0)
#define AWC          (((volatile __near __bitf_T *)0x10)->no2)
#define ADRCK        (((volatile __near __bitf_T *)0x10)->no3)
#define ADUL         (*(volatile __near unsigned char  *)0x11)
#define ADLL         (*(volatile __near unsigned char  *)0x12)
#define ADTES        (*(volatile __near unsigned char  *)0x13)
#define PU1          (*(volatile __near unsigned char  *)0x31)
#define PU1_bit      (*(volatile __near __bitf_T *)0x31)
#define PU4          (*(volatile __near unsigned char  *)0x34)
#define PU4_bit      (*(volatile __near __bitf_T *)0x34)
#define PU12         (*(volatile __near unsigned char  *)0x3C)
#define PU12_bit     (*(volatile __near __bitf_T *)0x3C)
#define PIM1         (*(volatile __near unsigned char  *)0x41)
#define PIM1_bit     (*(volatile __near __bitf_T *)0x41)
#define POM1         (*(volatile __near unsigned char  *)0x51)
#define POM1_bit     (*(volatile __near __bitf_T *)0x51)
#define POM4         (*(volatile __near unsigned char  *)0x54)
#define POM4_bit     (*(volatile __near __bitf_T *)0x54)
#define PMC1         (*(volatile __near unsigned char  *)0x61)
#define PMC1_bit     (*(volatile __near __bitf_T *)0x61)
#define PMC4         (*(volatile __near unsigned char  *)0x64)
#define PMC4_bit     (*(volatile __near __bitf_T *)0x64)
#define NFEN0        (*(volatile __near unsigned char  *)0x70)
#define NFEN0_bit    (*(volatile __near __bitf_T *)0x70)
#define NFEN1        (*(volatile __near unsigned char  *)0x71)
#define NFEN1_bit    (*(volatile __near __bitf_T *)0x71)
#define ISC          (*(volatile __near unsigned char  *)0x73)
#define ISC_bit      (*(volatile __near __bitf_T *)0x73)
#define TIS0         (*(volatile __near unsigned char  *)0x74)
#define ADPC         (*(volatile __near unsigned char  *)0x76)
#define PIOR         (*(volatile __near unsigned char  *)0x77)
#define IAWCTL       (*(volatile __near unsigned char  *)0x78)
#define DFLCTL       (*(volatile __near unsigned char  *)0x90)
#define DFLCTL_bit   (*(volatile __near __bitf_T *)0x90)
#define DFLEN        (((volatile __near __bitf_T *)0x90)->no0)
#define HIOTRM       (*(volatile __near unsigned char  *)0xA0)
#define HOCODIV      (*(volatile __near unsigned char  *)0xA8)
#define TEMPCAL0     (*(volatile __near unsigned char  *)0xAC)
#define TEMPCAL1     (*(volatile __near unsigned char  *)0xAD)
#define TEMPCAL2     (*(volatile __near unsigned char  *)0xAE)
#define TEMPCAL3     (*(volatile __near unsigned char  *)0xAF)
#define MDCL         (*(volatile __near unsigned short *)0xE0)
#define MDCH         (*(volatile __near unsigned short *)0xE2)
#define MDUC         (*(volatile __near unsigned char  *)0xE8)
#define MDUC_bit     (*(volatile __near __bitf_T *)0xE8)
#define DIVST        (((volatile __near __bitf_T *)0xE8)->no0)
#define MACSF        (((volatile __near __bitf_T *)0xE8)->no1)
#define MACOF        (((volatile __near __bitf_T *)0xE8)->no2)
#define MDSM         (((volatile __near __bitf_T *)0xE8)->no3)
#define MACMODE      (((volatile __near __bitf_T *)0xE8)->no6)
#define DIVMODE      (((volatile __near __bitf_T *)0xE8)->no7)
#define PER0         (*(volatile __near unsigned char  *)0xF0)
#define PER0_bit     (*(volatile __near __bitf_T *)0xF0)
#define TAU0EN       (((volatile __near __bitf_T *)0xF0)->no0)
#define SAU0EN       (((volatile __near __bitf_T *)0xF0)->no2)
#define IICA0EN      (((volatile __near __bitf_T *)0xF0)->no4)
#define ADCEN        (((volatile __near __bitf_T *)0xF0)->no5)
#define TMKAEN       (((volatile __near __bitf_T *)0xF0)->no7)
#define OSMC         (*(volatile __near unsigned char  *)0xF3)
#define RMC          (*(volatile __near unsigned char  *)0xF4)
#define RMC_bit      (*(volatile __near __bitf_T *)0xF4)
#define WDVOL        (((volatile __near __bitf_T *)0xF4)->no7)
#define RPECTL       (*(volatile __near unsigned char  *)0xF5)
#define RPECTL_bit   (*(volatile __near __bitf_T *)0xF5)
#define RPEF         (((volatile __near __bitf_T *)0xF5)->no0)
#define RPERDIS      (((volatile __near __bitf_T *)0xF5)->no7)
#define BCDADJ       (*(volatile __near unsigned char  *)0xFE)
#define SSR00        (*(volatile __near unsigned short *)0x100)
#define SSR00L       (*(volatile __near unsigned char  *)0x100)
#define SSR01        (*(volatile __near unsigned short *)0x102)
#define SSR01L       (*(volatile __near unsigned char  *)0x102)
#define SIR00        (*(volatile __near unsigned short *)0x108)
#define SIR00L       (*(volatile __near unsigned char  *)0x108)
#define SIR01        (*(volatile __near unsigned short *)0x10A)
#define SIR01L       (*(volatile __near unsigned char  *)0x10A)
#define SMR00        (*(volatile __near unsigned short *)0x110)
#define SMR01        (*(volatile __near unsigned short *)0x112)
#define SCR00        (*(volatile __near unsigned short *)0x118)
#define SCR01        (*(volatile __near unsigned short *)0x11A)
#define SE0          (*(volatile __near unsigned short *)0x120)
#define SE0L         (*(volatile __near unsigned char  *)0x120)
#define SE0L_bit     (*(volatile __near __bitf_T *)0x120)
#define SS0          (*(volatile __near unsigned short *)0x122)
#define SS0L         (*(volatile __near unsigned char  *)0x122)
#define SS0L_bit     (*(volatile __near __bitf_T *)0x122)
#define ST0          (*(volatile __near unsigned short *)0x124)
#define ST0L         (*(volatile __near unsigned char  *)0x124)
#define ST0L_bit     (*(volatile __near __bitf_T *)0x124)
#define SPS0         (*(volatile __near unsigned short *)0x126)
#define SPS0L        (*(volatile __near unsigned char  *)0x126)
#define SO0          (*(volatile __near unsigned short *)0x128)
#define SOE0         (*(volatile __near unsigned short *)0x12A)
#define SOE0L        (*(volatile __near unsigned char  *)0x12A)
#define SOE0L_bit    (*(volatile __near __bitf_T *)0x12A)
#define SOL0         (*(volatile __near unsigned short *)0x134)
#define SOL0L        (*(volatile __near unsigned char  *)0x134)
#define SSC0         (*(volatile __near unsigned short *)0x138)
#define SSC0L        (*(volatile __near unsigned char  *)0x138)
#define TCR00        (*(volatile __near unsigned short *)0x180)
#define TCR01        (*(volatile __near unsigned short *)0x182)
#define TCR02        (*(volatile __near unsigned short *)0x184)
#define TCR03        (*(volatile __near unsigned short *)0x186)
#define TMR00        (*(volatile __near unsigned short *)0x190)
#define TMR01        (*(volatile __near unsigned short *)0x192)
#define TMR02        (*(volatile __near unsigned short *)0x194)
#define TMR03        (*(volatile __near unsigned short *)0x196)
#define TSR00        (*(volatile __near unsigned short *)0x1A0)
#define TSR00L       (*(volatile __near unsigned char  *)0x1A0)
#define TSR01        (*(volatile __near unsigned short *)0x1A2)
#define TSR01L       (*(volatile __near unsigned char  *)0x1A2)
#define TSR02        (*(volatile __near unsigned short *)0x1A4)
#define TSR02L       (*(volatile __near unsigned char  *)0x1A4)
#define TSR03        (*(volatile __near unsigned short *)0x1A6)
#define TSR03L       (*(volatile __near unsigned char  *)0x1A6)
#define TE0          (*(volatile __near unsigned short *)0x1B0)
#define TE0L         (*(volatile __near unsigned char  *)0x1B0)
#define TE0L_bit     (*(volatile __near __bitf_T *)0x1B0)
#define TS0          (*(volatile __near unsigned short *)0x1B2)
#define TS0L         (*(volatile __near unsigned char  *)0x1B2)
#define TS0L_bit     (*(volatile __near __bitf_T *)0x1B2)
#define TT0          (*(volatile __near unsigned short *)0x1B4)
#define TT0L         (*(volatile __near unsigned char  *)0x1B4)
#define TT0L_bit     (*(volatile __near __bitf_T *)0x1B4)
#define TPS0         (*(volatile __near unsigned short *)0x1B6)
#define TO0          (*(volatile __near unsigned short *)0x1B8)
#define TO0L         (*(volatile __near unsigned char  *)0x1B8)
#define TOE0         (*(volatile __near unsigned short *)0x1BA)
#define TOE0L        (*(volatile __near unsigned char  *)0x1BA)
#define TOE0L_bit    (*(volatile __near __bitf_T *)0x1BA)
#define TOL0         (*(volatile __near unsigned short *)0x1BC)
#define TOL0L        (*(volatile __near unsigned char  *)0x1BC)
#define TOM0         (*(volatile __near unsigned short *)0x1BE)
#define TOM0L        (*(volatile __near unsigned char  *)0x1BE)
#define IICCTL00     (*(volatile __near unsigned char  *)0x230)
#define IICCTL00_bit (*(volatile __near __bitf_T *)0x230)
#define SPT0         (((volatile __near __bitf_T *)0x230)->no0)
#define STT0         (((volatile __near __bitf_T *)0x230)->no1)
#define ACKE0        (((volatile __near __bitf_T *)0x230)->no2)
#define WTIM0        (((volatile __near __bitf_T *)0x230)->no3)
#define SPIE0        (((volatile __near __bitf_T *)0x230)->no4)
#define WREL0        (((volatile __near __bitf_T *)0x230)->no5)
#define LREL0        (((volatile __near __bitf_T *)0x230)->no6)
#define IICE0        (((volatile __near __bitf_T *)0x230)->no7)
#define IICCTL01     (*(volatile __near unsigned char  *)0x231)
#define IICCTL01_bit (*(volatile __near __bitf_T *)0x231)
#define PRS0         (((volatile __near __bitf_T *)0x231)->no0)
#define DFC0         (((volatile __near __bitf_T *)0x231)->no2)
#define SMC0         (((volatile __near __bitf_T *)0x231)->no3)
#define DAD0         (((volatile __near __bitf_T *)0x231)->no4)
#define CLD0         (((volatile __near __bitf_T *)0x231)->no5)
#define WUP0         (((volatile __near __bitf_T *)0x231)->no7)
#define IICWL0       (*(volatile __near unsigned char  *)0x232)
#define IICWH0       (*(volatile __near unsigned char  *)0x233)
#define SVA0         (*(volatile __near unsigned char  *)0x234)
#define CRCD         (*(volatile __near unsigned short *)0x2FA)
#define P1           (*(volatile __near unsigned char  *)0xFF01)
#define P1_bit       (*(volatile __near __bitf_T *)0xFF01)
#define P2           (*(volatile __near unsigned char  *)0xFF02)
#define P2_bit       (*(volatile __near __bitf_T *)0xFF02)
#define P4           (*(volatile __near unsigned char  *)0xFF04)
#define P4_bit       (*(volatile __near __bitf_T *)0xFF04)
#define P6           (*(volatile __near unsigned char  *)0xFF06)
#define P6_bit       (*(volatile __near __bitf_T *)0xFF06)
#define P12          (*(volatile __near unsigned char  *)0xFF0C)
#define P12_bit      (*(volatile __near __bitf_T *)0xFF0C)
#define P13          (*(volatile __near unsigned char  *)0xFF0D)
#define P13_bit      (*(volatile __near __bitf_T *)0xFF0D)
#define SDR00        (*(volatile __near unsigned short *)0xFF10)
#define SIO00        (*(volatile __near unsigned char  *)0xFF10)
#define TXD0         (*(volatile __near unsigned char  *)0xFF10)
#define SDR01        (*(volatile __near unsigned short *)0xFF12)
#define RXD0         (*(volatile __near unsigned char  *)0xFF12)
#define SIO01        (*(volatile __near unsigned char  *)0xFF12)
#define TDR00        (*(volatile __near unsigned short *)0xFF18)
#define TDR01        (*(volatile __near unsigned short *)0xFF1A)
#define TDR01L       (*(volatile __near unsigned char  *)0xFF1A)
#define TDR01H       (*(volatile __near unsigned char  *)0xFF1B)
#define ADCR         (*(volatile __near unsigned short *)0xFF1E)
#define ADCRH        (*(volatile __near unsigned char  *)0xFF1F)
#define PM1          (*(volatile __near unsigned char  *)0xFF21)
#define PM1_bit      (*(volatile __near __bitf_T *)0xFF21)
#define PM2          (*(volatile __near unsigned char  *)0xFF22)
#define PM2_bit      (*(volatile __near __bitf_T *)0xFF22)
#define PM4          (*(volatile __near unsigned char  *)0xFF24)
#define PM4_bit      (*(volatile __near __bitf_T *)0xFF24)
#define PM6          (*(volatile __near unsigned char  *)0xFF26)
#define PM6_bit      (*(volatile __near __bitf_T *)0xFF26)
#define ADM0         (*(volatile __near unsigned char  *)0xFF30)
#define ADM0_bit     (*(volatile __near __bitf_T *)0xFF30)
#define ADCE         (((volatile __near __bitf_T *)0xFF30)->no0)
#define ADCS         (((volatile __near __bitf_T *)0xFF30)->no7)
#define ADS          (*(volatile __near unsigned char  *)0xFF31)
#define ADS_bit      (*(volatile __near __bitf_T *)0xFF31)
#define ADM1         (*(volatile __near unsigned char  *)0xFF32)
#define ADM1_bit     (*(volatile __near __bitf_T *)0xFF32)
#define KRCTL        (*(volatile __near unsigned char  *)0xFF34)
#define KRCTL_bit    (*(volatile __near __bitf_T *)0xFF34)
#define KRF          (*(volatile __near unsigned char  *)0xFF35)
#define KRM0         (*(volatile __near unsigned char  *)0xFF37)
#define KRM0_bit     (*(volatile __near __bitf_T *)0xFF37)
#define EGP0         (*(volatile __near unsigned char  *)0xFF38)
#define EGP0_bit     (*(volatile __near __bitf_T *)0xFF38)
#define EGN0         (*(volatile __near unsigned char  *)0xFF39)
#define EGN0_bit     (*(volatile __near __bitf_T *)0xFF39)
#define IICA0        (*(volatile __near unsigned char  *)0xFF50)
#define IICS0        (*(volatile __near unsigned char  *)0xFF51)
#define IICS0_bit    (*(volatile __near __bitf_T *)0xFF51)
#define SPD0         (((volatile __near __bitf_T *)0xFF51)->no0)
#define STD0         (((volatile __near __bitf_T *)0xFF51)->no1)
#define ACKD0        (((volatile __near __bitf_T *)0xFF51)->no2)
#define TRC0         (((volatile __near __bitf_T *)0xFF51)->no3)
#define COI0         (((volatile __near __bitf_T *)0xFF51)->no4)
#define EXC0         (((volatile __near __bitf_T *)0xFF51)->no5)
#define ALD0         (((volatile __near __bitf_T *)0xFF51)->no6)
#define MSTS0        (((volatile __near __bitf_T *)0xFF51)->no7)
#define IICF0        (*(volatile __near unsigned char  *)0xFF52)
#define IICF0_bit    (*(volatile __near __bitf_T *)0xFF52)
#define IICRSV0      (((volatile __near __bitf_T *)0xFF52)->no0)
#define STCEN0       (((volatile __near __bitf_T *)0xFF52)->no1)
#define IICBSY0      (((volatile __near __bitf_T *)0xFF52)->no6)
#define STCF0        (((volatile __near __bitf_T *)0xFF52)->no7)
#define TDR02        (*(volatile __near unsigned short *)0xFF64)
#define TDR03        (*(volatile __near unsigned short *)0xFF66)
#define TDR03L       (*(volatile __near unsigned char  *)0xFF66)
#define TDR03H       (*(volatile __near unsigned char  *)0xFF67)
#define ITMC         (*(volatile __near unsigned short *)0xFF90)
#define CMC          (*(volatile __near unsigned char  *)0xFFA0)
#define CSC          (*(volatile __near unsigned char  *)0xFFA1)
#define CSC_bit      (*(volatile __near __bitf_T *)0xFFA1)
#define HIOSTOP      (((volatile __near __bitf_T *)0xFFA1)->no0)
#define MSTOP        (((volatile __near __bitf_T *)0xFFA1)->no7)
#define OSTC         (*(volatile __near unsigned char  *)0xFFA2)
#define OSTC_bit     (*(volatile __near __bitf_T *)0xFFA2)
#define OSTS         (*(volatile __near unsigned char  *)0xFFA3)
#define CKC          (*(volatile __near unsigned char  *)0xFFA4)
#define CKC_bit      (*(volatile __near __bitf_T *)0xFFA4)
#define MCM0         (((volatile __near __bitf_T *)0xFFA4)->no4)
#define MCS          (((volatile __near __bitf_T *)0xFFA4)->no5)
#define CKS0         (*(volatile __near unsigned char  *)0xFFA5)
#define CKS0_bit     (*(volatile __near __bitf_T *)0xFFA5)
#define PCLOE0       (((volatile __near __bitf_T *)0xFFA5)->no7)
#define RESF         (*(volatile __near unsigned char  *)0xFFA8)
#define LVIM         (*(volatile __near unsigned char  *)0xFFA9)
#define LVIM_bit     (*(volatile __near __bitf_T *)0xFFA9)
#define LVIF         (((volatile __near __bitf_T *)0xFFA9)->no0)
#define LVIOMSK      (((volatile __near __bitf_T *)0xFFA9)->no1)
#define LVISEN       (((volatile __near __bitf_T *)0xFFA9)->no7)
#define LVIS         (*(volatile __near unsigned char  *)0xFFAA)
#define LVIS_bit     (*(volatile __near __bitf_T *)0xFFAA)
#define LVILV        (((volatile __near __bitf_T *)0xFFAA)->no0)
#define LVIMD        (((volatile __near __bitf_T *)0xFFAA)->no7)
#define WDTE         (*(volatile __near unsigned char  *)0xFFAB)
#define CRCIN        (*(volatile __near unsigned char  *)0xFFAC)
#define DSA0         (*(volatile __near unsigned char  *)0xFFB0)
#define DSA1         (*(volatile __near unsigned char  *)0xFFB1)
#define DRA0         (*(volatile __near unsigned short *)0xFFB2)
#define DRA0L        (*(volatile __near unsigned char  *)0xFFB2)
#define DRA0H        (*(volatile __near unsigned char  *)0xFFB3)
#define DRA1         (*(volatile __near unsigned short *)0xFFB4)
#define DRA1L        (*(volatile __near unsigned char  *)0xFFB4)
#define DRA1H        (*(volatile __near unsigned char  *)0xFFB5)
#define DBC0         (*(volatile __near unsigned short *)0xFFB6)
#define DBC0L        (*(volatile __near unsigned char  *)0xFFB6)
#define DBC0H        (*(volatile __near unsigned char  *)0xFFB7)
#define DBC1         (*(volatile __near unsigned short *)0xFFB8)
#define DBC1L        (*(volatile __near unsigned char  *)0xFFB8)
#define DBC1H        (*(volatile __near unsigned char  *)0xFFB9)
#define DMC0         (*(volatile __near unsigned char  *)0xFFBA)
#define DMC0_bit     (*(volatile __near __bitf_T *)0xFFBA)
#define DWAIT0       (((volatile __near __bitf_T *)0xFFBA)->no4)
#define DS0          (((volatile __near __bitf_T *)0xFFBA)->no5)
#define DRS0         (((volatile __near __bitf_T *)0xFFBA)->no6)
#define STG0         (((volatile __near __bitf_T *)0xFFBA)->no7)
#define DMC1         (*(volatile __near unsigned char  *)0xFFBB)
#define DMC1_bit     (*(volatile __near __bitf_T *)0xFFBB)
#define DWAIT1       (((volatile __near __bitf_T *)0xFFBB)->no4)
#define DS1          (((volatile __near __bitf_T *)0xFFBB)->no5)
#define DRS1         (((volatile __near __bitf_T *)0xFFBB)->no6)
#define STG1         (((volatile __near __bitf_T *)0xFFBB)->no7)
#define DRC0         (*(volatile __near unsigned char  *)0xFFBC)
#define DRC0_bit     (*(volatile __near __bitf_T *)0xFFBC)
#define DST0         (((volatile __near __bitf_T *)0xFFBC)->no0)
#define DEN0         (((volatile __near __bitf_T *)0xFFBC)->no7)
#define DRC1         (*(volatile __near unsigned char  *)0xFFBD)
#define DRC1_bit     (*(volatile __near __bitf_T *)0xFFBD)
#define DST1         (((volatile __near __bitf_T *)0xFFBD)->no0)
#define DEN1         (((volatile __near __bitf_T *)0xFFBD)->no7)
#define IF0          (*(volatile __near unsigned short *)0xFFE0)
#define IF0L         (*(volatile __near unsigned char  *)0xFFE0)
#define IF0L_bit     (*(volatile __near __bitf_T *)0xFFE0)
#define IF0H         (*(volatile __near unsigned char  *)0xFFE1)
#define IF0H_bit     (*(volatile __near __bitf_T *)0xFFE1)
#define WDTIIF       (((volatile __near __bitf_T *)0xFFE0)->no0)
#define LVIIF        (((volatile __near __bitf_T *)0xFFE0)->no1)
#define PIF0         (((volatile __near __bitf_T *)0xFFE0)->no2)
#define PIF1         (((volatile __near __bitf_T *)0xFFE0)->no3)
#define PIF2         (((volatile __near __bitf_T *)0xFFE0)->no4)
#define PIF3         (((volatile __near __bitf_T *)0xFFE0)->no5)
#define DMAIF0       (((volatile __near __bitf_T *)0xFFE0)->no6)
#define DMAIF1       (((volatile __near __bitf_T *)0xFFE0)->no7)
#define CSIIF00      (((volatile __near __bitf_T *)0xFFE1)->no0)
#define IICIF00      (((volatile __near __bitf_T *)0xFFE1)->no0)
#define STIF0        (((volatile __near __bitf_T *)0xFFE1)->no0)
#define CSIIF01      (((volatile __near __bitf_T *)0xFFE1)->no1)
#define IICIF01      (((volatile __near __bitf_T *)0xFFE1)->no1)
#define SRIF0        (((volatile __near __bitf_T *)0xFFE1)->no1)
#define SREIF0       (((volatile __near __bitf_T *)0xFFE1)->no2)
#define TMIF01H      (((volatile __near __bitf_T *)0xFFE1)->no3)
#define TMIF03H      (((volatile __near __bitf_T *)0xFFE1)->no4)
#define IICAIF0      (((volatile __near __bitf_T *)0xFFE1)->no5)
#define TMIF00       (((volatile __near __bitf_T *)0xFFE1)->no6)
#define TMIF01       (((volatile __near __bitf_T *)0xFFE1)->no7)
#define IF1          (*(volatile __near unsigned short *)0xFFE2)
#define IF1L         (*(volatile __near unsigned char  *)0xFFE2)
#define IF1L_bit     (*(volatile __near __bitf_T *)0xFFE2)
#define TMIF02       (((volatile __near __bitf_T *)0xFFE2)->no0)
#define TMIF03       (((volatile __near __bitf_T *)0xFFE2)->no1)
#define ADIF         (((volatile __near __bitf_T *)0xFFE2)->no2)
#define TMKAIF       (((volatile __near __bitf_T *)0xFFE2)->no3)
#define KRIF         (((volatile __near __bitf_T *)0xFFE2)->no4)
#define MDIF         (((volatile __near __bitf_T *)0xFFE2)->no5)
#define FLIF         (((volatile __near __bitf_T *)0xFFE2)->no6)
#define MK0          (*(volatile __near unsigned short *)0xFFE4)
#define MK0L         (*(volatile __near unsigned char  *)0xFFE4)
#define MK0L_bit     (*(volatile __near __bitf_T *)0xFFE4)
#define MK0H         (*(volatile __near unsigned char  *)0xFFE5)
#define MK0H_bit     (*(volatile __near __bitf_T *)0xFFE5)
#define WDTIMK       (((volatile __near __bitf_T *)0xFFE4)->no0)
#define LVIMK        (((volatile __near __bitf_T *)0xFFE4)->no1)
#define PMK0         (((volatile __near __bitf_T *)0xFFE4)->no2)
#define PMK1         (((volatile __near __bitf_T *)0xFFE4)->no3)
#define PMK2         (((volatile __near __bitf_T *)0xFFE4)->no4)
#define PMK3         (((volatile __near __bitf_T *)0xFFE4)->no5)
#define DMAMK0       (((volatile __near __bitf_T *)0xFFE4)->no6)
#define DMAMK1       (((volatile __near __bitf_T *)0xFFE4)->no7)
#define CSIMK00      (((volatile __near __bitf_T *)0xFFE5)->no0)
#define IICMK00      (((volatile __near __bitf_T *)0xFFE5)->no0)
#define STMK0        (((volatile __near __bitf_T *)0xFFE5)->no0)
#define CSIMK01      (((volatile __near __bitf_T *)0xFFE5)->no1)
#define IICMK01      (((volatile __near __bitf_T *)0xFFE5)->no1)
#define SRMK0        (((volatile __near __bitf_T *)0xFFE5)->no1)
#define SREMK0       (((volatile __near __bitf_T *)0xFFE5)->no2)
#define TMMK01H      (((volatile __near __bitf_T *)0xFFE5)->no3)
#define TMMK03H      (((volatile __near __bitf_T *)0xFFE5)->no4)
#define IICAMK0      (((volatile __near __bitf_T *)0xFFE5)->no5)
#define TMMK00       (((volatile __near __bitf_T *)0xFFE5)->no6)
#define TMMK01       (((volatile __near __bitf_T *)0xFFE5)->no7)
#define MK1          (*(volatile __near unsigned short *)0xFFE6)
#define MK1L         (*(volatile __near unsigned char  *)0xFFE6)
#define MK1L_bit     (*(volatile __near __bitf_T *)0xFFE6)
#define TMMK02       (((volatile __near __bitf_T *)0xFFE6)->no0)
#define TMMK03       (((volatile __near __bitf_T *)0xFFE6)->no1)
#define ADMK         (((volatile __near __bitf_T *)0xFFE6)->no2)
#define TMKAMK       (((volatile __near __bitf_T *)0xFFE6)->no3)
#define KRMK         (((volatile __near __bitf_T *)0xFFE6)->no4)
#define MDMK         (((volatile __near __bitf_T *)0xFFE6)->no5)
#define FLMK         (((volatile __near __bitf_T *)0xFFE6)->no6)
#define PR00         (*(volatile __near unsigned short *)0xFFE8)
#define PR00L        (*(volatile __near unsigned char  *)0xFFE8)
#define PR00L_bit    (*(volatile __near __bitf_T *)0xFFE8)
#define PR00H        (*(volatile __near unsigned char  *)0xFFE9)
#define PR00H_bit    (*(volatile __near __bitf_T *)0xFFE9)
#define WDTIPR0      (((volatile __near __bitf_T *)0xFFE8)->no0)
#define LVIPR0       (((volatile __near __bitf_T *)0xFFE8)->no1)
#define PPR00        (((volatile __near __bitf_T *)0xFFE8)->no2)
#define PPR01        (((volatile __near __bitf_T *)0xFFE8)->no3)
#define PPR02        (((volatile __near __bitf_T *)0xFFE8)->no4)
#define PPR03        (((volatile __near __bitf_T *)0xFFE8)->no5)
#define DMAPR00      (((volatile __near __bitf_T *)0xFFE8)->no6)
#define DMAPR01      (((volatile __near __bitf_T *)0xFFE8)->no7)
#define CSIPR000     (((volatile __near __bitf_T *)0xFFE9)->no0)
#define IICPR000     (((volatile __near __bitf_T *)0xFFE9)->no0)
#define STPR00       (((volatile __near __bitf_T *)0xFFE9)->no0)
#define CSIPR001     (((volatile __near __bitf_T *)0xFFE9)->no1)
#define IICPR001     (((volatile __near __bitf_T *)0xFFE9)->no1)
#define SRPR00       (((volatile __near __bitf_T *)0xFFE9)->no1)
#define SREPR00      (((volatile __near __bitf_T *)0xFFE9)->no2)
#define TMPR001H     (((volatile __near __bitf_T *)0xFFE9)->no3)
#define TMPR003H     (((volatile __near __bitf_T *)0xFFE9)->no4)
#define IICAPR00     (((volatile __near __bitf_T *)0xFFE9)->no5)
#define TMPR000      (((volatile __near __bitf_T *)0xFFE9)->no6)
#define TMPR001      (((volatile __near __bitf_T *)0xFFE9)->no7)
#define PR01         (*(volatile __near unsigned short *)0xFFEA)
#define PR01L        (*(volatile __near unsigned char  *)0xFFEA)
#define PR01L_bit    (*(volatile __near __bitf_T *)0xFFEA)
#define TMPR002      (((volatile __near __bitf_T *)0xFFEA)->no0)
#define TMPR003      (((volatile __near __bitf_T *)0xFFEA)->no1)
#define ADPR0        (((volatile __near __bitf_T *)0xFFEA)->no2)
#define TMKAPR0      (((volatile __near __bitf_T *)0xFFEA)->no3)
#define KRPR0        (((volatile __near __bitf_T *)0xFFEA)->no4)
#define MDPR0        (((volatile __near __bitf_T *)0xFFEA)->no5)
#define FLPR0        (((volatile __near __bitf_T *)0xFFEA)->no6)
#define PR10         (*(volatile __near unsigned short *)0xFFEC)
#define PR10L        (*(volatile __near unsigned char  *)0xFFEC)
#define PR10L_bit    (*(volatile __near __bitf_T *)0xFFEC)
#define PR10H        (*(volatile __near unsigned char  *)0xFFED)
#define PR10H_bit    (*(volatile __near __bitf_T *)0xFFED)
#define WDTIPR1      (((volatile __near __bitf_T *)0xFFEC)->no0)
#define LVIPR1       (((volatile __near __bitf_T *)0xFFEC)->no1)
#define PPR10        (((volatile __near __bitf_T *)0xFFEC)->no2)
#define PPR11        (((volatile __near __bitf_T *)0xFFEC)->no3)
#define PPR12        (((volatile __near __bitf_T *)0xFFEC)->no4)
#define PPR13        (((volatile __near __bitf_T *)0xFFEC)->no5)
#define DMAPR10      (((volatile __near __bitf_T *)0xFFEC)->no6)
#define DMAPR11      (((volatile __near __bitf_T *)0xFFEC)->no7)
#define CSIPR100     (((volatile __near __bitf_T *)0xFFED)->no0)
#define IICPR100     (((volatile __near __bitf_T *)0xFFED)->no0)
#define STPR10       (((volatile __near __bitf_T *)0xFFED)->no0)
#define CSIPR101     (((volatile __near __bitf_T *)0xFFED)->no1)
#define IICPR101     (((volatile __near __bitf_T *)0xFFED)->no1)
#define SRPR10       (((volatile __near __bitf_T *)0xFFED)->no1)
#define SREPR10      (((volatile __near __bitf_T *)0xFFED)->no2)
#define TMPR101H     (((volatile __near __bitf_T *)0xFFED)->no3)
#define TMPR103H     (((volatile __near __bitf_T *)0xFFED)->no4)
#define IICAPR10     (((volatile __near __bitf_T *)0xFFED)->no5)
#define TMPR100      (((volatile __near __bitf_T *)0xFFED)->no6)
#define TMPR101      (((volatile __near __bitf_T *)0xFFED)->no7)
#define PR11         (*(volatile __near unsigned short *)0xFFEE)
#define PR11L        (*(volatile __near unsigned char  *)0xFFEE)
#define PR11L_bit    (*(volatile __near __bitf_T *)0xFFEE)
#define TMPR102      (((volatile __near __bitf_T *)0xFFEE)->no0)
#define TMPR103      (((volatile __near __bitf_T *)0xFFEE)->no1)
#define ADPR1        (((volatile __near __bitf_T *)0xFFEE)->no2)
#define TMKAPR1      (((volatile __near __bitf_T *)0xFFEE)->no3)
#define KRPR1        (((volatile __near __bitf_T *)0xFFEE)->no4)
#define MDPR1        (((volatile __near __bitf_T *)0xFFEE)->no5)
#define FLPR1        (((volatile __near __bitf_T *)0xFFEE)->no6)
#define MDAL         (*(volatile __near unsigned short *)0xFFF0)
#define MULA         (*(volatile __near unsigned short *)0xFFF0)
#define MDAH         (*(volatile __near unsigned short *)0xFFF2)
#define MULB         (*(volatile __near unsigned short *)0xFFF2)
#define MDBH         (*(volatile __near unsigned short *)0xFFF4)
#define MULOH        (*(volatile __near unsigned short *)0xFFF4)
#define MDBL         (*(volatile __near unsigned short *)0xFFF6)
#define MULOL        (*(volatile __near unsigned short *)0xFFF6)
#define PMC          (*(volatile __near unsigned char  *)0xFFFE)
#define PMC_bit      (*(volatile __near __bitf_T *)0xFFFE)
#define MAA          (((volatile __near __bitf_T *)0xFFFE)->no0)


#define INTWDTI                         0x0004
#define INTLVI                          0x0006
#define INTP0                           0x0008
#define INTP1                           0x000A
#define INTP2                           0x000C
#define INTP3                           0x000E
#define INTDMA0                         0x0010
#define INTDMA1                         0x0012
#define INTCSI00                        0x0014
#define INTIIC00                        0x0014
#define INTST0                          0x0014
#define INTCSI01                        0x0016
#define INTIIC01                        0x0016
#define INTSR0                          0x0016
#define INTSRE0                         0x0018
#define INTTM01H                        0x001A
#define INTTM03H                        0x001C
#define INTIICA0                        0x001E
#define INTTM00                         0x0020
#define INTTM01                         0x0022
#define INTTM02                         0x0024
#define INTTM03                         0x0026
#define INTAD                           0x0028
#define INTIT                           0x002A
#define INTKR                           0x002C
#define INTMD                           0x002E
#define INTFL                           0x0030

#endif
