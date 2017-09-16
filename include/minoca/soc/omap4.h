/*++

Copyright (c) 2014 Minoca Corp.

    This file is licensed under the terms of the GNU General Public License
    version 3. Alternative licensing terms are available. Contact
    info@minocacorp.com for details. See the LICENSE file at the root of this
    project for complete licensing information.

Module Name:

    omap4.h

Abstract:

    This header contains definitions for Texas Instruments OMAP44xx System on
    Chip.

Author:

    Evan Green 3-Mar-2014

--*/

//
// ------------------------------------------------------------------- Includes
//

//
// --------------------------------------------------------------------- Macros
//

//
// ---------------------------------------------------------------- Definitions
//

//
// Define the fixed 32kHz frequency.
//

#define OMAP4430_32KHZ_FREQUENCY 32768

//
// Define the memory map.
//

#define OMAP4430_L4_PER_BASE 0x48000000
#define OMAP4430_L4_I2C_BASE (OMAP4430_L4_PER_BASE + 0x00070000)
#define OMAP4430_L4_I2C_SIZE 0x1000

#define OMAP4430_UART1_BASE 0x4806A000
#define OMAP4430_UART2_BASE 0x4806C000
#define OMAP4430_UART3_BASE 0x48020000
#define OMAP4430_UART4_BASE 0x4806E000

#define OMAP4430_HSMMC1_BASE 0x4809C000
#define OMAP4430_HSMMC2_BASE 0x480B4000
#define OMAP4430_HSMMC3_BASE 0x480AD000

#define OMAP4430_GIC_DISTRIBUTOR_BASE   0x48241000
#define OMAP4430_GIC_CPU_INTERFACE_BASE 0x48240100

#define OMAP4430_GPIO1_BASE 0x4A310000
#define OMAP4430_GPIO2_BASE 0x48055000
#define OMAP4430_GPIO3_BASE 0x48057000
#define OMAP4430_GPIO4_BASE 0x48059000
#define OMAP4430_GPIO5_BASE 0x4805B000
#define OMAP4430_GPIO6_BASE 0x4805D000

#define OMAP4430_GPTIMER1_BASE 0x4A318000
#define OMAP4430_GPTIMER2_BASE 0x48032000
#define OMAP4430_GPTIMER3_BASE 0x48034000
#define OMAP4430_GPTIMER4_BASE 0x48036000
#define OMAP4430_GPTIMER5_BASE 0x49038000
#define OMAP4430_GPTIMER6_BASE 0x4903A000
#define OMAP4430_GPTIMER7_BASE 0x4903C000
#define OMAP4430_GPTIMER8_BASE 0x4903E000
#define OMAP4430_GPTIMER9_BASE 0x4803E000
#define OMAP4430_GPTIMER10_BASE 0x48086000
#define OMAP4430_GPTIMER11_BASE 0x48088000

#define OMAP4430_FUSE_DIE_ID0 0x4A002200
#define OMAP4430_FUSE_DIE_ID1 0x4A002208
#define OMAP4430_FUSE_DIE_ID2 0x4A00220C
#define OMAP4430_FUSE_DIE_ID3 0x4A002210

#define OMAP4430_L3_INIT_CM2_BASE 0x4A009300

#define OMAP4430_USB_TLL_CONFIG_BASE 0x4A062000
#define OMAP4430_HS_USB_HOST_BASE 0x4A064000
#define OMAP4430_EHCI_BASE 0x4A064C00

#define OMAP4430_PRM_BASE 0x4A306000
#define OMAP4430_PRM_INTRCONN_SOCKET_OFFSET 0x00000000
#define OMAP4430_PRM_CKGEN_OFFSET 0x00000100
#define OMAP4430_PRM_DEVICE_OFFSET 0x00001B00
#define OMAP4430_PRM_SIZE 0x2000
#define OMAP4430_SCRM_BASE 0x4A30A000

#define OMAP4430_WATCHDOG2_BASE 0x4A314000
#define OMAP4430_WAKEUP_CONTROL_BASE 0x4A31E000
#define OMAP4430_CTRL_PADCONF_CORE_BASE 0x4A100000

//
// Define the interrupt map. 32 is added to each line to account for the GIC's
// software lines.
//

