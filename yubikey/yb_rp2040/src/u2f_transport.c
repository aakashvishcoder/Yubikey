#include "u2f_transport.h"
#include "tusb.h"
#include <string.h>

#define U2F_PACKET_SIZE 64

static uint8_t tx_buf[U2F_PACKET_SIZE];

void u2f_transport_init(void) {
    memset(tx_buf, 0, sizeof(tx_buf));
}

void u2f_transport_handle_rx(const uint8_t *buffer, uint16_t len) {
    uint16_t n = len > U2F_PACKET_SIZE ? U2F_PACKET_SIZE : len;
    memcpy(tx_buf, buffer, n);

    if (tud_hid_ready()) {
        tud_hid_report(0, tx_buf, U2F_PACKET_SIZE);
    }
}

void tud_hid_set_report_cb(uint8_t report_id, uint8_t report_type,
                            uint8_t const* buffer, uint16_t bufsize) {
    u2f_transport_handle_rx(buffer, bufsize);
}

uint16_t tud_hid_get_report_cb(uint8_t report_id, uint8_t report_type,
                                uint8_t const* buffer, uint16_t bufsize) {
    uint16_t n = reqlen > U2F_PACKET_SIZE ? U2F_PACKET_SIZE : reqlen;
    memcpy(buffer, tx_buf, n);
    return n;
}