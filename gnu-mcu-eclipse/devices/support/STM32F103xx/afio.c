/*
 * STM32 - AFIO (Alternate function I/O) emulation.
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

#include <hw/cortexm/stm32/afio.h>
#include <hw/cortexm/stm32/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void stm32f103xx_afio_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    STM32AFIOState *state = STM32_AFIO_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.f1.reg.evcr = cm_object_get_child_by_name(obj, "EVCR");
    state->u.f1.reg.mapr = cm_object_get_child_by_name(obj, "MAPR");
    state->u.f1.reg.exticr1 = cm_object_get_child_by_name(obj, "EXTICR1");
    state->u.f1.reg.exticr2 = cm_object_get_child_by_name(obj, "EXTICR2");
    state->u.f1.reg.exticr3 = cm_object_get_child_by_name(obj, "EXTICR3");
    state->u.f1.reg.exticr4 = cm_object_get_child_by_name(obj, "EXTICR4");
    state->u.f1.reg.mapr2 = cm_object_get_child_by_name(obj, "MAPR2");
    
    
    // EVCR bitfields.
    state->u.f1.fld.evcr.pin = cm_object_get_child_by_name(state->u.f1.reg.evcr, "PIN"); 
    state->u.f1.fld.evcr.port = cm_object_get_child_by_name(state->u.f1.reg.evcr, "PORT"); 
    state->u.f1.fld.evcr.evoe = cm_object_get_child_by_name(state->u.f1.reg.evcr, "EVOE");  
    
    // MAPR bitfields.
    state->u.f1.fld.mapr.spi1_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "SPI1_REMAP"); 
    state->u.f1.fld.mapr.i2c1_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "I2C1_REMAP"); 
    state->u.f1.fld.mapr.usart1_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "USART1_REMAP"); 
    state->u.f1.fld.mapr.usart2_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "USART2_REMAP"); 
    state->u.f1.fld.mapr.usart3_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "USART3_REMAP"); 
    state->u.f1.fld.mapr.tim1_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "TIM1_REMAP"); 
    state->u.f1.fld.mapr.tim2_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "TIM2_REMAP"); 
    state->u.f1.fld.mapr.tim3_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "TIM3_REMAP"); 
    state->u.f1.fld.mapr.tim4_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "TIM4_REMAP"); 
    state->u.f1.fld.mapr.can_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "CAN_REMAP"); 
    state->u.f1.fld.mapr.pd01_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "PD01_REMAP"); 
    state->u.f1.fld.mapr.tim5ch4_iremap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "TIM5CH4_IREMAP"); 
    state->u.f1.fld.mapr.adc1_etrginj_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "ADC1_ETRGINJ_REMAP"); 
    state->u.f1.fld.mapr.adc1_etrgreg_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "ADC1_ETRGREG_REMAP"); 
    state->u.f1.fld.mapr.adc2_etrginj_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "ADC2_ETRGINJ_REMAP"); 
    state->u.f1.fld.mapr.adc2_etrgreg_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr, "ADC2_ETRGREG_REMAP"); 
    state->u.f1.fld.mapr.swj_cfg = cm_object_get_child_by_name(state->u.f1.reg.mapr, "SWJ_CFG");  
    
    // EXTICR1 bitfields.
    state->u.f1.fld.exticr1.exti0 = cm_object_get_child_by_name(state->u.f1.reg.exticr1, "EXTI0"); 
    state->u.f1.fld.exticr1.exti1 = cm_object_get_child_by_name(state->u.f1.reg.exticr1, "EXTI1"); 
    state->u.f1.fld.exticr1.exti2 = cm_object_get_child_by_name(state->u.f1.reg.exticr1, "EXTI2"); 
    state->u.f1.fld.exticr1.exti3 = cm_object_get_child_by_name(state->u.f1.reg.exticr1, "EXTI3");  
    
    // EXTICR2 bitfields.
    state->u.f1.fld.exticr2.exti4 = cm_object_get_child_by_name(state->u.f1.reg.exticr2, "EXTI4"); 
    state->u.f1.fld.exticr2.exti5 = cm_object_get_child_by_name(state->u.f1.reg.exticr2, "EXTI5"); 
    state->u.f1.fld.exticr2.exti6 = cm_object_get_child_by_name(state->u.f1.reg.exticr2, "EXTI6"); 
    state->u.f1.fld.exticr2.exti7 = cm_object_get_child_by_name(state->u.f1.reg.exticr2, "EXTI7");  
    
    // EXTICR3 bitfields.
    state->u.f1.fld.exticr3.exti8 = cm_object_get_child_by_name(state->u.f1.reg.exticr3, "EXTI8"); 
    state->u.f1.fld.exticr3.exti9 = cm_object_get_child_by_name(state->u.f1.reg.exticr3, "EXTI9"); 
    state->u.f1.fld.exticr3.exti10 = cm_object_get_child_by_name(state->u.f1.reg.exticr3, "EXTI10"); 
    state->u.f1.fld.exticr3.exti11 = cm_object_get_child_by_name(state->u.f1.reg.exticr3, "EXTI11");  
    
    // EXTICR4 bitfields.
    state->u.f1.fld.exticr4.exti12 = cm_object_get_child_by_name(state->u.f1.reg.exticr4, "EXTI12"); 
    state->u.f1.fld.exticr4.exti13 = cm_object_get_child_by_name(state->u.f1.reg.exticr4, "EXTI13"); 
    state->u.f1.fld.exticr4.exti14 = cm_object_get_child_by_name(state->u.f1.reg.exticr4, "EXTI14"); 
    state->u.f1.fld.exticr4.exti15 = cm_object_get_child_by_name(state->u.f1.reg.exticr4, "EXTI15");  
    
    // MAPR2 bitfields.
    state->u.f1.fld.mapr2.tim9_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr2, "TIM9_REMAP"); 
    state->u.f1.fld.mapr2.tim10_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr2, "TIM10_REMAP"); 
    state->u.f1.fld.mapr2.tim11_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr2, "TIM11_REMAP"); 
    state->u.f1.fld.mapr2.tim13_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr2, "TIM13_REMAP"); 
    state->u.f1.fld.mapr2.tim14_remap = cm_object_get_child_by_name(state->u.f1.reg.mapr2, "TIM14_REMAP"); 
    state->u.f1.fld.mapr2.fsmc_nadv = cm_object_get_child_by_name(state->u.f1.reg.mapr2, "FSMC_NADV");  
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t stm32_afio_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    STM32AFIOState *state = STM32_AFIO_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void stm32_afio_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    STM32AFIOState *state = STM32_AFIO_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t stm32_afio_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    STM32AFIOState *state = STM32_AFIO_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void stm32_afio_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    STM32AFIOState *state = STM32_AFIO_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool stm32_afio_is_enabled(Object *obj)
{
    STM32AFIOState *state = STM32_AFIO_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void stm32_afio_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    STM32AFIOState *state = STM32_AFIO_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void stm32_afio_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_STM32_AFIO)) {
        return;
    }

    STM32MCUState *mcu = stm32_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    STM32AFIOState *state = STM32_AFIO_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const STM32Capabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "AFIO";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[STM32_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case STM32_FAMILY_F1:

        if (capabilities->f1.is_103xx ) {

            stm32f103xx_afio_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.f1.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.f1.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->f1.reg.xxx, &stm32_afio_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->f1.reg.xxx, &stm32_afio_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->f1.reg.xxx, &stm32_afio_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->f1.reg.xxx, &stm32_afio_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_STM32_RCC "/AHB1ENR/AFIOEN");


        } else {
            assert(false);
        }

        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void stm32_afio_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_STM32_AFIO);
}

static void stm32_afio_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = stm32_afio_reset_callback;
    dc->realize = stm32_afio_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = stm32_afio_is_enabled;
}

static const TypeInfo stm32_afio_type_info = {
    .name = TYPE_STM32_AFIO,
    .parent = TYPE_STM32_AFIO_PARENT,
    .instance_init = stm32_afio_instance_init_callback,
    .instance_size = sizeof(STM32AFIOState),
    .class_init = stm32_afio_class_init_callback,
    .class_size = sizeof(STM32AFIOClass) };

static void stm32_afio_register_types(void)
{
    type_register_static(&stm32_afio_type_info);
}

type_init(stm32_afio_register_types);

// ----------------------------------------------------------------------------
