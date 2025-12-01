# Yubikey

My own version of a YubiKey using an RP2040 microcontroller!

# Features:
- Programmable LED(s)
- USBC Receptacle
- RP2040 Microcontroller
- Stores Password (through firmware)

# How to Use

The switches on the PCB can be used to boot up and reset the microcontroller, and the firmware can be modified to your liking!

# Images:

<img width="1163" height="799" alt="Screenshot 2025-11-29 155637" src="https://github.com/user-attachments/assets/2dc40258-589e-431e-a660-bafef7ef72ad" />
<img width="372" height="847" alt="Screenshot 2025-11-29 160400" src="https://github.com/user-attachments/assets/e8195545-48eb-49e9-a9d2-62cb9e6f09cd" />
<img width="355" height="840" alt="Screenshot 2025-11-29 160411" src="https://github.com/user-attachments/assets/5317a4df-14ac-4094-bdd7-2213bfdf4003" />
<img width="246" height="596" alt="Screenshot 2025-11-29 160801" src="https://github.com/user-attachments/assets/1866c613-2545-4f11-a9a8-220bec1a25bd" />
<img width="263" height="593" alt="Screenshot 2025-11-29 160807" src="https://github.com/user-attachments/assets/74c2f03b-6d80-4dad-8efa-517f7b95f0de" />

# Build of Materials (BOM)
| Reference        | Qty | Value     | DNP | Exclude from BOM | Exclude from Board | Footprint                                                                 | Datasheet                                                                 | Price (USD ea.) | Total (USD) |
|------------------|-----|-----------|-----|------------------|--------------------|---------------------------------------------------------------------------|---------------------------------------------------------------------------|-----------------|-------------|
| C1,C6            | 2   | 1uF       |     |                  |                    | Capacitor_SMD:C_0402_1005Metric                                           | ~                                                                         | 0.04            | 0.08        |
| C2,C3,C4,C9      | 4   | 100nF     |     |                  |                    | Capacitor_SMD:C_0402_1005Metric                                           | ~                                                                         | 0.10            | 0.40        |
| C5               | 1   | 10uF      |     |                  |                    | Capacitor_SMD:C_0402_1005Metric                                           | ~                                                                         | 0.36            | 0.36        |
| C7,C8            | 2   | 15pF      |     |                  |                    | Capacitor_SMD:C_0402_1005Metric                                           | ~                                                                         | 0.08            | 0.16        |
| D1               | 1   | LED       |     |                  |                    | Capacitor_SMD:C_0402_1005Metric                                           | ~                                                                         | 0.01            | 0.01        |
| J1               | 1   | USB_C_Receptacle_USB2.0_16P | |        |                    | Connector_USB:USB_C_Receptacle_GCT_USB4105-xx-A_16P_TopMnt_Horizontal     | [USB Type-C Spec](https://www.usb.org/sites/default/files/documents/usb_type-c.zip) | 1.50            | 1.50        |
| R1,R2            | 2   | 5.1k      |     |                  |                    | Inductor_SMD:L_0402_1005Metric                                            | ~                                                                         | 0.02            | 0.04        |
| R3               | 1   | 470       |     |                  |                    | Inductor_SMD:L_0402_1005Metric                                            | ~                                                                         | 0.07            | 0.07        |
| R4,R5            | 2   | 4.7k      |     |                  |                    | Inductor_SMD:L_0402_1005Metric                                            | ~                                                                         | 0.02            | 0.04        |
| R6               | 1   | 10k       |     |                  |                    | Inductor_SMD:L_0402_1005Metric                                            | ~                                                                         | 0.11            | 0.11        |
| R7,R8            | 2   | 27        |     |                  |                    | Inductor_SMD:L_0402_1005Metric                                            | ~                                                                         | 0.09            | 0.18        |
| R9               | 1   | 1k        |     |                  |                    | Inductor_SMD:L_0402_1005Metric                                            | ~                                                                         | 0.30            | 0.30        |
| SW1              | 1   | BOOTSEC   |     |                  |                    | Button_Switch_SMD:SW_Tactile_SPST_NO_Straight_CK_PTS636Sx25SMTRLFS        | ~                                                                         | 0.24            | 0.24        |
| SW2              | 1   | RESET     |     |                  |                    | Button_Switch_SMD:SW_Tactile_SPST_NO_Straight_CK_PTS636Sx25SMTRLFS        | ~                                                                         | 0.24            | 0.24        |
| U1               | 1   | ATECC608A-SSHDA | |                 |                    | Package_SO:SOIC-8_3.9x4.9mm_P1.27mm                                       | [ATECC608A Datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/ATECC608A-CryptoAuthentication-Device-Summary-Data-Sheet-DS40001977B.pdf) | 1.00            | 1.00        |
| U2               | 1   | RP2040    |     |                  |                    | Package_DFN_QFN:QFN-56-1EP_7x7mm_P0.4mm_EP3.2x3.2mm                       | [RP2040 Datasheet](https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf) | 2.28            | 2.28        |
| U3               | 1   | W25Q128JVS | |                  |                    | Package_SO:SOIC-8_5.3x5.3mm_P1.27mm                                       | [Winbond Datasheet](https://www.winbond.com/resource-files/w25q128jv_dtr%20revc%2003272018%20plus.pdf) | 1.85            | 1.85        |
| Y1               | 1   | 12MHz     |     |                  |                    | Crystal:Crystal_SMD_Abracon_ABM8G-4Pin_3.2x2.5mm                          | ~                                                                         | 0.40            | 0.40        |
