// bitmaps.h
#pragma once

#include QMK_KEYBOARD_H

// Bitmap Definitions
static const char PROGMEM cmd_off_opt_off_l[] = {
    // Bitmap data for "Command Off" and "Option Off"
    // 'cmd_off_opt_off', 64x32px
    0x00, 0xc0, 0xf0, 0x78, 0x1c, 0x0c, 0x0e, 0x86, 0xc6, 0xc6, 0xc6, 0xc6, 0x86, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x86, 0xc6, 0xc6, 0xc6, 0xc6, 0x86, 0x0e, 0x0c, 0x1c, 0x78, 0xf0, 0xc0, 0x00,
    0x00, 0xc0, 0xf0, 0x78, 0x1c, 0x8c, 0x8e, 0x86, 0x86, 0x86, 0x86, 0x86, 0x06, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x8e, 0x8c, 0x1c, 0x78, 0xf0, 0xc0, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0f, 0x1f, 0x39, 0x30, 0x30, 0x31, 0xff, 0xff, 0x30, 0x30,
    0x30, 0x30, 0xff, 0xff, 0x31, 0x30, 0x30, 0x39, 0x1f, 0x0f, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x0f, 0x3e, 0xf8, 0xe0,
    0x80, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xf0, 0xf8, 0x9c, 0x0c, 0x0c, 0x8c, 0xff, 0xff, 0x0c, 0x0c,
    0x0c, 0x0c, 0xff, 0xff, 0x8c, 0x0c, 0x0c, 0x9c, 0xf8, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x0f, 0x3e, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0x03, 0x0f, 0x1e, 0x38, 0x30, 0x70, 0x61, 0x63, 0x63, 0x63, 0x63, 0x61, 0x60, 0x60, 0x60,
    0x60, 0x60, 0x60, 0x61, 0x63, 0x63, 0x63, 0x63, 0x61, 0x70, 0x30, 0x38, 0x1e, 0x0f, 0x03, 0x00,
    0x00, 0x03, 0x0f, 0x1e, 0x38, 0x30, 0x70, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
    0x60, 0x60, 0x60, 0x61, 0x63, 0x63, 0x63, 0x63, 0x63, 0x73, 0x33, 0x38, 0x1e, 0x0f, 0x03, 0x00,
};
static const char PROGMEM cmd_off_opt_on_l[] = {
    // Bitmap data for "Command Off" and "Option On"
    // 'cmd_off_opt_on', 64x32px
    0x00, 0xc0, 0xf0, 0x78, 0x1c, 0x0c, 0x0e, 0x86, 0xc6, 0xc6, 0xc6, 0xc6, 0x86, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x86, 0xc6, 0xc6, 0xc6, 0xc6, 0x86, 0x0e, 0x0c, 0x1c, 0x78, 0xf0, 0xc0, 0x00,
    0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0x7c, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0xfe, 0xfe, 0xfe, 0xfe,
    0xfe, 0xfe, 0xfe, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7c, 0xfc, 0xf8, 0xf0, 0xc0, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0f, 0x1f, 0x39, 0x30, 0x30, 0x31, 0xff, 0xff, 0x30, 0x30,
    0x30, 0x30, 0xff, 0xff, 0x31, 0x30, 0x30, 0x39, 0x1f, 0x0f, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf0, 0xc1, 0x07, 0x1f,
    0x7f, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xf0, 0xf8, 0x9c, 0x0c, 0x0c, 0x8c, 0xff, 0xff, 0x0c, 0x0c,
    0x0c, 0x0c, 0xff, 0xff, 0x8c, 0x0c, 0x0c, 0x9c, 0xf8, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0xf0, 0xc1, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0x03, 0x0f, 0x1e, 0x38, 0x30, 0x70, 0x61, 0x63, 0x63, 0x63, 0x63, 0x61, 0x60, 0x60, 0x60,
    0x60, 0x60, 0x60, 0x61, 0x63, 0x63, 0x63, 0x63, 0x61, 0x70, 0x30, 0x38, 0x1e, 0x0f, 0x03, 0x00,
    0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,
    0x7f, 0x7f, 0x7f, 0x7e, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x3c, 0x3f, 0x1f, 0x0f, 0x03, 0x00,
};
static const char PROGMEM cmd_on_opt_off_l[] = {
    // Bitmap data for "Command On" and "Option Off"
    // 'cmd_on_opt_off', 64x32px
    0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0x7e, 0x3e, 0x3e, 0x3e, 0x3e, 0x7e, 0xfe, 0xfe, 0xfe,
    0xfe, 0xfe, 0xfe, 0x7e, 0x3e, 0x3e, 0x3e, 0x3e, 0x7e, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xc0, 0x00,
    0x00, 0xc0, 0xf0, 0x78, 0x1c, 0x8c, 0x8e, 0x86, 0x86, 0x86, 0x86, 0x86, 0x06, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x8e, 0x8c, 0x1c, 0x78, 0xf0, 0xc0, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xe0, 0xc6, 0xcf, 0xcf, 0xce, 0x00, 0x00, 0xcf, 0xcf,
    0xcf, 0xcf, 0x00, 0x00, 0xce, 0xcf, 0xcf, 0xc6, 0xe0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x0f, 0x3e, 0xf8, 0xe0,
    0x80, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x07, 0x63, 0xf3, 0xf3, 0x73, 0x00, 0x00, 0xf3, 0xf3,
    0xf3, 0xf3, 0x00, 0x00, 0x73, 0xf3, 0xf3, 0x63, 0x07, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x0f, 0x3e, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7e, 0x7c, 0x7c, 0x7c, 0x7c, 0x7e, 0x7f, 0x7f, 0x7f,
    0x7f, 0x7f, 0x7f, 0x7e, 0x7c, 0x7c, 0x7c, 0x7c, 0x7e, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 0x03, 0x00,
    0x00, 0x03, 0x0f, 0x1e, 0x38, 0x30, 0x70, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
    0x60, 0x60, 0x60, 0x61, 0x63, 0x63, 0x63, 0x63, 0x63, 0x73, 0x33, 0x38, 0x1e, 0x0f, 0x03, 0x00,
};
static const char PROGMEM cmd_on_opt_on_l[] = {
    // Bitmap data for "Command On" and "Option On"
    // 'cmd_on_opt_on', 64x32px
    0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0x7e, 0x3e, 0x3e, 0x3e, 0x3e, 0x7e, 0xfe, 0xfe, 0xfe,
    0xfe, 0xfe, 0xfe, 0x7e, 0x3e, 0x3e, 0x3e, 0x3e, 0x7e, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xc0, 0x00,
    0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0x7c, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0xfe, 0xfe, 0xfe, 0xfe,
    0xfe, 0xfe, 0xfe, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7c, 0xfc, 0xf8, 0xf0, 0xc0, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xe0, 0xc6, 0xcf, 0xcf, 0xce, 0x00, 0x00, 0xcf, 0xcf,
    0xcf, 0xcf, 0x00, 0x00, 0xce, 0xcf, 0xcf, 0xc6, 0xe0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf0, 0xc1, 0x07, 0x1f,
    0x7f, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x07, 0x63, 0xf3, 0xf3, 0x73, 0x00, 0x00, 0xf3, 0xf3,
    0xf3, 0xf3, 0x00, 0x00, 0x73, 0xf3, 0xf3, 0x63, 0x07, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0xf0, 0xc1, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7e, 0x7c, 0x7c, 0x7c, 0x7c, 0x7e, 0x7f, 0x7f, 0x7f,
    0x7f, 0x7f, 0x7f, 0x7e, 0x7c, 0x7c, 0x7c, 0x7c, 0x7e, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 0x03, 0x00,
    0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,
    0x7f, 0x7f, 0x7f, 0x7e, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x3c, 0x3f, 0x1f, 0x0f, 0x03, 0x00,
};
static const char PROGMEM ctl_off_sft_off_l[] = {
    // Bitmap data for "Control Off" and "Shift Off"
    // 'ctl_off_sft_off', 64x32px
    0x00, 0xc0, 0xf0, 0x78, 0x1c, 0x0c, 0x0e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x86,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0e, 0x0c, 0x1c, 0x78, 0xf0, 0xc0, 0x00,
    0x00, 0xc0, 0xf0, 0x78, 0x1c, 0x0c, 0x0e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x86, 0xc6, 0xe6,
    0xc6, 0x86, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0e, 0x0c, 0x1c, 0x78, 0xf0, 0xc0, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x0e, 0x07, 0x03,
    0x07, 0x0e, 0x1c, 0x38, 0x70, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xb8, 0x9c, 0x0e, 0x07, 0x03, 0x01, 0x00,
    0x01, 0x03, 0x07, 0x0e, 0x9c, 0xb8, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xff, 0xff, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0x03, 0x0f, 0x1e, 0x38, 0x30, 0x70, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
    0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x70, 0x30, 0x38, 0x1e, 0x0f, 0x03, 0x00,
    0x00, 0x03, 0x0f, 0x1e, 0x38, 0x30, 0x70, 0x60, 0x60, 0x60, 0x61, 0x63, 0x63, 0x63, 0x63, 0x63,
    0x63, 0x63, 0x63, 0x63, 0x61, 0x60, 0x60, 0x60, 0x60, 0x70, 0x30, 0x38, 0x1e, 0x0f, 0x03, 0x00,
};
static const char PROGMEM ctl_off_sft_on_l[] = {
    // Bitmap data for "Control Off" and "Shift On"
    // 'ctl_off_sft_on', 64x32px
    0x00, 0xc0, 0xf0, 0x78, 0x1c, 0x0c, 0x0e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x86,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0e, 0x0c, 0x1c, 0x78, 0xf0, 0xc0, 0x00,
    0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x7e, 0x3e, 0x1e,
    0x3e, 0x7e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xc0, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x0e, 0x07, 0x03,
    0x07, 0x0e, 0x1c, 0x38, 0x70, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f, 0x0f, 0x47, 0x63, 0xf1, 0xf8, 0xfc, 0xfe, 0xff,
    0xfe, 0xfc, 0xf8, 0xf1, 0x63, 0x47, 0x0f, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0x03, 0x0f, 0x1e, 0x38, 0x30, 0x70, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
    0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x70, 0x30, 0x38, 0x1e, 0x0f, 0x03, 0x00,
    0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c,
    0x7c, 0x7c, 0x7c, 0x7c, 0x7e, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 0x03, 0x00,
};
static const char PROGMEM ctl_on_sft_off_l[] = {
    // Bitmap data for "Control On" and "Shift Off"
    // 'ctl_on_sft_off', 64x32px
    0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x7e,
    0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xc0, 0x00,
    0x00, 0xc0, 0xf0, 0x78, 0x1c, 0x0c, 0x0e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x86, 0xc6, 0xe6,
    0xc6, 0x86, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0e, 0x0c, 0x1c, 0x78, 0xf0, 0xc0, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f, 0x8f, 0xc7, 0xe3, 0xf1, 0xf8, 0xfc,
    0xf8, 0xf1, 0xe3, 0xc7, 0x8f, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xb8, 0x9c, 0x0e, 0x07, 0x03, 0x01, 0x00,
    0x01, 0x03, 0x07, 0x0e, 0x9c, 0xb8, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xff, 0xff, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
    0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,
    0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 0x03, 0x00,
    0x00, 0x03, 0x0f, 0x1e, 0x38, 0x30, 0x70, 0x60, 0x60, 0x60, 0x61, 0x63, 0x63, 0x63, 0x63, 0x63,
    0x63, 0x63, 0x63, 0x63, 0x61, 0x60, 0x60, 0x60, 0x60, 0x70, 0x30, 0x38, 0x1e, 0x0f, 0x03, 0x00,
};
static const char PROGMEM ctl_on_sft_on_l[] = {
    // Bitmap data for "Control On" and "Shift On"
    // 'ctl_on_sft_on', 64x32px
    0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x7e,
    0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xc0, 0x00,
    0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x7e, 0x3e, 0x1e,
    0x3e, 0x7e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xc0, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f, 0x8f, 0xc7, 0xe3, 0xf1, 0xf8, 0xfc,
    0xf8, 0xf1, 0xe3, 0xc7, 0x8f, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f, 0x0f, 0x47, 0x63, 0xf1, 0xf8, 0xfc, 0xfe, 0xff,
    0xfe, 0xfc, 0xf8, 0xf1, 0x63, 0x47, 0x0f, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
    0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,
    0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 0x03, 0x00,
    0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c,
    0x7c, 0x7c, 0x7c, 0x7c, 0x7e, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 0x03, 0x00
};



