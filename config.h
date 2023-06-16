// Copyright 2023 larr (@larr)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Select hand configuration */
#define EE_HANDS

/* Hardware configuration */
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500
#define USE_SERIAL
#define FORCED_SYNC_THROTTLE_MS 100
#define SPLIT_CONNECTION_CHECK_TIMEOUT 500
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_MODS_ENABLE
#define SERIAL_DEBUG
#define SELECT_SOFT_SERIAL_SPEED 1
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
