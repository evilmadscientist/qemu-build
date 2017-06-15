/*
 * STM32 - RCC (Reset and clock control) emulation.
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

#ifndef STM32_RCC_H_
#define STM32_RCC_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/stm32/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_STM32_RCC DEVICE_PATH_STM32 "RCC"



// ----------------------------------------------------------------------------

#define TYPE_STM32_RCC TYPE_STM32_PREFIX "rcc" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_STM32_RCC_PARENT TYPE_PERIPHERAL
typedef PeripheralClass STM32RCCParentClass;
typedef PeripheralState STM32RCCParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define STM32_RCC_GET_CLASS(obj) \
    OBJECT_GET_CLASS(STM32RCCClass, (obj), TYPE_STM32_RCC)
#define STM32_RCC_CLASS(klass) \
    OBJECT_CLASS_CHECK(STM32RCCClass, (klass), TYPE_STM32_RCC)

typedef struct {
    // private: 
    STM32RCCParentClass parent_class;
    // public: 

    // None, so far.
} STM32RCCClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define STM32_RCC_STATE(obj) \
    OBJECT_CHECK(STM32RCCState, (obj), TYPE_STM32_RCC)

typedef struct {
    // private:
    STM32RCCParentState parent_obj;
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
        // F0 RCC (Reset and clock control) registers.
        struct { 
          Object *cr; // 0x0 (Clock control register) 
          Object *cfgr; // 0x4 (Clock configuration register (RCC_CFGR)) 
          Object *cir; // 0x8 (Clock interrupt register (RCC_CIR)) 
          Object *apb2rstr; // 0xC (APB2 peripheral reset register (RCC_APB2RSTR)) 
          Object *apb1rstr; // 0x10 (APB1 peripheral reset register (RCC_APB1RSTR)) 
          Object *ahbenr; // 0x14 (AHB Peripheral Clock enable register (RCC_AHBENR)) 
          Object *apb2enr; // 0x18 (APB2 peripheral clock enable register (RCC_APB2ENR)) 
          Object *apb1enr; // 0x1C (APB1 peripheral clock enable register (RCC_APB1ENR)) 
          Object *bdcr; // 0x20 (Backup domain control register (RCC_BDCR)) 
          Object *csr; // 0x24 (Control/status register (RCC_CSR)) 
          Object *ahbrstr; // 0x28 (AHB peripheral reset register) 
          Object *cfgr2; // 0x2C (Clock configuration register 2) 
          Object *cfgr3; // 0x30 (Clock configuration register 3) 
          Object *cr2; // 0x34 (Clock control register 2) 
        } reg;

        struct { 
          
          // CR (Clock control register) bitfields.
          struct { 
            Object *hsion; // [0:0] Internal High Speed clock enable 
            Object *hsirdy; // [1:1] Internal High Speed clock ready flag 
            Object *hsitrim; // [3:7] Internal High Speed clock trimming 
            Object *hsical; // [8:15] Internal High Speed clock Calibration 
            Object *hseon; // [16:16] External High Speed clock enable 
            Object *hserdy; // [17:17] External High Speed clock ready flag 
            Object *hsebyp; // [18:18] External High Speed clock Bypass 
            Object *csson; // [19:19] Clock Security System enable 
            Object *pllon; // [24:24] PLL enable 
            Object *pllrdy; // [25:25] PLL clock ready flag  
          } cr; 
          
          // CFGR (Clock configuration register (RCC_CFGR)) bitfields.
          struct { 
            Object *sw; // [0:1] System clock Switch 
            Object *sws; // [2:3] System Clock Switch Status 
            Object *hpre; // [4:7] AHB prescaler 
            Object *ppre; // [8:10] APB Low speed prescaler (APB1) 
            Object *adcpre; // [14:14] ADC prescaler 
            Object *pllsrc; // [15:16] PLL input clock source 
            Object *pllxtpre; // [17:17] HSE divider for PLL entry 
            Object *pllmul; // [18:21] PLL Multiplication Factor 
            Object *mco; // [24:26] Microcontroller clock output 
            Object *mcopre; // [28:30] Microcontroller Clock Output Prescaler 
            Object *pllnodiv; // [31:31] PLL clock not divided for MCO  
          } cfgr; 
          
          // CIR (Clock interrupt register (RCC_CIR)) bitfields.
          struct { 
            Object *lsirdyf; // [0:0] LSI Ready Interrupt flag 
            Object *lserdyf; // [1:1] LSE Ready Interrupt flag 
            Object *hsirdyf; // [2:2] HSI Ready Interrupt flag 
            Object *hserdyf; // [3:3] HSE Ready Interrupt flag 
            Object *pllrdyf; // [4:4] PLL Ready Interrupt flag 
            Object *hsi14rdyf; // [5:5] HSI14 ready interrupt flag 
            Object *hsi48rdyf; // [6:6] HSI48 ready interrupt flag 
            Object *cssf; // [7:7] Clock Security System Interrupt flag 
            Object *lsirdyie; // [8:8] LSI Ready Interrupt Enable 
            Object *lserdyie; // [9:9] LSE Ready Interrupt Enable 
            Object *hsirdyie; // [10:10] HSI Ready Interrupt Enable 
            Object *hserdyie; // [11:11] HSE Ready Interrupt Enable 
            Object *pllrdyie; // [12:12] PLL Ready Interrupt Enable 
            Object *hsi14rdye; // [13:13] HSI14 ready interrupt enable 
            Object *hsi48rdyie; // [14:14] HSI48 ready interrupt enable 
            Object *lsirdyc; // [16:16] LSI Ready Interrupt Clear 
            Object *lserdyc; // [17:17] LSE Ready Interrupt Clear 
            Object *hsirdyc; // [18:18] HSI Ready Interrupt Clear 
            Object *hserdyc; // [19:19] HSE Ready Interrupt Clear 
            Object *pllrdyc; // [20:20] PLL Ready Interrupt Clear 
            Object *hsi14rdyc; // [21:21] HSI 14 MHz Ready Interrupt Clear 
            Object *hsi48rdyc; // [22:22] HSI48 Ready Interrupt Clear 
            Object *cssc; // [23:23] Clock security system interrupt clear  
          } cir; 
          
          // APB2RSTR (APB2 peripheral reset register (RCC_APB2RSTR)) bitfields.
          struct { 
            Object *syscfgrst; // [0:0] SYSCFG and COMP reset 
            Object *adcrst; // [9:9] ADC interface reset 
            Object *tim1rst; // [11:11] TIM1 timer reset 
            Object *spi1rst; // [12:12] SPI 1 reset 
            Object *usart1rst; // [14:14] USART1 reset 
            Object *tim15rst; // [16:16] TIM15 timer reset 
            Object *tim16rst; // [17:17] TIM16 timer reset 
            Object *tim17rst; // [18:18] TIM17 timer reset 
            Object *dbgmcurst; // [22:22] Debug MCU reset  
          } apb2rstr; 
          
          // APB1RSTR (APB1 peripheral reset register (RCC_APB1RSTR)) bitfields.
          struct { 
            Object *tim2rst; // [0:0] Timer 2 reset 
            Object *tim3rst; // [1:1] Timer 3 reset 
            Object *tim6rst; // [4:4] Timer 6 reset 
            Object *tim7rst; // [5:5] TIM7 timer reset 
            Object *tim14rst; // [8:8] Timer 14 reset 
            Object *wwdgrst; // [11:11] Window watchdog reset 
            Object *spi2rst; // [14:14] SPI2 reset 
            Object *usart2rst; // [17:17] USART 2 reset 
            Object *usart3rst; // [18:18] USART3 reset 
            Object *usart4rst; // [19:19] USART4 reset 
            Object *usart5rst; // [20:20] USART5 reset 
            Object *i2c1rst; // [21:21] I2C1 reset 
            Object *i2c2rst; // [22:22] I2C2 reset 
            Object *usbrst; // [23:23] USB interface reset 
            Object *canrst; // [25:25] CAN interface reset 
            Object *crsrst; // [27:27] Clock Recovery System interface reset 
            Object *pwrrst; // [28:28] Power interface reset 
            Object *dacrst; // [29:29] DAC interface reset 
            Object *cecrst; // [30:30] HDMI CEC reset  
          } apb1rstr; 
          
          // AHBENR (AHB Peripheral Clock enable register (RCC_AHBENR)) bitfields.
          struct { 
            Object *dma1en; // [0:0] DMA1 clock enable 
            Object *dma2en; // [1:1] DMA2 clock enable 
            Object *sramen; // [2:2] SRAM interface clock enable 
            Object *flitfen; // [4:4] FLITF clock enable 
            Object *crcen; // [6:6] CRC clock enable 
            Object *iopaen; // [17:17] I/O port A clock enable 
            Object *iopben; // [18:18] I/O port B clock enable 
            Object *iopcen; // [19:19] I/O port C clock enable 
            Object *iopden; // [20:20] I/O port D clock enable 
            Object *iopfen; // [22:22] I/O port F clock enable 
            Object *tscen; // [24:24] Touch sensing controller clock enable  
          } ahbenr; 
          
          // APB2ENR (APB2 peripheral clock enable register (RCC_APB2ENR)) bitfields.
          struct { 
            Object *syscfgen; // [0:0] SYSCFG clock enable 
            Object *adcen; // [9:9] ADC 1 interface clock enable 
            Object *tim1en; // [11:11] TIM1 Timer clock enable 
            Object *spi1en; // [12:12] SPI 1 clock enable 
            Object *usart1en; // [14:14] USART1 clock enable 
            Object *tim15en; // [16:16] TIM15 timer clock enable 
            Object *tim16en; // [17:17] TIM16 timer clock enable 
            Object *tim17en; // [18:18] TIM17 timer clock enable 
            Object *dbgmcuen; // [22:22] MCU debug module clock enable  
          } apb2enr; 
          
          // APB1ENR (APB1 peripheral clock enable register (RCC_APB1ENR)) bitfields.
          struct { 
            Object *tim2en; // [0:0] Timer 2 clock enable 
            Object *tim3en; // [1:1] Timer 3 clock enable 
            Object *tim6en; // [4:4] Timer 6 clock enable 
            Object *tim7en; // [5:5] TIM7 timer clock enable 
            Object *tim14en; // [8:8] Timer 14 clock enable 
            Object *wwdgen; // [11:11] Window watchdog clock enable 
            Object *spi2en; // [14:14] SPI 2 clock enable 
            Object *usart2en; // [17:17] USART 2 clock enable 
            Object *usart3en; // [18:18] USART3 clock enable 
            Object *usart4en; // [19:19] USART4 clock enable 
            Object *usart5en; // [20:20] USART5 clock enable 
            Object *i2c1en; // [21:21] I2C 1 clock enable 
            Object *i2c2en; // [22:22] I2C 2 clock enable 
            Object *usbrst; // [23:23] USB interface clock enable 
            Object *canen; // [25:25] CAN interface clock enable 
            Object *crsen; // [27:27] Clock Recovery System interface clock enable 
            Object *pwren; // [28:28] Power interface clock enable 
            Object *dacen; // [29:29] DAC interface clock enable 
            Object *cecen; // [30:30] HDMI CEC interface clock enable  
          } apb1enr; 
          
          // BDCR (Backup domain control register (RCC_BDCR)) bitfields.
          struct { 
            Object *lseon; // [0:0] External Low Speed oscillator enable 
            Object *lserdy; // [1:1] External Low Speed oscillator ready 
            Object *lsebyp; // [2:2] External Low Speed oscillator bypass 
            Object *lsedrv; // [3:4] LSE oscillator drive capability 
            Object *rtcsel; // [8:9] RTC clock source selection 
            Object *rtcen; // [15:15] RTC clock enable 
            Object *bdrst; // [16:16] Backup domain software reset  
          } bdcr; 
          
          // CSR (Control/status register (RCC_CSR)) bitfields.
          struct { 
            Object *lsion; // [0:0] Internal low speed oscillator enable 
            Object *lsirdy; // [1:1] Internal low speed oscillator ready 
            Object *rmvf; // [24:24] Remove reset flag 
            Object *oblrstf; // [25:25] Option byte loader reset flag 
            Object *pinrstf; // [26:26] PIN reset flag 
            Object *porrstf; // [27:27] POR/PDR reset flag 
            Object *sftrstf; // [28:28] Software reset flag 
            Object *iwdgrstf; // [29:29] Independent watchdog reset flag 
            Object *wwdgrstf; // [30:30] Window watchdog reset flag 
            Object *lpwrrstf; // [31:31] Low-power reset flag  
          } csr; 
          
          // AHBRSTR (AHB peripheral reset register) bitfields.
          struct { 
            Object *ioparst; // [17:17] I/O port A reset 
            Object *iopbrst; // [18:18] I/O port B reset 
            Object *iopcrst; // [19:19] I/O port C reset 
            Object *iopdrst; // [20:20] I/O port D reset 
            Object *iopfrst; // [22:22] I/O port F reset 
            Object *tscrst; // [24:24] Touch sensing controller reset  
          } ahbrstr; 
          
          // CFGR2 (Clock configuration register 2) bitfields.
          struct { 
            Object *prediv; // [0:3] PREDIV division factor  
          } cfgr2; 
          
          // CFGR3 (Clock configuration register 3) bitfields.
          struct { 
            Object *usart1sw; // [0:1] USART1 clock source selection 
            Object *i2c1sw; // [4:4] I2C1 clock source selection 
            Object *cecsw; // [6:6] HDMI CEC clock source selection 
            Object *usbsw; // [7:7] USB clock source selection 
            Object *adcsw; // [8:8] ADC clock source selection 
            Object *usart2sw; // [16:17] USART2 clock source selection  
          } cfgr3; 
          
          // CR2 (Clock control register 2) bitfields.
          struct { 
            Object *hsi14on; // [0:0] HSI14 clock enable 
            Object *hsi14rdy; // [1:1] HR14 clock ready flag 
            Object *hsi14dis; // [2:2] HSI14 clock request from ADC disable 
            Object *hsi14trim; // [3:7] HSI14 clock trimming 
            Object *hsi14cal; // [8:15] HSI14 clock calibration 
            Object *hsi48on; // [16:16] HSI48 clock enable 
            Object *hsi48rdy; // [17:17] HSI48 clock ready flag 
            Object *hsi48cal; // [24:24] HSI48 factory clock calibration  
          } cr2; 
        } fld;
      } f0;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} STM32RCCState;

// ----------------------------------------------------------------------------

#endif /* STM32_RCC_H_ */
