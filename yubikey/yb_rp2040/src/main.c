#include "pico/stdlib.h"
#include "tusb.h"
#include "atecc_driver.h"
#include "u2f_transport.h"

static void usb_init(void) {
    tusb_init();
}

int main() {
    stdio_init_all();
    usb_init();
    u2f_transport_init();

    if (!atecc_init()) {
        printf("ATECC608A init failed");
        gpio_init(PICO_DEFAULT_LED_PIN);
        gpio_set_dir(PICO_DEFAULT_LED_PIN, true);
        while (true) {
            gpio_put(PICO_DEFAULT_LED_PIN, 1);
            sleep_ms(200);
            gpio_put(PICO_DEFAULT_LED_PIN, 0);
            sleep_ms(200);
        }
    }

    while (true) {
        tud_task();
        tight_loop_contents();
    }
}