#define OMAP4430_IRQ_GPTIMER1 (32 + 37)
#define OMAP4430_IRQ_GPTIMER2 (32 + 38)
#define OMAP4430_IRQ_GPTIMER3 (32 + 39)
#define OMAP4430_IRQ_GPTIMER4 (32 + 40)
#define OMAP4430_IRQ_GPTIMER5 (32 + 41)
#define OMAP4430_IRQ_GPTIMER6 (32 + 42)
#define OMAP4430_IRQ_GPTIMER7 (32 + 43)
#define OMAP4430_IRQ_GPTIMER8 (32 + 44)
#define OMAP4430_IRQ_GPTIMER9 (32 + 45)
#define OMAP4430_IRQ_GPTIMER10 (32 + 46)
#define OMAP4430_IRQ_GPTIMER11 (32 + 47)

#define OMAP4430_GPMC_BASE          0x50000000

#define CM_SYS_CLKSEL               0x4A306110
#define CM_CLKSEL_CORE              0x4A004100
#define CM_ABE_PLL_REF_CLKSEL       0x4A30610C

//
// CM1.CKGEN module registers.
//

#define CM_CLKSEL_CORE              0x4A004100
#define CM_CLKSEL_ABE               0x4A004108
#define CM_DLL_CTRL                 0x4A004110
#define CM_CLKMODE_DPLL_CORE        0x4A004120
#define CM_IDLEST_DPLL_CORE         0x4A004124
#define CM_AUTOIDLE_DPLL_CORE       0x4A004128
#define CM_CLKSEL_DPLL_CORE         0x4A00412c
#define CM_DIV_M2_DPLL_CORE         0x4A004130
#define CM_DIV_M3_DPLL_CORE         0x4A004134
#define CM_DIV_M4_DPLL_CORE         0x4A004138
#define CM_DIV_M5_DPLL_CORE         0x4A00413C
#define CM_DIV_M6_DPLL_CORE         0x4A004140
#define CM_DIV_M7_DPLL_CORE         0x4A004144
#define CM_SSC_DELTAMSTEP_DPLL_CORE 0x4A004148
#define CM_SSC_MODFREQDIV_DPLL_CORE 0x4A00414C
#define CM_EMU_OVERRIDE_DPLL_CORE   0x4A004150
#define CM_CLKMODE_DPLL_MPU         0x4A004160
#define CM_IDLEST_DPLL_MPU          0x4A004164
#define CM_AUTOIDLE_DPLL_MPU        0x4A004168
#define CM_CLKSEL_DPLL_MPU          0x4A00416C
#define CM_DIV_M2_DPLL_MPU          0x4A004170
#define CM_SSC_DELTAMSTEP_DPLL_MPU  0x4A004188
#define CM_SSC_MODFREQDIV_DPLL_MPU  0x4A00418C
#define CM_BYPCLK_DPLL_MPU          0x4A00419C
#define CM_CLKMODE_DPLL_IVA         0x4A0041A0
#define CM_IDLEST_DPLL_IVA          0x4A0041A4
#define CM_AUTOIDLE_DPLL_IVA        0x4A0041A8
#define CM_CLKSEL_DPLL_IVA          0x4A0041AC
#define CM_DIV_M4_DPLL_IVA          0x4A0041B8
#define CM_DIV_M5_DPLL_IVA          0x4A0041Bc
#define CM_SSC_DELTAMSTEP_DPLL_IVA  0x4A0041C8
#define CM_SSC_MODFREQDIV_DPLL_IVA  0x4A0041CC
#define CM_BYPCLK_DPLL_IVA          0x4A0041DC
#define CM_CLKMODE_DPLL_ABE         0x4A0041E0
#define CM_IDLEST_DPLL_ABE          0x4A0041E4
#define CM_AUTOIDLE_DPLL_ABE        0x4A0041E8
#define CM_CLKSEL_DPLL_ABE          0x4A0041Ec
#define CM_DIV_M2_DPLL_ABE          0x4A0041F0
#define CM_DIV_M3_DPLL_ABE          0x4A0041F4
#define CM_SSC_DELTAMSTEP_DPLL_ABE  0x4A004208
#define CM_SSC_MODFREQDIV_DPLL_ABE  0x4A00420C
#define CM_CLKMODE_DPLL_DDRPHY      0x4A004220
#define CM_IDLEST_DPLL_DDRPHY       0x4A004224
#define CM_AUTOIDLE_DPLL_DDRPHY     0x4A004228
#define CM_CLKSEL_DPLL_DDRPHY       0x4A00422C
#define CM_DIV_M2_DPLL_DDRPHY       0x4A004230
#define CM_DIV_M4_DPLL_DDRPHY       0x4A004238
#define CM_DIV_M5_DPLL_DDRPHY       0x4A00423C
#define CM_DIV_M6_DPLL_DDRPHY       0x4A004240
#define CM_SSC_DELTAMSTEP_DPLL_DDRPHY 0x4A004248
#define CM_MPU_MPU_CLKCTRL          0x4A004320

