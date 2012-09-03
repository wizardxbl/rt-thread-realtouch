/*
 * File      : hid.h
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2011, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2011-12-12     Yi Qiu      first version
 */

#ifndef __HID_H__
#define __HID_H__

#include <rtthread.h>

struct uhidinst
{
	upipe_t pipe_in;
	rt_uint8_t buffer[8];
	uprotocal_t protocal;
};	
typedef struct uhidinst* uhidinst_t;

#define USB_REQ_GET_REPORT		0x01
#define USB_REQ_GET_IDLE		0x02
#define USB_REQ_GET_PROTOCOL	0x03
#define USB_REQ_SET_REPORT		0x09
#define USB_REQ_SET_IDLE		0x0a
#define USB_REQ_SET_PROTOCOL	0x0b

#define USB_HID_KEYBOARD		1	
#define USB_HID_MOUSE			2

rt_err_t rt_usb_hid_set_idle(uifinst_t ifinst, int duration, int report_id);
rt_err_t rt_usb_hid_get_report(uifinst_t ifinst, rt_uint8_t type, rt_uint8_t id, rt_uint8_t *buffer, rt_size_t size);
rt_err_t rt_usb_hid_set_report(uifinst_t ifinst, rt_uint8_t *buffer, rt_size_t size);
rt_err_t rt_usb_hid_set_protocal(uifinst_t ifinst, int protocol);
rt_err_t rt_usb_hid_get_report_descriptor(uifinst_t ifinst, rt_uint8_t *buffer, rt_size_t size);
rt_err_t rt_usb_hid_protocal_register(uprotocal_t protocal);

#endif
