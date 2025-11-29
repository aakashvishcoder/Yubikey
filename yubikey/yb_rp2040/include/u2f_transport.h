#pragma once
#include <stdint.h>

void u2f_transport_init(void);
void u2f_transport_handle_rx(const uint8_t *buffer, uint16_t len);