//
// CM2.CKGEN module registers
//

#define CM_CLKSEL_DUCATI_ISS_ROOT   0x4A008100
#define CM_CLKSEL_USB_60MHz         0x4A008104
#define CM_SCALE_FCLK               0x4A008108
#define CM_CORE_DVFS_PERF1          0x4A008110
#define CM_CORE_DVFS_PERF2          0x4A008114
#define CM_CORE_DVFS_PERF3          0x4A008118
#define CM_CORE_DVFS_PERF4          0x4A00811C
#define CM_CORE_DVFS_CURRENT        0x4A008124
#define CM_IVA_DVFS_PERF_TESLA      0x4A008128
#define CM_IVA_DVFS_PERF_IVAHD      0x4A00812C
#define CM_IVA_DVFS_PERF_ABE        0x4A008130
#define CM_IVA_DVFS_CURRENT         0x4A008138
#define CM_CLKMODE_DPLL_PER         0x4A008140
#define CM_IDLEST_DPLL_PER          0x4A008144
#define CM_AUTOIDLE_DPLL_PER        0x4A008148
#define CM_CLKSEL_DPLL_PER          0x4A00814C
#define CM_DIV_M2_DPLL_PER          0x4A008150
#define CM_DIV_M3_DPLL_PER          0x4A008154
#define CM_DIV_M4_DPLL_PER          0x4A008158
#define CM_DIV_M5_DPLL_PER          0x4A00815C
#define CM_DIV_M6_DPLL_PER          0x4A008160
#define CM_DIV_M7_DPLL_PER          0x4A008164
#define CM_SSC_DELTAMSTEP_DPLL_PER  0x4A008168
#define CM_SSC_MODFREQDIV_DPLL_PER  0x4A00816C
#define CM_EMU_OVERRIDE_DPLL_PER    0x4A008170
#define CM_CLKMODE_DPLL_USB         0x4A008180
#define CM_IDLEST_DPLL_USB          0x4A008184
#define CM_AUTOIDLE_DPLL_USB        0x4A008188
#define CM_CLKSEL_DPLL_USB          0x4A00818C
#define CM_DIV_M2_DPLL_USB          0x4A008190
#define CM_SSC_DELTAMSTEP_DPLL_USB  0x4A0081A8
#define CM_SSC_MODFREQDIV_DPLL_USB  0x4A0081AC
#define CM_CLKDCOLDO_DPLL_USB       0x4A0081B4
#define CM_CLKMODE_DPLL_UNIPRO      0x4A0081C0
#define CM_IDLEST_DPLL_UNIPRO       0x4A0081C4
#define CM_AUTOIDLE_DPLL_UNIPRO     0x4A0081C8
#define CM_CLKSEL_DPLL_UNIPRO       0x4A0081CC
#define CM_DIV_M2_DPLL_UNIPRO       0x4A0081D0
#define CM_SSC_DELTAMSTEP_DPLL_UNIPRO 0x4A0081E8
#define CM_SSC_MODFREQDIV_DPLL_UNIPRO 0x4A0081EC

//
// CM2.CORE module registers
//

