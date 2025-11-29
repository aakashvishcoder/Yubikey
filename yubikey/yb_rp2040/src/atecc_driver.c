#include "atecc_driver.h"
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include <string.h>

#define ATECC_I2C i2c0
#define ATECC_SDA_PIN 4
#define ATECC_SCL_PIN 5
#define ATECC_ADDR 0x60

static void i2c_init_atecc(void) {
    i2c_init(ATECC_I2C, 400 * 1000);
    gpio_set_function(ATECC_SDA_PIN, GPIO_FUNC_I2C);
    gpio_set_function(ATECC_SCL_PIN, GPIO_FUNC_I2C);
    gpio_pull_up(ATECC_SDA_PIN);
    gpio_pull_up(ATECC_SCL_PIN);
}

bool atecc_init(void) {
    i2c_init_atecc();
    sleep_ms(10);
    return true;
}

bool atecc_get_serial(uint8_t serial[9]) {
    memset(serial, 0, 9);
    return true;
}

bool atecc_get_attestation_key(uint8_t pubkey[64]) {
    memset(pubkey, 0, 64);
    return true;
}

bool atecc_sign(uint8_t slot, const uint8_t *msg32, uint8_t sig64[64]) {
    memset(sig64, 0, 64);
    return true;
}