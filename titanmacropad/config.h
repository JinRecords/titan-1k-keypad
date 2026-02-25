#pragma once

/* connect the switch between GP0 and GND */
#define DIRECT_PINS \
    {               \
        {           \
            GP0     \
        }           \
    }

#define WS2812_DI_PIN GP16
#define RGBLIGHT_LED_COUNT 1
#define RGBLIGHT_LIMIT_VAL 120

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL
