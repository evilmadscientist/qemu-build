/*
 * STM32 - DBGMCU (Debug support) emulation.
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

#include <hw/cortexm/stm32/dbgmcu.h>
#include <hw/cortexm/stm32/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void stm32f0x1_dbgmcu_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    STM32DBGMCUState *state = STM32_DBGMCU_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.f0.reg.idcode = cm_object_get_child_by_name(obj, "IDCODE");
    state->u.f0.reg.cr = cm_object_get_child_by_name(obj, "CR");
    state->u.f0.reg.apblfz = cm_object_get_child_by_name(obj, "APBLFZ");
    state->u.f0.reg.apbhfz = cm_object_get_child_by_name(obj, "APBHFZ");
    
    
    // IDCODE bitfields.
    state->u.f0.fld.idcode.dev_id = cm_object_get_child_by_name(state->u.f0.reg.idcode, "DEV_ID"); 
    state->u.f0.fld.idcode.div_id = cm_object_get_child_by_name(state->u.f0.reg.idcode, "DIV_ID"); 
    state->u.f0.fld.idcode.rev_id = cm_object_get_child_by_name(state->u.f0.reg.idcode, "REV_ID");  
    
    // CR bitfields.
    state->u.f0.fld.cr.dbg_stop = cm_object_get_child_by_name(state->u.f0.reg.cr, "DBG_STOP"); 
    state->u.f0.fld.cr.dbg_standby = cm_object_get_child_by_name(state->u.f0.reg.cr, "DBG_STANDBY");  
    
    // APBLFZ bitfields.
    state->u.f0.fld.apblfz.dbg_timer2_stop = cm_object_get_child_by_name(state->u.f0.reg.apblfz, "DBG_TIMER2_STOP"); 
    state->u.f0.fld.apblfz.dbg_timer3_stop = cm_object_get_child_by_name(state->u.f0.reg.apblfz, "DBG_TIMER3_STOP"); 
    state->u.f0.fld.apblfz.dbg_timer6_stop = cm_object_get_child_by_name(state->u.f0.reg.apblfz, "DBG_TIMER6_STOP"); 
    state->u.f0.fld.apblfz.dbg_timer14_stop = cm_object_get_child_by_name(state->u.f0.reg.apblfz, "DBG_TIMER14_STOP"); 
    state->u.f0.fld.apblfz.dbg_rtc_stop = cm_object_get_child_by_name(state->u.f0.reg.apblfz, "DBG_RTC_STOP"); 
    state->u.f0.fld.apblfz.dbg_wwdg_stop = cm_object_get_child_by_name(state->u.f0.reg.apblfz, "DBG_WWDG_STOP"); 
    state->u.f0.fld.apblfz.dbg_iwdg_stop = cm_object_get_child_by_name(state->u.f0.reg.apblfz, "DBG_IWDG_STOP"); 
    state->u.f0.fld.apblfz.i2c1_smbus_timeout = cm_object_get_child_by_name(state->u.f0.reg.apblfz, "I2C1_SMBUS_TIMEOUT");  
    
    // APBHFZ bitfields.
    state->u.f0.fld.apbhfz.dbg_timer1_stop = cm_object_get_child_by_name(state->u.f0.reg.apbhfz, "DBG_TIMER1_STOP"); 
    state->u.f0.fld.apbhfz.dbg_timer15_sto = cm_object_get_child_by_name(state->u.f0.reg.apbhfz, "DBG_TIMER15_STO"); 
    state->u.f0.fld.apbhfz.dbg_timer16_sto = cm_object_get_child_by_name(state->u.f0.reg.apbhfz, "DBG_TIMER16_STO"); 
    state->u.f0.fld.apbhfz.dbg_timer17_sto = cm_object_get_child_by_name(state->u.f0.reg.apbhfz, "DBG_TIMER17_STO");  
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t stm32_dbgmcu_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    STM32DBGMCUState *state = STM32_DBGMCU_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void stm32_dbgmcu_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    STM32DBGMCUState *state = STM32_DBGMCU_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t stm32_dbgmcu_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    STM32DBGMCUState *state = STM32_DBGMCU_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void stm32_dbgmcu_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    STM32DBGMCUState *state = STM32_DBGMCU_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool stm32_dbgmcu_is_enabled(Object *obj)
{
    STM32DBGMCUState *state = STM32_DBGMCU_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void stm32_dbgmcu_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    STM32DBGMCUState *state = STM32_DBGMCU_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void stm32_dbgmcu_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_STM32_DBGMCU)) {
        return;
    }

    STM32MCUState *mcu = stm32_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    STM32DBGMCUState *state = STM32_DBGMCU_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const STM32Capabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "DBGMCU";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[STM32_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case STM32_FAMILY_F0:

        if (capabilities->f0.is_0x1 ) {

            stm32f0x1_dbgmcu_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.f0.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.f0.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->f0.reg.xxx, &stm32_dbgmcu_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->f0.reg.xxx, &stm32_dbgmcu_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->f0.reg.xxx, &stm32_dbgmcu_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->f0.reg.xxx, &stm32_dbgmcu_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_STM32_RCC "/AHB1ENR/DBGMCUEN");


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

static void stm32_dbgmcu_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_STM32_DBGMCU);
}

static void stm32_dbgmcu_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = stm32_dbgmcu_reset_callback;
    dc->realize = stm32_dbgmcu_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = stm32_dbgmcu_is_enabled;
}

static const TypeInfo stm32_dbgmcu_type_info = {
    .name = TYPE_STM32_DBGMCU,
    .parent = TYPE_STM32_DBGMCU_PARENT,
    .instance_init = stm32_dbgmcu_instance_init_callback,
    .instance_size = sizeof(STM32DBGMCUState),
    .class_init = stm32_dbgmcu_class_init_callback,
    .class_size = sizeof(STM32DBGMCUClass) };

static void stm32_dbgmcu_register_types(void)
{
    type_register_static(&stm32_dbgmcu_type_info);
}

type_init(stm32_dbgmcu_register_types);

// ----------------------------------------------------------------------------