#define CM_L3_1_CLKSTCTRL           0x4A008700
#define CM_L3_1_DYNAMICDEP          0x4A008708
#define CM_L3_1_L3_1_CLKCTRL        0x4A008720
#define CM_L3_2_CLKSTCTRL           0x4A008800
#define CM_L3_2_DYNAMICDEP          0x4A008808
#define CM_L3_2_L3_2_CLKCTRL        0x4A008820
#define CM_L3_2_GPMC_CLKCTRL        0x4A008828
#define CM_L3_2_OCMC_RAM_CLKCTRL    0x4A008830
#define CM_DUCATI_CLKSTCTRL         0x4A008900
#define CM_DUCATI_STATICDEP         0x4A008904
#define CM_DUCATI_DYNAMICDEP        0x4A008908
#define CM_DUCATI_DUCATI_CLKCTRL    0x4A008920
#define CM_SDMA_CLKSTCTRL           0x4A008A00
#define CM_SDMA_STATICDEP           0x4A008A04
#define CM_SDMA_DYNAMICDEP          0x4A008A08
#define CM_SDMA_SDMA_CLKCTRL        0x4A008A20
#define CM_MEMIF_CLKSTCTRL          0x4A008B00
#define CM_MEMIF_DMM_CLKCTRL        0x4A008B20
#define CM_MEMIF_EMIF_FW_CLKCTRL    0x4A008B28
#define CM_MEMIF_EMIF_1_CLKCTRL     0x4A008B30
#define CM_MEMIF_EMIF_2_CLKCTRL     0x4A008B38
#define CM_MEMIF_DLL_CLKCTRL        0x4A008B40
#define CM_MEMIF_EMIF_H1_CLKCTRL    0x4A008B50
#define CM_MEMIF_EMIF_H2_CLKCTRL    0x4A008B58
#define CM_MEMIF_DLL_H_CLKCTRL      0x4A008B60
#define CM_D2D_CLKSTCTRL            0x4A008C00
#define CM_D2D_STATICDEP            0x4A008C04
#define CM_D2D_DYNAMICDEP           0x4A008C08
#define CM_D2D_SAD2D_CLKCTRL        0x4A008C20
#define CM_D2D_MODEM_ICR_CLKCTRL    0x4A008C28
#define CM_D2D_SAD2D_FW_CLKCTRL     0x4A008C30
#define CM_L4CFG_CLKSTCTRL          0x4A008D00
#define CM_L4CFG_DYNAMICDEP         0x4A008D08
#define CM_L4CFG_L4_CFG_CLKCTRL     0x4A008D20
#define CM_L4CFG_HW_SEM_CLKCTRL     0x4A008D28
#define CM_L4CFG_MAILBOX_CLKCTRL    0x4A008D30
#define CM_L4CFG_SAR_ROM_CLKCTRL    0x4A008D38
#define CM_L3INSTR_CLKSTCTRL        0x4A008E00
#define CM_L3INSTR_L3_3_CLKCTRL     0x4A008E20
#define CM_L3INSTR_L3_INSTR_CLKCTRL 0x4A008E28
#define CM_L3INSTR_OCP_WP1_CLKCTRL  0x4A008E40

//
// CM2.L4PER registers
//

#define CM_L4PER_CLKSTCTRL          0x4A009400
#define CM_L4PER_DYNAMICDEP         0x4A009408
#define CM_L4PER_ADC_CLKCTRL        0x4A009420
#define CM_L4PER_DMTIMER10_CLKCTRL  0x4A009428
#define CM_L4PER_DMTIMER11_CLKCTRL  0x4A009430
#define CM_L4PER_DMTIMER2_CLKCTRL   0x4A009438
#define CM_L4PER_DMTIMER3_CLKCTRL   0x4A009440
#define CM_L4PER_DMTIMER4_CLKCTRL   0x4A009448
#define CM_L4PER_DMTIMER9_CLKCTRL   0x4A009450
#define CM_L4PER_ELM_CLKCTRL        0x4A009458
#define CM_L4PER_GPIO2_CLKCTRL      0x4A009460
#define CM_L4PER_GPIO3_CLKCTRL      0x4A009468
#define CM_L4PER_GPIO4_CLKCTRL      0x4A009470
#define CM_L4PER_GPIO5_CLKCTRL      0x4A009478
#define CM_L4PER_GPIO6_CLKCTRL      0x4A009480
#define CM_L4PER_HDQ1W_CLKCTRL      0x4A009488
#define CM_L4PER_HECC1_CLKCTRL      0x4A009490
#define CM_L4PER_HECC2_CLKCTRL      0x4A009498
#define CM_L4PER_I2C1_CLKCTRL       0x4A0094A0
#define CM_L4PER_I2C2_CLKCTRL       0x4A0094A8
#define CM_L4PER_I2C3_CLKCTRL       0x4A0094B0
#define CM_L4PER_I2C4_CLKCTRL       0x4A0094B8
#define CM_L4PER_L4PER_CLKCTRL      0x4A0094C0
#define CM_L4PER_MCASP2_CLKCTRL     0x4A0094D0
#define CM_L4PER_MCASP3_CLKCTRL     0x4A0094D8
#define CM_L4PER_MCBSP4_CLKCTRL     0x4A0094E0
#define CM_L4PER_MGATE_CLKCTRL      0x4A0094E8
#define CM_L4PER_MCSPI1_CLKCTRL     0x4A0094F0
#define CM_L4PER_MCSPI2_CLKCTRL     0x4A0094F8
#define CM_L4PER_MCSPI3_CLKCTRL     0x4A009500
#define CM_L4PER_MCSPI4_CLKCTRL     0x4A009508
#define CM_L4PER_MMCSD3_CLKCTRL     0x4A009520
#define CM_L4PER_MMCSD4_CLKCTRL     0x4A009528
#define CM_L4PER_MSPROHG_CLKCTRL    0x4A009530
#define CM_L4PER_SLIMBUS2_CLKCTRL   0x4A009538
#define CM_L4PER_UART1_CLKCTRL      0x4A009540
#define CM_L4PER_UART2_CLKCTRL      0x4A009548
#define CM_L4PER_UART3_CLKCTRL      0x4A009550
#define CM_L4PER_UART4_CLKCTRL      0x4A009558
#define CM_L4PER_MMCSD5_CLKCTRL     0x4A009560
#define CM_L4PER_I2C5_CLKCTRL       0x4A009568
#define CM_L4SEC_CLKSTCTRL          0x4A009580
#define CM_L4SEC_STATICDEP          0x4A009584
#define CM_L4SEC_DYNAMICDEP         0x4A009588
#define CM_L4SEC_AES1_CLKCTRL       0x4A0095A0
#define CM_L4SEC_AES2_CLKCTRL       0x4A0095A8
#define CM_L4SEC_DES3DES_CLKCTRL    0x4A0095B0
#define CM_L4SEC_PKAEIP29_CLKCTRL   0x4A0095B8
#define CM_L4SEC_RNG_CLKCTRL        0x4A0095C0
#define CM_L4SEC_SHA2MD51_CLKCTRL   0x4A0095C8
#define CM_L4SEC_CRYPTODMA_CLKCTRL  0x4A0095D8

