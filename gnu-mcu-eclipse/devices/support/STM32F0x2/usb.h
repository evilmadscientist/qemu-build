/*
 * STM32- USB(Universal serial bus full-speed device interface) emulation.
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

#ifndef STM32_USB_H_
#define STM32_USB_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/stm32/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_STM32_USBDEVICE_PATH_STM32"USB"

// ----------------------------------------------------------------------------

#define TYPE_STM32_USBTYPE_STM32_PREFIX "usb" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_STM32_USB_PARENT TYPE_PERIPHERAL
typedef PeripheralClass STM32USBParentClass;
typedef PeripheralState STM32USBParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define STM32_USB_GET_CLASS(obj) \
    OBJECT_GET_CLASS(STM32USBClass, (obj), TYPE_STM32_USB)
#define STM32_USB_CLASS(klass) \
    OBJECT_CLASS_CHECK(STM32USBClass, (klass), TYPE_STM32_USB)

typedef struct {
    // private: 
    STM32USBParentClass parent_class;
    // public: 

    // None, so far.
} STM32USBClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define STM32_USB_STATE(obj) \
    OBJECT_CHECK(STM32USBState, (obj), TYPE_STM32_USB)

typedef struct {
    // private:
    STM32USBParentState parent_obj;
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
        // F0USB(Universal serial bus full-speed device interface) registers.
        struct { 
Object *ep0r; // 0x0(Endpoint 0 register) 
Object *ep1r; // 0x4(Endpoint 1 register) 
Object *ep2r; // 0x8(Endpoint 2 register) 
Object *ep3r; // 0xC(Endpoint 3 register) 
Object *ep4r; // 0x10(Endpoint 4 register) 
Object *ep5r; // 0x14(Endpoint 5 register) 
Object *ep6r; // 0x18(Endpoint 6 register) 
Object *ep7r; // 0x1C(Endpoint 7 register) 
Object *cntr; // 0x40(Control register) 
Object *istr; // 0x44(Interrupt status register) 
Object *fnr; // 0x48(Frame number register) 
Object *daddr; // 0x4C(Device address) 
Object *btable; // 0x50(Buffer table address) 
Object *lpmcsr; // 0x54(LPM control and status register) 
Object *bcdr; // 0x58(Battery charging detector) 
} reg;

        struct { 
// EP0R(Endpoint 0 register) bitfields.
          struct { 
Object *ea; // [0:3] Endpoint addressObject *stat_tx; // [4:5] Status bits, for transmission transfersObject *dtog_tx; // [6:6] Data Toggle, for transmission transfersObject *ctr_tx; // [7:7] Correct Transfer for transmissionObject *ep_kind; // [8:8] Endpoint kindObject *ep_type; // [9:10] Endpoint typeObject *setup; // [11:11] Setup transaction completedObject *stat_rx; // [12:13] Status bits, for reception transfersObject *dtog_rx; // [14:14] Data Toggle, for reception transfersObject *ctr_rx; // [15:15] Correct transfer for reception} ep0r; 
// EP1R(Endpoint 1 register) bitfields.
          struct { 
Object *ea; // [0:3] Endpoint addressObject *stat_tx; // [4:5] Status bits, for transmission transfersObject *dtog_tx; // [6:6] Data Toggle, for transmission transfersObject *ctr_tx; // [7:7] Correct Transfer for transmissionObject *ep_kind; // [8:8] Endpoint kindObject *ep_type; // [9:10] Endpoint typeObject *setup; // [11:11] Setup transaction completedObject *stat_rx; // [12:13] Status bits, for reception transfersObject *dtog_rx; // [14:14] Data Toggle, for reception transfersObject *ctr_rx; // [15:15] Correct transfer for reception} ep1r; 
// EP2R(Endpoint 2 register) bitfields.
          struct { 
Object *ea; // [0:3] Endpoint addressObject *stat_tx; // [4:5] Status bits, for transmission transfersObject *dtog_tx; // [6:6] Data Toggle, for transmission transfersObject *ctr_tx; // [7:7] Correct Transfer for transmissionObject *ep_kind; // [8:8] Endpoint kindObject *ep_type; // [9:10] Endpoint typeObject *setup; // [11:11] Setup transaction completedObject *stat_rx; // [12:13] Status bits, for reception transfersObject *dtog_rx; // [14:14] Data Toggle, for reception transfersObject *ctr_rx; // [15:15] Correct transfer for reception} ep2r; 
// EP3R(Endpoint 3 register) bitfields.
          struct { 
Object *ea; // [0:3] Endpoint addressObject *stat_tx; // [4:5] Status bits, for transmission transfersObject *dtog_tx; // [6:6] Data Toggle, for transmission transfersObject *ctr_tx; // [7:7] Correct Transfer for transmissionObject *ep_kind; // [8:8] Endpoint kindObject *ep_type; // [9:10] Endpoint typeObject *setup; // [11:11] Setup transaction completedObject *stat_rx; // [12:13] Status bits, for reception transfersObject *dtog_rx; // [14:14] Data Toggle, for reception transfersObject *ctr_rx; // [15:15] Correct transfer for reception} ep3r; 
// EP4R(Endpoint 4 register) bitfields.
          struct { 
Object *ea; // [0:3] Endpoint addressObject *stat_tx; // [4:5] Status bits, for transmission transfersObject *dtog_tx; // [6:6] Data Toggle, for transmission transfersObject *ctr_tx; // [7:7] Correct Transfer for transmissionObject *ep_kind; // [8:8] Endpoint kindObject *ep_type; // [9:10] Endpoint typeObject *setup; // [11:11] Setup transaction completedObject *stat_rx; // [12:13] Status bits, for reception transfersObject *dtog_rx; // [14:14] Data Toggle, for reception transfersObject *ctr_rx; // [15:15] Correct transfer for reception} ep4r; 
// EP5R(Endpoint 5 register) bitfields.
          struct { 
Object *ea; // [0:3] Endpoint addressObject *stat_tx; // [4:5] Status bits, for transmission transfersObject *dtog_tx; // [6:6] Data Toggle, for transmission transfersObject *ctr_tx; // [7:7] Correct Transfer for transmissionObject *ep_kind; // [8:8] Endpoint kindObject *ep_type; // [9:10] Endpoint typeObject *setup; // [11:11] Setup transaction completedObject *stat_rx; // [12:13] Status bits, for reception transfersObject *dtog_rx; // [14:14] Data Toggle, for reception transfersObject *ctr_rx; // [15:15] Correct transfer for reception} ep5r; 
// EP6R(Endpoint 6 register) bitfields.
          struct { 
Object *ea; // [0:3] Endpoint addressObject *stat_tx; // [4:5] Status bits, for transmission transfersObject *dtog_tx; // [6:6] Data Toggle, for transmission transfersObject *ctr_tx; // [7:7] Correct Transfer for transmissionObject *ep_kind; // [8:8] Endpoint kindObject *ep_type; // [9:10] Endpoint typeObject *setup; // [11:11] Setup transaction completedObject *stat_rx; // [12:13] Status bits, for reception transfersObject *dtog_rx; // [14:14] Data Toggle, for reception transfersObject *ctr_rx; // [15:15] Correct transfer for reception} ep6r; 
// EP7R(Endpoint 7 register) bitfields.
          struct { 
Object *ea; // [0:3] Endpoint addressObject *stat_tx; // [4:5] Status bits, for transmission transfersObject *dtog_tx; // [6:6] Data Toggle, for transmission transfersObject *ctr_tx; // [7:7] Correct Transfer for transmissionObject *ep_kind; // [8:8] Endpoint kindObject *ep_type; // [9:10] Endpoint typeObject *setup; // [11:11] Setup transaction completedObject *stat_rx; // [12:13] Status bits, for reception transfersObject *dtog_rx; // [14:14] Data Toggle, for reception transfersObject *ctr_rx; // [15:15] Correct transfer for reception} ep7r; 
// CNTR(Control register) bitfields.
          struct { 
Object *fres; // [0:0] Force USB ResetObject *pdwn; // [1:1] Power downObject *lpmode; // [2:2] Low-power modeObject *fsusp; // [3:3] Force suspendObject *resume; // [4:4] Resume requestObject *l1resume; // [5:5] LPM L1 Resume requestObject *l1reqm; // [7:7] LPM L1 state request interrupt maskObject *esofm; // [8:8] Expected start of frame interrupt maskObject *sofm; // [9:9] Start of frame interrupt maskObject *resetm; // [10:10] USB reset interrupt maskObject *suspm; // [11:11] Suspend mode interrupt maskObject *wkupm; // [12:12] Wakeup interrupt maskObject *errm; // [13:13] Error interrupt maskObject *pmaovrm; // [14:14] Packet memory area over / underrun interrupt maskObject *ctrm; // [15:15] Correct transfer interrupt mask} cntr; 
// ISTR(Interrupt status register) bitfields.
          struct { 
Object *ep_id; // [0:3] Endpoint IdentifierObject *dir; // [4:4] Direction of transactionObject *l1req; // [7:7] LPM L1 state requestObject *esof; // [8:8] Expected start frameObject *sof; // [9:9] Start of frameObject *reset; // [10:10] Reset requestObject *susp; // [11:11] Suspend mode requestObject *wkup; // [12:12] WakeupObject *err; // [13:13] ErrorObject *pmaovr; // [14:14] Packet memory area over / underrunObject *ctr; // [15:15] Correct transfer} istr; 
// FNR(Frame number register) bitfields.
          struct { 
Object *fn; // [0:10] Frame numberObject *lsof; // [11:12] Lost SOFObject *lck; // [13:13] LockedObject *rxdm; // [14:14] Receive data - line statusObject *rxdp; // [15:15] Receive data + line status} fnr; 
// DADDR(Device address) bitfields.
          struct { 
Object *add; // [0:6] Device addressObject *ef; // [7:7] Enable function} daddr; 
// BTABLE(Buffer table address) bitfields.
          struct { 
Object *btable; // [3:15] Buffer table} btable; 
// LPMCSR(LPM control and status register) bitfields.
          struct { 
Object *lpmen; // [0:0] LPM support enableObject *lpmack; // [1:1] LPM Token acknowledge enableObject *remwake; // [3:3] BRemoteWake valueObject *besl; // [4:7] BESL value} lpmcsr; 
// BCDR(Battery charging detector) bitfields.
          struct { 
Object *bcden; // [0:0] Battery charging detector (BCD) enableObject *dcden; // [1:1] Data contact detection (DCD) mode enableObject *pden; // [2:2] Primary detection (PD) mode enableObject *sden; // [3:3] Secondary detection (SD) mode enableObject *dcdet; // [4:4] Data contact detection (DCD) statusObject *pdet; // [5:5] Primary detection (PD) statusObject *sdet; // [6:6] Secondary detection (SD) statusObject *ps2det; // [7:7] DM pull-up detection statusObject *dppu; // [15:15] DP pull-up control} bcdr; 
} fld;
      } f0;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} STM32USBState;

// ----------------------------------------------------------------------------

#endif /* STM32_USB_H_ */
