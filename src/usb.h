/*
 * lintartarus: key mapping and light control for the Razer Tartarus on Linux
 * Copyright (C) 2015 Andrew Stone <andrew@clovar.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include "util.h"

/**
 * Different backlight levels
 */
enum usb_brightness {
	bright_off,
	bright_low,
	bright_med,
	bright_high,
};

/**
 * Get USB ready to run
 */
void usb_init(void);

/**
 * Set device brightness
 */
void usb_set_brightness(enum usb_brightness brightness);

/**
 * Set pulse
 *
 * 0 = solid, no pulsing
 * 1 = pulsing
 */
void usb_set_pulse(int pulse);

/**
 * Return if the device is connected
 */
int usb_connected(void);

/**
 * Run any necessary USB polling operations
 */
void usb_poll(void);

/**
 * Sync settings to the device
 */
void usb_commit(void);

/**
 * Print a USB error to stderr
 */
PRINTF(2, 3)
void usb_perror(int err, const char *format, ...);