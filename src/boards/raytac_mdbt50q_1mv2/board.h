/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef RAYTAC_MDBT50Q_1MV2_H
#define RAYTAC_MDBT50Q_1MV2_H

#define _PINNUM(port, pin)      ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER             0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER          2

#define BUTTON_1                _PINNUM(0, 21)
#define BUTTON_2                _PINNUM(1, 10)
#define BUTTON_PULL             NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER     "Raytac"
#define BLEDIS_MODEL            "MDBT50Q-1MV2"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+

#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x010B
#define USB_DESC_CDC_ONLY_PID  0x010B

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME        "Raytac MDBT50Q-1MV2"
#define UF2_VOLUME_LABEL        "MDBT50QBOOT"
#define UF2_BOARD_ID            "nRF52840-MDBT50Q-1MV2"
#define UF2_INDEX_URL           "https://www.raytac.com"

#endif // RAYTAC_MDBT50Q_1MV2_H
