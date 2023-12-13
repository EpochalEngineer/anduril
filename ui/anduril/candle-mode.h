// candle-mode.h: Candle mode for Anduril.
// Copyright (C) 2017-2023 Selene ToyKeeper
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#ifndef CANDLE_AMPLITUDE
#define CANDLE_AMPLITUDE 25
#endif

uint8_t candle_mode_state(Event event, uint16_t arg);
// moved to fsm-misc.c because it's also used for tint ramping power correction
//uint8_t triangle_wave(uint8_t phase);

uint8_t candle_amplitude = CANDLE_AMPLITUDE;

typedef enum {
    candle_wobble_e,
    fireplace_slow_wobble_e,
    fireplace_fast_wobble_e,
    wobble_mode_END
} wobble_mode_te;

#ifdef USE_AUX_RGB_LEDS
// default not using aux when in candle_wobble_e
uint8_t candle_use_aux = 0;
#endif

const int NUM_WOBBLE = wobble_mode_END;
wobble_mode_te wobble_style = candle_wobble_e;
