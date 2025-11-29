cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)

project(yb_rp2040 C CXX ASM)
pico_sdk_init()

add_executable(yb_rp2040
    src/main.c
    src/usb_descriptors.c
    src/u2f_transport.c
    src/atecc_driver.c
)

target_include_directories(yb_rp2040 PRIVATE ${CMAKE_CURRENT_LIST_DIR}/include)

target_link_libraries(yb_rp2040
    pico_stdlib
    hardware_i2c
    tinyusb_device
    tinyusb_board
)

pico_enable_stdio_usb(yb_rp2040 1)
pico_enable_stdio_uart(yb_rp2040 0)

pico_add_extra_outputs(yb_rp2040)