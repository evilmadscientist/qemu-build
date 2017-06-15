/*
 * STM32- CAN(Controller area network) emulation.
 *
 * Copyright (c) 2016 Liviu Ionescu.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef STM32_CAN_H_
#define STM32_CAN_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/stm32/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_STM32_CANDEVICE_PATH_STM32"CAN"

// ----------------------------------------------------------------------------

#define TYPE_STM32_CANTYPE_STM32_PREFIX "can" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_STM32_CAN_PARENT TYPE_PERIPHERAL
typedef PeripheralClass STM32CANParentClass;
typedef PeripheralState STM32CANParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define STM32_CAN_GET_CLASS(obj) \
    OBJECT_GET_CLASS(STM32CANClass, (obj), TYPE_STM32_CAN)
#define STM32_CAN_CLASS(klass) \
    OBJECT_CLASS_CHECK(STM32CANClass, (klass), TYPE_STM32_CAN)

typedef struct {
    // private: 
    STM32CANParentClass parent_class;
    // public: 

    // None, so far.
} STM32CANClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define STM32_CAN_STATE(obj) \
    OBJECT_CHECK(STM32CANState, (obj), TYPE_STM32_CAN)

typedef struct {
    // private:
    STM32CANParentState parent_obj;
    // public:

    const STM32Capabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // F0CAN(Controller area network) registers.
        struct { 
Object *can_mcr; // 0x0(CAN_MCR) 
Object *can_msr; // 0x4(CAN_MSR) 
Object *can_tsr; // 0x8(CAN_TSR) 
Object *can_rf0r; // 0xC(CAN_RF0R) 
Object *can_rf1r; // 0x10(CAN_RF1R) 
Object *can_ier; // 0x14(CAN_IER) 
Object *can_esr; // 0x18(CAN_ESR) 
Object *can_btr; // 0x1C(CAN BTR) 
Object *can_ti0r; // 0x180(CAN_TI0R) 
Object *can_tdt0r; // 0x184(CAN_TDT0R) 
Object *can_tdl0r; // 0x188(CAN_TDL0R) 
Object *can_tdh0r; // 0x18C(CAN_TDH0R) 
Object *can_ti1r; // 0x190(CAN_TI1R) 
Object *can_tdt1r; // 0x194(CAN_TDT1R) 
Object *can_tdl1r; // 0x198(CAN_TDL1R) 
Object *can_tdh1r; // 0x19C(CAN_TDH1R) 
Object *can_ti2r; // 0x1A0(CAN_TI2R) 
Object *can_tdt2r; // 0x1A4(CAN_TDT2R) 
Object *can_tdl2r; // 0x1A8(CAN_TDL2R) 
Object *can_tdh2r; // 0x1AC(CAN_TDH2R) 
Object *can_ri0r; // 0x1B0(CAN_RI0R) 
Object *can_rdt0r; // 0x1B4(CAN_RDT0R) 
Object *can_rdl0r; // 0x1B8(CAN_RDL0R) 
Object *can_rdh0r; // 0x1BC(CAN_RDH0R) 
Object *can_ri1r; // 0x1C0(CAN_RI1R) 
Object *can_rdt1r; // 0x1C4(CAN_RDT1R) 
Object *can_rdl1r; // 0x1C8(CAN_RDL1R) 
Object *can_rdh1r; // 0x1CC(CAN_RDH1R) 
Object *can_fmr; // 0x200(CAN_FMR) 
Object *can_fm1r; // 0x204(CAN_FM1R) 
Object *can_fs1r; // 0x20C(CAN_FS1R) 
Object *can_ffa1r; // 0x214(CAN_FFA1R) 
Object *can_fa1r; // 0x21C(CAN_FA1R) 
Object *f0r1; // 0x240(Filter bank 0 register 1) 
Object *f0r2; // 0x244(Filter bank 0 register 2) 
Object *f1r1; // 0x248(Filter bank 1 register 1) 
Object *f1r2; // 0x24C(Filter bank 1 register 2) 
Object *f2r1; // 0x250(Filter bank 2 register 1) 
Object *f2r2; // 0x254(Filter bank 2 register 2) 
Object *f3r1; // 0x258(Filter bank 3 register 1) 
Object *f3r2; // 0x25C(Filter bank 3 register 2) 
Object *f4r1; // 0x260(Filter bank 4 register 1) 
Object *f4r2; // 0x264(Filter bank 4 register 2) 
Object *f5r1; // 0x268(Filter bank 5 register 1) 
Object *f5r2; // 0x26C(Filter bank 5 register 2) 
Object *f6r1; // 0x270(Filter bank 6 register 1) 
Object *f6r2; // 0x274(Filter bank 6 register 2) 
Object *f7r1; // 0x278(Filter bank 7 register 1) 
Object *f7r2; // 0x27C(Filter bank 7 register 2) 
Object *f8r1; // 0x280(Filter bank 8 register 1) 
Object *f8r2; // 0x284(Filter bank 8 register 2) 
Object *f9r1; // 0x288(Filter bank 9 register 1) 
Object *f9r2; // 0x28C(Filter bank 9 register 2) 
Object *f10r1; // 0x290(Filter bank 10 register 1) 
Object *f10r2; // 0x294(Filter bank 10 register 2) 
Object *f11r1; // 0x298(Filter bank 11 register 1) 
Object *f11r2; // 0x29C(Filter bank 11 register 2) 
Object *f12r1; // 0x2A0(Filter bank 4 register 1) 
Object *f12r2; // 0x2A4(Filter bank 12 register 2) 
Object *f13r1; // 0x2A8(Filter bank 13 register 1) 
Object *f13r2; // 0x2AC(Filter bank 13 register 2) 
Object *f14r1; // 0x2B0(Filter bank 14 register 1) 
Object *f14r2; // 0x2B4(Filter bank 14 register 2) 
Object *f15r1; // 0x2B8(Filter bank 15 register 1) 
Object *f15r2; // 0x2BC(Filter bank 15 register 2) 
Object *f16r1; // 0x2C0(Filter bank 16 register 1) 
Object *f16r2; // 0x2C4(Filter bank 16 register 2) 
Object *f17r1; // 0x2C8(Filter bank 17 register 1) 
Object *f17r2; // 0x2CC(Filter bank 17 register 2) 
Object *f18r1; // 0x2D0(Filter bank 18 register 1) 
Object *f18r2; // 0x2D4(Filter bank 18 register 2) 
Object *f19r1; // 0x2D8(Filter bank 19 register 1) 
Object *f19r2; // 0x2DC(Filter bank 19 register 2) 
Object *f20r1; // 0x2E0(Filter bank 20 register 1) 
Object *f20r2; // 0x2E4(Filter bank 20 register 2) 
Object *f21r1; // 0x2E8(Filter bank 21 register 1) 
Object *f21r2; // 0x2EC(Filter bank 21 register 2) 
Object *f22r1; // 0x2F0(Filter bank 22 register 1) 
Object *f22r2; // 0x2F4(Filter bank 22 register 2) 
Object *f23r1; // 0x2F8(Filter bank 23 register 1) 
Object *f23r2; // 0x2FC(Filter bank 23 register 2) 
Object *f24r1; // 0x300(Filter bank 24 register 1) 
Object *f24r2; // 0x304(Filter bank 24 register 2) 
Object *f25r1; // 0x308(Filter bank 25 register 1) 
Object *f25r2; // 0x30C(Filter bank 25 register 2) 
Object *f26r1; // 0x310(Filter bank 26 register 1) 
Object *f26r2; // 0x314(Filter bank 26 register 2) 
Object *f27r1; // 0x318(Filter bank 27 register 1) 
Object *f27r2; // 0x31C(Filter bank 27 register 2) 
} reg;

        struct { 
// CAN_MCR(CAN_MCR) bitfields.
          struct { 
Object *inrq; // [0:0] INRQObject *sleep; // [1:1] SLEEPObject *txfp; // [2:2] TXFPObject *rflm; // [3:3] RFLMObject *nart; // [4:4] NARTObject *awum; // [5:5] AWUMObject *abom; // [6:6] ABOMObject *ttcm; // [7:7] TTCMObject *reset; // [15:15] RESETObject *dbf; // [16:16] DBF} can_mcr; 
// CAN_MSR(CAN_MSR) bitfields.
          struct { 
Object *inak; // [0:0] INAKObject *slak; // [1:1] SLAKObject *erri; // [2:2] ERRIObject *wkui; // [3:3] WKUIObject *slaki; // [4:4] SLAKIObject *txm; // [8:8] TXMObject *rxm; // [9:9] RXMObject *samp; // [10:10] SAMPObject *rx; // [11:11] RX} can_msr; 
// CAN_TSR(CAN_TSR) bitfields.
          struct { 
Object *rqcp0; // [0:0] RQCP0Object *txok0; // [1:1] TXOK0Object *alst0; // [2:2] ALST0Object *terr0; // [3:3] TERR0Object *abrq0; // [7:7] ABRQ0Object *rqcp1; // [8:8] RQCP1Object *txok1; // [9:9] TXOK1Object *alst1; // [10:10] ALST1Object *terr1; // [11:11] TERR1Object *abrq1; // [15:15] ABRQ1Object *rqcp2; // [16:16] RQCP2Object *txok2; // [17:17] TXOK2Object *alst2; // [18:18] ALST2Object *terr2; // [19:19] TERR2Object *abrq2; // [23:23] ABRQ2Object *code; // [24:25] CODEObject *tme0; // [26:26] Lowest priority flag for mailbox 0Object *tme1; // [27:27] Lowest priority flag for mailbox 1Object *tme2; // [28:28] Lowest priority flag for mailbox 2Object *low0; // [29:29] Lowest priority flag for mailbox 0Object *low1; // [30:30] Lowest priority flag for mailbox 1Object *low2; // [31:31] Lowest priority flag for mailbox 2} can_tsr; 
// CAN_RF0R(CAN_RF0R) bitfields.
          struct { 
Object *fmp0; // [0:1] FMP0Object *full0; // [3:3] FULL0Object *fovr0; // [4:4] FOVR0Object *rfom0; // [5:5] RFOM0} can_rf0r; 
// CAN_RF1R(CAN_RF1R) bitfields.
          struct { 
Object *fmp1; // [0:1] FMP1Object *full1; // [3:3] FULL1Object *fovr1; // [4:4] FOVR1Object *rfom1; // [5:5] RFOM1} can_rf1r; 
// CAN_IER(CAN_IER) bitfields.
          struct { 
Object *tmeie; // [0:0] TMEIEObject *fmpie0; // [1:1] FMPIE0Object *ffie0; // [2:2] FFIE0Object *fovie0; // [3:3] FOVIE0Object *fmpie1; // [4:4] FMPIE1Object *ffie1; // [5:5] FFIE1Object *fovie1; // [6:6] FOVIE1Object *ewgie; // [8:8] EWGIEObject *epvie; // [9:9] EPVIEObject *bofie; // [10:10] BOFIEObject *lecie; // [11:11] LECIEObject *errie; // [15:15] ERRIEObject *wkuie; // [16:16] WKUIEObject *slkie; // [17:17] SLKIE} can_ier; 
// CAN_ESR(CAN_ESR) bitfields.
          struct { 
Object *ewgf; // [0:0] EWGFObject *epvf; // [1:1] EPVFObject *boff; // [2:2] BOFFObject *lec; // [4:6] LECObject *tec; // [16:23] TECObject *rec; // [24:31] REC} can_esr; 
// CAN_BTR(CAN BTR) bitfields.
          struct { 
Object *brp; // [0:9] BRPObject *ts1; // [16:19] TS1Object *ts2; // [20:22] TS2Object *sjw; // [24:25] SJWObject *lbkm; // [30:30] LBKMObject *silm; // [31:31] SILM} can_btr; 
// CAN_TI0R(CAN_TI0R) bitfields.
          struct { 
Object *txrq; // [0:0] TXRQObject *rtr; // [1:1] RTRObject *ide; // [2:2] IDEObject *exid; // [3:20] EXIDObject *stid; // [21:31] STID} can_ti0r; 
// CAN_TDT0R(CAN_TDT0R) bitfields.
          struct { 
Object *dlc; // [0:3] DLCObject *tgt; // [8:8] TGTObject *time; // [16:31] TIME} can_tdt0r; 
// CAN_TDL0R(CAN_TDL0R) bitfields.
          struct { 
Object *data0; // [0:7] DATA0Object *data1; // [8:15] DATA1Object *data2; // [16:23] DATA2Object *data3; // [24:31] DATA3} can_tdl0r; 
// CAN_TDH0R(CAN_TDH0R) bitfields.
          struct { 
Object *data4; // [0:7] DATA4Object *data5; // [8:15] DATA5Object *data6; // [16:23] DATA6Object *data7; // [24:31] DATA7} can_tdh0r; 
// CAN_TI1R(CAN_TI1R) bitfields.
          struct { 
Object *txrq; // [0:0] TXRQObject *rtr; // [1:1] RTRObject *ide; // [2:2] IDEObject *exid; // [3:20] EXIDObject *stid; // [21:31] STID} can_ti1r; 
// CAN_TDT1R(CAN_TDT1R) bitfields.
          struct { 
Object *dlc; // [0:3] DLCObject *tgt; // [8:8] TGTObject *time; // [16:31] TIME} can_tdt1r; 
// CAN_TDL1R(CAN_TDL1R) bitfields.
          struct { 
Object *data0; // [0:7] DATA0Object *data1; // [8:15] DATA1Object *data2; // [16:23] DATA2Object *data3; // [24:31] DATA3} can_tdl1r; 
// CAN_TDH1R(CAN_TDH1R) bitfields.
          struct { 
Object *data4; // [0:7] DATA4Object *data5; // [8:15] DATA5Object *data6; // [16:23] DATA6Object *data7; // [24:31] DATA7} can_tdh1r; 
// CAN_TI2R(CAN_TI2R) bitfields.
          struct { 
Object *txrq; // [0:0] TXRQObject *rtr; // [1:1] RTRObject *ide; // [2:2] IDEObject *exid; // [3:20] EXIDObject *stid; // [21:31] STID} can_ti2r; 
// CAN_TDT2R(CAN_TDT2R) bitfields.
          struct { 
Object *dlc; // [0:3] DLCObject *tgt; // [8:8] TGTObject *time; // [16:31] TIME} can_tdt2r; 
// CAN_TDL2R(CAN_TDL2R) bitfields.
          struct { 
Object *data0; // [0:7] DATA0Object *data1; // [8:15] DATA1Object *data2; // [16:23] DATA2Object *data3; // [24:31] DATA3} can_tdl2r; 
// CAN_TDH2R(CAN_TDH2R) bitfields.
          struct { 
Object *data4; // [0:7] DATA4Object *data5; // [8:15] DATA5Object *data6; // [16:23] DATA6Object *data7; // [24:31] DATA7} can_tdh2r; 
// CAN_RI0R(CAN_RI0R) bitfields.
          struct { 
Object *rtr; // [1:1] RTRObject *ide; // [2:2] IDEObject *exid; // [3:20] EXIDObject *stid; // [21:31] STID} can_ri0r; 
// CAN_RDT0R(CAN_RDT0R) bitfields.
          struct { 
Object *dlc; // [0:3] DLCObject *fmi; // [8:15] FMIObject *time; // [16:31] TIME} can_rdt0r; 
// CAN_RDL0R(CAN_RDL0R) bitfields.
          struct { 
Object *data0; // [0:7] DATA0Object *data1; // [8:15] DATA1Object *data2; // [16:23] DATA2Object *data3; // [24:31] DATA3} can_rdl0r; 
// CAN_RDH0R(CAN_RDH0R) bitfields.
          struct { 
Object *data4; // [0:7] DATA4Object *data5; // [8:15] DATA5Object *data6; // [16:23] DATA6Object *data7; // [24:31] DATA7} can_rdh0r; 
// CAN_RI1R(CAN_RI1R) bitfields.
          struct { 
Object *rtr; // [1:1] RTRObject *ide; // [2:2] IDEObject *exid; // [3:20] EXIDObject *stid; // [21:31] STID} can_ri1r; 
// CAN_RDT1R(CAN_RDT1R) bitfields.
          struct { 
Object *dlc; // [0:3] DLCObject *fmi; // [8:15] FMIObject *time; // [16:31] TIME} can_rdt1r; 
// CAN_RDL1R(CAN_RDL1R) bitfields.
          struct { 
Object *data0; // [0:7] DATA0Object *data1; // [8:15] DATA1Object *data2; // [16:23] DATA2Object *data3; // [24:31] DATA3} can_rdl1r; 
// CAN_RDH1R(CAN_RDH1R) bitfields.
          struct { 
Object *data4; // [0:7] DATA4Object *data5; // [8:15] DATA5Object *data6; // [16:23] DATA6Object *data7; // [24:31] DATA7} can_rdh1r; 
// CAN_FMR(CAN_FMR) bitfields.
          struct { 
Object *finit; // [0:0] FINITObject *can2sb; // [8:13] CAN2SB} can_fmr; 
// CAN_FM1R(CAN_FM1R) bitfields.
          struct { 
Object *fbm0; // [0:0] Filter modeObject *fbm1; // [1:1] Filter modeObject *fbm2; // [2:2] Filter modeObject *fbm3; // [3:3] Filter modeObject *fbm4; // [4:4] Filter modeObject *fbm5; // [5:5] Filter modeObject *fbm6; // [6:6] Filter modeObject *fbm7; // [7:7] Filter modeObject *fbm8; // [8:8] Filter modeObject *fbm9; // [9:9] Filter modeObject *fbm10; // [10:10] Filter modeObject *fbm11; // [11:11] Filter modeObject *fbm12; // [12:12] Filter modeObject *fbm13; // [13:13] Filter modeObject *fbm14; // [14:14] Filter modeObject *fbm15; // [15:15] Filter modeObject *fbm16; // [16:16] Filter modeObject *fbm17; // [17:17] Filter modeObject *fbm18; // [18:18] Filter modeObject *fbm19; // [19:19] Filter modeObject *fbm20; // [20:20] Filter modeObject *fbm21; // [21:21] Filter modeObject *fbm22; // [22:22] Filter modeObject *fbm23; // [23:23] Filter modeObject *fbm24; // [24:24] Filter modeObject *fbm25; // [25:25] Filter modeObject *fbm26; // [26:26] Filter modeObject *fbm27; // [27:27] Filter mode} can_fm1r; 
// CAN_FS1R(CAN_FS1R) bitfields.
          struct { 
Object *fsc0; // [0:0] Filter scale configurationObject *fsc1; // [1:1] Filter scale configurationObject *fsc2; // [2:2] Filter scale configurationObject *fsc3; // [3:3] Filter scale configurationObject *fsc4; // [4:4] Filter scale configurationObject *fsc5; // [5:5] Filter scale configurationObject *fsc6; // [6:6] Filter scale configurationObject *fsc7; // [7:7] Filter scale configurationObject *fsc8; // [8:8] Filter scale configurationObject *fsc9; // [9:9] Filter scale configurationObject *fsc10; // [10:10] Filter scale configurationObject *fsc11; // [11:11] Filter scale configurationObject *fsc12; // [12:12] Filter scale configurationObject *fsc13; // [13:13] Filter scale configurationObject *fsc14; // [14:14] Filter scale configurationObject *fsc15; // [15:15] Filter scale configurationObject *fsc16; // [16:16] Filter scale configurationObject *fsc17; // [17:17] Filter scale configurationObject *fsc18; // [18:18] Filter scale configurationObject *fsc19; // [19:19] Filter scale configurationObject *fsc20; // [20:20] Filter scale configurationObject *fsc21; // [21:21] Filter scale configurationObject *fsc22; // [22:22] Filter scale configurationObject *fsc23; // [23:23] Filter scale configurationObject *fsc24; // [24:24] Filter scale configurationObject *fsc25; // [25:25] Filter scale configurationObject *fsc26; // [26:26] Filter scale configurationObject *fsc27; // [27:27] Filter scale configuration} can_fs1r; 
// CAN_FFA1R(CAN_FFA1R) bitfields.
          struct { 
Object *ffa0; // [0:0] Filter FIFO assignment for filter 0Object *ffa1; // [1:1] Filter FIFO assignment for filter 1Object *ffa2; // [2:2] Filter FIFO assignment for filter 2Object *ffa3; // [3:3] Filter FIFO assignment for filter 3Object *ffa4; // [4:4] Filter FIFO assignment for filter 4Object *ffa5; // [5:5] Filter FIFO assignment for filter 5Object *ffa6; // [6:6] Filter FIFO assignment for filter 6Object *ffa7; // [7:7] Filter FIFO assignment for filter 7Object *ffa8; // [8:8] Filter FIFO assignment for filter 8Object *ffa9; // [9:9] Filter FIFO assignment for filter 9Object *ffa10; // [10:10] Filter FIFO assignment for filter 10Object *ffa11; // [11:11] Filter FIFO assignment for filter 11Object *ffa12; // [12:12] Filter FIFO assignment for filter 12Object *ffa13; // [13:13] Filter FIFO assignment for filter 13Object *ffa14; // [14:14] Filter FIFO assignment for filter 14Object *ffa15; // [15:15] Filter FIFO assignment for filter 15Object *ffa16; // [16:16] Filter FIFO assignment for filter 16Object *ffa17; // [17:17] Filter FIFO assignment for filter 17Object *ffa18; // [18:18] Filter FIFO assignment for filter 18Object *ffa19; // [19:19] Filter FIFO assignment for filter 19Object *ffa20; // [20:20] Filter FIFO assignment for filter 20Object *ffa21; // [21:21] Filter FIFO assignment for filter 21Object *ffa22; // [22:22] Filter FIFO assignment for filter 22Object *ffa23; // [23:23] Filter FIFO assignment for filter 23Object *ffa24; // [24:24] Filter FIFO assignment for filter 24Object *ffa25; // [25:25] Filter FIFO assignment for filter 25Object *ffa26; // [26:26] Filter FIFO assignment for filter 26Object *ffa27; // [27:27] Filter FIFO assignment for filter 27} can_ffa1r; 
// CAN_FA1R(CAN_FA1R) bitfields.
          struct { 
Object *fact0; // [0:0] Filter activeObject *fact1; // [1:1] Filter activeObject *fact2; // [2:2] Filter activeObject *fact3; // [3:3] Filter activeObject *fact4; // [4:4] Filter activeObject *fact5; // [5:5] Filter activeObject *fact6; // [6:6] Filter activeObject *fact7; // [7:7] Filter activeObject *fact8; // [8:8] Filter activeObject *fact9; // [9:9] Filter activeObject *fact10; // [10:10] Filter activeObject *fact11; // [11:11] Filter activeObject *fact12; // [12:12] Filter activeObject *fact13; // [13:13] Filter activeObject *fact14; // [14:14] Filter activeObject *fact15; // [15:15] Filter activeObject *fact16; // [16:16] Filter activeObject *fact17; // [17:17] Filter activeObject *fact18; // [18:18] Filter activeObject *fact19; // [19:19] Filter activeObject *fact20; // [20:20] Filter activeObject *fact21; // [21:21] Filter activeObject *fact22; // [22:22] Filter activeObject *fact23; // [23:23] Filter activeObject *fact24; // [24:24] Filter activeObject *fact25; // [25:25] Filter activeObject *fact26; // [26:26] Filter activeObject *fact27; // [27:27] Filter active} can_fa1r; 
// F0R1(Filter bank 0 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f0r1; 
// F0R2(Filter bank 0 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f0r2; 
// F1R1(Filter bank 1 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f1r1; 
// F1R2(Filter bank 1 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f1r2; 
// F2R1(Filter bank 2 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f2r1; 
// F2R2(Filter bank 2 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f2r2; 
// F3R1(Filter bank 3 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f3r1; 
// F3R2(Filter bank 3 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f3r2; 
// F4R1(Filter bank 4 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f4r1; 
// F4R2(Filter bank 4 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f4r2; 
// F5R1(Filter bank 5 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f5r1; 
// F5R2(Filter bank 5 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f5r2; 
// F6R1(Filter bank 6 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f6r1; 
// F6R2(Filter bank 6 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f6r2; 
// F7R1(Filter bank 7 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f7r1; 
// F7R2(Filter bank 7 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f7r2; 
// F8R1(Filter bank 8 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f8r1; 
// F8R2(Filter bank 8 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f8r2; 
// F9R1(Filter bank 9 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f9r1; 
// F9R2(Filter bank 9 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f9r2; 
// F10R1(Filter bank 10 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f10r1; 
// F10R2(Filter bank 10 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f10r2; 
// F11R1(Filter bank 11 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f11r1; 
// F11R2(Filter bank 11 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f11r2; 
// F12R1(Filter bank 4 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f12r1; 
// F12R2(Filter bank 12 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f12r2; 
// F13R1(Filter bank 13 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f13r1; 
// F13R2(Filter bank 13 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f13r2; 
// F14R1(Filter bank 14 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f14r1; 
// F14R2(Filter bank 14 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f14r2; 
// F15R1(Filter bank 15 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f15r1; 
// F15R2(Filter bank 15 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f15r2; 
// F16R1(Filter bank 16 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f16r1; 
// F16R2(Filter bank 16 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f16r2; 
// F17R1(Filter bank 17 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f17r1; 
// F17R2(Filter bank 17 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f17r2; 
// F18R1(Filter bank 18 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f18r1; 
// F18R2(Filter bank 18 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f18r2; 
// F19R1(Filter bank 19 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f19r1; 
// F19R2(Filter bank 19 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f19r2; 
// F20R1(Filter bank 20 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f20r1; 
// F20R2(Filter bank 20 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f20r2; 
// F21R1(Filter bank 21 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f21r1; 
// F21R2(Filter bank 21 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f21r2; 
// F22R1(Filter bank 22 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f22r1; 
// F22R2(Filter bank 22 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f22r2; 
// F23R1(Filter bank 23 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f23r1; 
// F23R2(Filter bank 23 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f23r2; 
// F24R1(Filter bank 24 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f24r1; 
// F24R2(Filter bank 24 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f24r2; 
// F25R1(Filter bank 25 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f25r1; 
// F25R2(Filter bank 25 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f25r2; 
// F26R1(Filter bank 26 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f26r1; 
// F26R2(Filter bank 26 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f26r2; 
// F27R1(Filter bank 27 register 1) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f27r1; 
// F27R2(Filter bank 27 register 2) bitfields.
          struct { 
Object *fb0; // [0:0] Filter bitsObject *fb1; // [1:1] Filter bitsObject *fb2; // [2:2] Filter bitsObject *fb3; // [3:3] Filter bitsObject *fb4; // [4:4] Filter bitsObject *fb5; // [5:5] Filter bitsObject *fb6; // [6:6] Filter bitsObject *fb7; // [7:7] Filter bitsObject *fb8; // [8:8] Filter bitsObject *fb9; // [9:9] Filter bitsObject *fb10; // [10:10] Filter bitsObject *fb11; // [11:11] Filter bitsObject *fb12; // [12:12] Filter bitsObject *fb13; // [13:13] Filter bitsObject *fb14; // [14:14] Filter bitsObject *fb15; // [15:15] Filter bitsObject *fb16; // [16:16] Filter bitsObject *fb17; // [17:17] Filter bitsObject *fb18; // [18:18] Filter bitsObject *fb19; // [19:19] Filter bitsObject *fb20; // [20:20] Filter bitsObject *fb21; // [21:21] Filter bitsObject *fb22; // [22:22] Filter bitsObject *fb23; // [23:23] Filter bitsObject *fb24; // [24:24] Filter bitsObject *fb25; // [25:25] Filter bitsObject *fb26; // [26:26] Filter bitsObject *fb27; // [27:27] Filter bitsObject *fb28; // [28:28] Filter bitsObject *fb29; // [29:29] Filter bitsObject *fb30; // [30:30] Filter bitsObject *fb31; // [31:31] Filter bits} f27r2; 
} fld;
      } f0;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} STM32CANState;

// ----------------------------------------------------------------------------

#endif /* STM32_CAN_H_ */
