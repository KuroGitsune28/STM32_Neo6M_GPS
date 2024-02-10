# STM32-ESP32 Communication Project

This project demonstrates communication between an STM32 microcontroller and an ESP32 using UART. The STM32 sends ADXL accelerometer readings, and the ESP32 receives and processes the data.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Setup](#setup)
- [Communication Protocol](#communication-protocol)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)

## Overview

This project showcases communication between an STM32 microcontroller and an ESP32 using UART. The STM32 sends ADXL accelerometer readings, and the ESP32 receives and processes the data. It aims to demonstrate a basic IoT communication scenario between embedded systems.

## Features

- UART communication between STM32 and ESP32.
- Sending and receiving ADXL accelerometer readings.

## Hardware Requirements

- STM32 microcontroller (e.g., STM32F407G)
- ESP32 microcontroller
- ADXL accelerometer sensor
- Connecting wires

## Software Requirements

- STM32CubeIDE or other STM32 development environment
- Arduino IDE for ESP32
- Appropriate drivers for the accelerometer

## Setup

1. Clone the repository:

   ```bash
   git clone https://github.com/KuroGitsune28/STM32_ADXL-345.git

   Open the STM32 project in your development environment.

2. Configure and upload the code to your STM32 board.
3. Open the ESP32 project in the Arduino IDE.
4. Configure and upload the code to your ESP32 board.
5. Connect the STM32, ESP32, and ADXL as per the hardware requirements.

## Communication Protocol
1. Ensure the baud rates on both STM32 and ESP32 match.
2. Data format: 8 data bits, no parity, 1 stop bit (8N1).
3. Synchronization using start delimiters (e.g., "Y axis") to indicate the beginning of a data packet.

## Troubleshooting
1. If receiving corrupted or unexpected data, check baud rates, data format, and synchronization.
2. Implement error handling mechanisms to handle communication errors.
3. Ensure both devices interpret binary data correctly if applicable.

## Contributing
If you would like to contribute to this project, feel free to fork the repository and submit a pull request.
