#pragma once
#include <stdint.h>
#include <stdbool.h>

bool atecc_init(void);
bool atecc_get_serial(uint8_t serial[9]);
bool atecc_gen_attestation_key(uint8_t pubkey[64]);
bool atecc_sign(uint8_t slot, const uint8_t *msg32, uint8_t sig64[64]);
