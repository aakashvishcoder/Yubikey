#pragma once
#include <tusb.h>

#define U2F_HID_REPORT_SIZE 64

extern const uint8_t u2f_hid_report_desc[];
extern const uint16_t u2f_hid_report_desc_len;