//
// CM2.L3INIT registers
//

#define CM_L3INIT_HSMMC1_CLKCTRL        0x4A009328
#define CM_L3INIT_HSMMC2_CLKCTRL        0x4A009330
#define CM_L3INIT_HSI_CLKCTRL           0x4A009338
#define CM_L3INIT_UNIPRO1_CLKCTRL       0x4A009340
#define CM_L3INIT_HSUSBHOST_CLKCTRL     0x4A009358
#define CM_L3INIT_HSUSBOTG_CLKCTRL      0x4A009360
#define CM_L3INIT_HSUSBTLL_CLKCTRL      0x4A009368
#define CM_L3INIT_P1500_CLKCTRL         0x4A009378
#define CM_L3INIT_FSUSB_CLKCTRL         0x4A0093D0
#define CM_L3INIT_USBPHY_CLKCTRL        0x4A0093D0

//
// PRM.WKUP_CM registers
//

#define CM_WKUP_CLKSTCTRL           0x4a307800
#define CM_WKUP_L4WKUP_CLKCTRL      0x4a307820
#define CM_WKUP_WDT1_CLKCTRL        0x4a307828
#define CM_WKUP_WDT2_CLKCTRL        0x4a307830
#define CM_WKUP_GPIO1_CLKCTRL       0x4a307838
#define CM_WKUP_TIMER1_CLKCTRL      0x4a307840
#define CM_WKUP_TIMER12_CLKCTRL     0x4a307848
#define CM_WKUP_SYNCTIMER_CLKCTRL   0x4a307850
#define CM_WKUP_USIM_CLKCTRL        0x4a307858
#define CM_WKUP_SARRAM_CLKCTRL      0x4a307860
#define CM_WKUP_KEYBOARD_CLKCTRL    0x4a307878
#define CM_WKUP_RTC_CLKCTRL         0x4a307880
#define CM_WKUP_BANDGAP_CLKCTRL     0x4a307888

//
// CM2.SGX registers
//

#define CM_SGX_CLKSTCTRL            0x4A009200
#define CM_SGX_SGX_CLKCTRL          0x4A009220

//
// ------------------------------------------------------ Data Type Definitions
//

//
// Define register offsets for GPIO blocks. All offsets are in bytes.
//

typedef enum _GPIO_REGISTER {
    OmapGpioControl         = 0x130,
    OmapGpioOutputEnable    = 0x134,
    OmapGpioDataIn          = 0x138,
    OmapGpioDataOut         = 0x13C,
    OmapGpioOutputClear     = 0x190,
    OmapGpioOutputSet       = 0x194
} GPIO_REGISTER, *PGPIO_REGISTER;

typedef enum _OMAP4_REVISION {
    Omap4RevisionInvalid,
    Omap4430RevisionEs10,
    Omap4430RevisionEs20,
    Omap4430RevisionEs21,
    Omap4430RevisionEs22,
    Omap4430RevisionEs23,
    Omap4460RevisionEs10,
    Omap4460RevisionEs11,
} OMAP4_REVISION, *POMAP4_REVISION;

//
// -------------------------------------------------------------------- Globals
//

//
// -------------------------------------------------------- Function Prototypes
//
