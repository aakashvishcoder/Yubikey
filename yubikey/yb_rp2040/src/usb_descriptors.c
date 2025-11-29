#include "usb_descriptors.h"

const uint8_t u2f_hid_report_desc[] = {
    TUD_HID_REPORT_DESC_GENERIC_INOUT(U2F_HID_REPORT_SIZE)
};

const uint16_t u2f_hid_report_desc_len = sizeof(u2f_hid_report_desc);

uint8_t const * tud_hid_descriptor_report_cb(void) {
    return u2f_hid_report_desc;
}

uint16_t tud_hid_descriptor_report_len_cb(void) {
    return u2f_hid_report_desc_len;
}