static const char PROGMEM cmd_off_opt_off_s[] = {
    // 'cmd_off_opt_off_s', 64x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xfc, 0x06, 0x03, 0x31, 0x49, 0x49, 0xf1, 0x41, 0xf1, 0x49, 0x49, 0x31, 0x03, 0x06, 0xfc, 0x00,
    0x00, 0xfc, 0x06, 0x03, 0x09, 0x09, 0x19, 0x71, 0xc1, 0x01, 0x09, 0x09, 0x09, 0x03, 0x06, 0xfc,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1f, 0x30, 0x60, 0x46, 0x49, 0x49, 0x47, 0x41, 0x47, 0x49, 0x49, 0x46, 0x60, 0x30, 0x1f, 0x00,
    0x00, 0x1f, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x41, 0x47, 0x4c, 0x48, 0x48, 0x60, 0x30, 0x1f,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const char PROGMEM cmd_off_opt_on_s[] = {
    // 'cmd_off_opt_on_s', 64x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xfc, 0x06, 0x03, 0x31, 0x49, 0x49, 0xf1, 0x41, 0xf1, 0x49, 0x49, 0x31, 0x03, 0x06, 0xfc, 0x00,
    0x00, 0xfc, 0xfe, 0xff, 0xf7, 0xf7, 0xe7, 0x8f, 0x3f, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0xfe, 0xfc,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1f, 0x30, 0x60, 0x46, 0x49, 0x49, 0x47, 0x41, 0x47, 0x49, 0x49, 0x46, 0x60, 0x30, 0x1f, 0x00,
    0x00, 0x1f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 0x78, 0x73, 0x77, 0x77, 0x7f, 0x3f, 0x1f,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const char PROGMEM cmd_on_opt_off_s[] = {
    // 'cmd_on_opt_off_s', 64x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xfc, 0xfe, 0xff, 0xcf, 0xb7, 0xb7, 0x0f, 0xbf, 0x0f, 0xb7, 0xb7, 0xcf, 0xff, 0xfe, 0xfc, 0x00,
    0x00, 0xfc, 0x06, 0x03, 0x09, 0x09, 0x19, 0x71, 0xc1, 0x01, 0x09, 0x09, 0x09, 0x03, 0x06, 0xfc,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1f, 0x3f, 0x7f, 0x79, 0x76, 0x76, 0x78, 0x7e, 0x78, 0x76, 0x76, 0x79, 0x7f, 0x3f, 0x1f, 0x00,
    0x00, 0x1f, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x41, 0x47, 0x4c, 0x48, 0x48, 0x60, 0x30, 0x1f,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const char PROGMEM cmd_on_opt_on_s[] = {
    // 'cmd_on_opt_on_s', 64x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xfc, 0xfe, 0xff, 0xcf, 0xb7, 0xb7, 0x0f, 0xbf, 0x0f, 0xb7, 0xb7, 0xcf, 0xff, 0xfe, 0xfc, 0x00,
    0x00, 0xfc, 0xfe, 0xff, 0xf7, 0xf7, 0xe7, 0x8f, 0x3f, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0xfe, 0xfc,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1f, 0x3f, 0x7f, 0x79, 0x76, 0x76, 0x78, 0x7e, 0x78, 0x76, 0x76, 0x79, 0x7f, 0x3f, 0x1f, 0x00,
    0x00, 0x1f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 0x78, 0x73, 0x77, 0x77, 0x7f, 0x3f, 0x1f,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const char PROGMEM ctl_off_sft_off_s[] = {
    // 'ctl_off_sft_off_s', 64x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xf8, 0x0c, 0x06, 0x02, 0x82, 0xc2, 0x62, 0x32, 0x62, 0xc2, 0x82, 0x02, 0x06, 0x0c, 0xf8, 0x00,
    0x00, 0xf8, 0x0c, 0x06, 0x82, 0xc2, 0x62, 0x32, 0x1a, 0x32, 0x62, 0xc2, 0x82, 0x06, 0x0c, 0xf8,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3f, 0x60, 0xc0, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0xc0, 0x60, 0x3f, 0x00,
    0x00, 0x3f, 0x60, 0xc1, 0x81, 0x81, 0x9f, 0x90, 0x90, 0x90, 0x9f, 0x81, 0x81, 0xc1, 0x60, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const char PROGMEM ctl_off_sft_on_s[] = {
    // 'ctl_off_sft_on_s', 64x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xf8, 0x0c, 0x06, 0x02, 0x82, 0xc2, 0x62, 0x32, 0x62, 0xc2, 0x82, 0x02, 0x06, 0x0c, 0xf8, 0x00,
    0x00, 0xf8, 0xfc, 0xfe, 0x7e, 0x3e, 0x9e, 0xce, 0xe6, 0xce, 0x9e, 0x3e, 0x7e, 0xfe, 0xfc, 0xf8,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3f, 0x60, 0xc0, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0xc0, 0x60, 0x3f, 0x00,
    0x00, 0x3f, 0x7f, 0xfe, 0xfe, 0xfe, 0xe0, 0xef, 0xef, 0xef, 0xe0, 0xfe, 0xfe, 0xfe, 0x7f, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const char PROGMEM ctl_on_sft_off_s[] = {
    // 'ctl_on_sft_off_s', 64x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xf8, 0xfc, 0xfe, 0xfe, 0x7e, 0x3e, 0x9e, 0xce, 0x9e, 0x3e, 0x7e, 0xfe, 0xfe, 0xfc, 0xf8, 0x00,
    0x00, 0xf8, 0x0c, 0x06, 0x82, 0xc2, 0x62, 0x32, 0x1a, 0x32, 0x62, 0xc2, 0x82, 0x06, 0x0c, 0xf8,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3f, 0x7f, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0x7f, 0x3f, 0x00,
    0x00, 0x3f, 0x60, 0xc1, 0x81, 0x81, 0x9f, 0x90, 0x90, 0x90, 0x9f, 0x81, 0x81, 0xc1, 0x60, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const char PROGMEM ctl_on_sft_on_s[] = {
    // 'ctl_on_sft_on_s', 64x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xf8, 0xfc, 0xfe, 0xfe, 0x7e, 0x3e, 0x9e, 0xce, 0x9e, 0x3e, 0x7e, 0xfe, 0xfe, 0xfc, 0xf8, 0x00,
    0x00, 0xf8, 0xfc, 0xfe, 0x7e, 0x3e, 0x9e, 0xce, 0xe6, 0xce, 0x9e, 0x3e, 0x7e, 0xfe, 0xfc, 0xf8,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3f, 0x7f, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0x7f, 0x3f, 0x00,
    0x00, 0x3f, 0x7f, 0xfe, 0xfe, 0xfe, 0xe0, 0xef, 0xef, 0xef, 0xe0, 0xfe, 0xfe, 0xfe, 0x7f, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// layer bitmaps
static const char PROGMEM adj[] = {
    // 'adj', 64x64px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0,
    0xc0, 0x00, 0xe0, 0xf0, 0x38, 0x3c, 0x3e, 0x36, 0x36, 0xfe, 0xfe, 0x00, 0x86, 0x8e, 0x9c, 0xb8,
    0xf0, 0xf0, 0xb8, 0x9e, 0x0e, 0x00, 0xe0, 0xf0, 0xb8, 0xbc, 0xbe, 0xb6, 0xb6, 0x86, 0x00, 0xfe,
    0xfe, 0x36, 0x36, 0x36, 0x76, 0xf6, 0xde, 0x8e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x14, 0x34, 0x75, 0xd5, 0x95, 0xb5, 0xe5, 0xc5, 0x95, 0x35,
    0x75, 0xd4, 0x95, 0xb5, 0xe4, 0xc4, 0x94, 0x34, 0x74, 0xd5, 0x95, 0xb4, 0xe5, 0xc5, 0x95, 0x35,
    0x75, 0xd5, 0x95, 0xb5, 0xe4, 0xc4, 0x95, 0x35, 0x75, 0xf5, 0xf5, 0xf5, 0xe5, 0xcd, 0x98, 0x31,
    0x61, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x01, 0x81, 0x80, 0x80, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00,
    0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0x60, 0x30, 0x18, 0x1c, 0x1e, 0x1e, 0x0e,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x82, 0xc2, 0x62, 0x32, 0x18, 0x0f, 0x03, 0x03, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00,
    0x00, 0x01, 0x03, 0xff, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x60,
    0x60, 0xe0, 0xe0, 0x00, 0xe0, 0xe0, 0x60, 0x60, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x08, 0x08,
    0x08, 0x08, 0x68, 0x68, 0xe8, 0xe8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0c,
    0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x40, 0x5e, 0x5f, 0x43, 0x43, 0x43, 0x43,
    0x43, 0x5f, 0x5f, 0x40, 0x5f, 0x5f, 0x58, 0x58, 0x58, 0x59, 0x5b, 0x5f, 0x5e, 0x00, 0x1e, 0x1e,
    0x18, 0x18, 0x18, 0x18, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const char PROGMEM base[] = {
    // 'base', 64x64px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0,
    0xc0, 0x00, 0xe0, 0xf0, 0x38, 0x3c, 0x3e, 0x36, 0x36, 0xfe, 0xfe, 0x00, 0x86, 0x8e, 0x9c, 0xb8,
    0xf0, 0xf0, 0xb8, 0x9e, 0x0e, 0x00, 0xe0, 0xf0, 0xb8, 0xbc, 0xbe, 0xb6, 0xb6, 0x86, 0x00, 0xfe,
    0xfe, 0x36, 0x36, 0x36, 0x76, 0xf6, 0xde, 0x8e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x14, 0x34, 0x75, 0xf5, 0xf5, 0xf5, 0xe5, 0xc5, 0x95, 0x35,
    0x75, 0xd4, 0x95, 0xb5, 0xe4, 0xc4, 0x94, 0x34, 0x74, 0xd5, 0x95, 0xb4, 0xe5, 0xc5, 0x95, 0x35,
    0x75, 0xd5, 0x95, 0xb5, 0xe4, 0xc4, 0x95, 0x35, 0x75, 0xd5, 0x95, 0xb5, 0xe5, 0xcd, 0x98, 0x31,
    0x61, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x01, 0x81, 0x80, 0x80, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00,
    0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0x60, 0x30, 0x18, 0x1c, 0x1e, 0x1e, 0x0e,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0xff, 0x03, 0x03, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00,
    0x00, 0x01, 0x03, 0xff, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x18, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x60, 0x60, 0x60, 0x60,
    0x60, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x60, 0x60, 0xe0, 0xe0, 0x00, 0xe8, 0xe8,
    0x68, 0x68, 0x68, 0x68, 0x68, 0x08, 0x08, 0x08, 0x08, 0x08, 0x88, 0xc8, 0xe8, 0x68, 0x68, 0x6c,
    0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x40, 0x5f, 0x5f, 0x5b, 0x5b, 0x5b, 0x5b,
    0x5b, 0x5f, 0x5c, 0x40, 0x5e, 0x5f, 0x43, 0x43, 0x43, 0x43, 0x43, 0x5f, 0x5f, 0x00, 0x18, 0x19,
    0x1b, 0x1b, 0x1b, 0x1b, 0x1f, 0x1e, 0x1c, 0x00, 0x1e, 0x1f, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x18,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const char PROGMEM func[] = {
    // 'func', 64x64px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0,
    0xc0, 0x00, 0xe0, 0xf0, 0x38, 0x3c, 0x3e, 0x36, 0x36, 0xfe, 0xfe, 0x00, 0x86, 0x8e, 0x9c, 0xb8,
    0xf0, 0xf0, 0xb8, 0x9e, 0x0e, 0x00, 0xe0, 0xf0, 0xb8, 0xbc, 0xbe, 0xb6, 0xb6, 0x86, 0x00, 0xfe,
    0xfe, 0x36, 0x36, 0x36, 0x76, 0xf6, 0xde, 0x8e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x14, 0x34, 0x75, 0xd5, 0x95, 0xb5, 0xe5, 0xc5, 0x95, 0x35,
    0x75, 0xd4, 0x95, 0xb5, 0xe4, 0xc4, 0x94, 0x34, 0x74, 0xd5, 0x95, 0xb4, 0xe5, 0xc5, 0x95, 0x35,
    0x75, 0xf5, 0xf5, 0xf5, 0xe4, 0xc4, 0x95, 0x35, 0x75, 0xd5, 0x95, 0xb5, 0xe5, 0xcd, 0x98, 0x31,
    0x61, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x01, 0x81, 0x80, 0x80, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00,
    0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0x60, 0x30, 0x18, 0x1c, 0x1e, 0x1e, 0x0e,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0xff, 0x03, 0x03, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00,
    0x00, 0x01, 0x03, 0xff, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xd8, 0xd8, 0xd8, 0x18,
    0x18, 0x38, 0x38, 0x00, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x00, 0xfa, 0xfa,
    0x1a, 0x1a, 0x3a, 0x72, 0xe2, 0xc2, 0x82, 0x02, 0xfa, 0xfa, 0x1a, 0x1a, 0x1a, 0x1a, 0x3a, 0x3b,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0c, 0x18, 0x10, 0x17, 0x17, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x10, 0x11, 0x13, 0x17, 0x16, 0x16, 0x16, 0x16, 0x17, 0x17, 0x00, 0x07, 0x07,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const char PROGMEM nav[] = {
    // 'navi', 64x64px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0,
    0xc0, 0x00, 0xe0, 0xf0, 0x38, 0x3c, 0x3e, 0x36, 0x36, 0xfe, 0xfe, 0x00, 0x86, 0x8e, 0x9c, 0xb8,
    0xf0, 0xf0, 0xb8, 0x9e, 0x0e, 0x00, 0xe0, 0xf0, 0xb8, 0xbc, 0xbe, 0xb6, 0xb6, 0x86, 0x00, 0xfe,
    0xfe, 0x36, 0x36, 0x36, 0x76, 0xf6, 0xde, 0x8e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x14, 0x34, 0x75, 0xd5, 0x95, 0xb5, 0xe5, 0xc5, 0x95, 0x35,
    0x75, 0xd4, 0x95, 0xb5, 0xe4, 0xc4, 0x94, 0x34, 0x74, 0xf5, 0xf5, 0xf4, 0xe5, 0xc5, 0x95, 0x35,
    0x75, 0xd5, 0x95, 0xb5, 0xe4, 0xc4, 0x95, 0x35, 0x75, 0xd5, 0x95, 0xb5, 0xe5, 0xcd, 0x98, 0x31,
    0x61, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x01, 0x81, 0x80, 0x80, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00,
    0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0x60, 0x30, 0x18, 0x1c, 0x1e, 0x1e, 0x0e,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0xff, 0x03, 0x03, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00,
    0x00, 0x01, 0x03, 0xff, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0,
    0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x3f, 0x60, 0xc0, 0x80, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x06, 0x06, 0x0e, 0x1c,
    0x38, 0xf0, 0xe0, 0x00, 0xe0, 0xf0, 0x38, 0x3c, 0x3e, 0x36, 0x36, 0xfe, 0xfe, 0x00, 0x1e, 0x3e,
    0x70, 0xe0, 0xc0, 0x80, 0x80, 0xfe, 0xfe, 0x00, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x04, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04,
    0x04, 0x05, 0x05, 0x04, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const char PROGMEM sym[] = {
    // 'sym', 64x64px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0,
    0xc0, 0x00, 0xe0, 0xf0, 0x38, 0x3c, 0x3e, 0x36, 0x36, 0xfe, 0xfe, 0x00, 0x86, 0x8e, 0x9c, 0xb8,
    0xf0, 0xf0, 0xb8, 0x9e, 0x0e, 0x00, 0xe0, 0xf0, 0xb8, 0xbc, 0xbe, 0xb6, 0xb6, 0x86, 0x00, 0xfe,
    0xfe, 0x36, 0x36, 0x36, 0x76, 0xf6, 0xde, 0x8e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x14, 0x34, 0x75, 0xd5, 0x95, 0xb5, 0xe5, 0xc5, 0x95, 0x35,
    0x75, 0xf4, 0xf5, 0xf5, 0xe4, 0xc4, 0x94, 0x34, 0x74, 0xd5, 0x95, 0xb4, 0xe5, 0xc5, 0x95, 0x35,
    0x75, 0xd5, 0x95, 0xb5, 0xe4, 0xc4, 0x95, 0x35, 0x75, 0xd5, 0x95, 0xb5, 0xe5, 0xcd, 0x98, 0x31,
    0x61, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x01, 0x81, 0x80, 0x80, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00,
    0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0x60, 0x30, 0x18, 0x1c, 0x1e, 0x1e, 0x0e,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0xff, 0x03, 0x03, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00,
    0x00, 0x01, 0x03, 0xff, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0xa0, 0xa0,
    0xa0, 0xa0, 0x20, 0x20, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30,
    0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0f, 0x18, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x63, 0x67, 0x6d, 0x6d, 0x6d, 0x6d,
    0x7d, 0x78, 0x70, 0x00, 0x61, 0x63, 0x67, 0x6e, 0x7c, 0x7c, 0x6e, 0x67, 0x03, 0x00, 0x7f, 0x7f,
    0x01, 0x03, 0x07, 0x0e, 0x7f, 0x7f, 0x01, 0x01, 0x03, 0x07, 0x0e, 0x7c, 0x78, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
