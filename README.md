# GPS Data Transmission from STM32 to ESP8266 via UART and Blynk

## Overview

This project demonstrates how to interface a GPS module (NEO-6M) with an STM32 microcontroller to obtain GPS data, transmit it to an ESP8266 board via UART communication, and upload the data to the Blynk IoT platform for visualization and further processing.

## Table of Contents

- [Components](#components)
- [Dependencies](#dependencies)
- [Hardware Setup](#hardware-setup)
- [Software Setup](#software-setup)
- [Usage](#usage)
- [Contributing](#contributing)

## Components

- STM32 microcontroller (e.g., STM32F103C8T6)
- GPS module NEO-6M
- ESP8266 board (e.g., NodeMCU)
- Blynk IoT platform

## Dependencies

- STM32CubeMX (for STM32 configuration)
- Arduino IDE (for ESP8266 programming)
- Blynk library for Arduino

## Hardware Setup

1. Connect the GPS module NEO-6M to the STM32 microcontroller using UART communication.
2. Connect the STM32 microcontroller to the ESP8266 board via UART communication.
3. Power up the components as per their voltage requirements.

## Software Setup

1. Configure the STM32 microcontroller using STM32CubeMX to enable UART communication with the GPS module.
2. Refer Neo_6M_F0_Test for the STM32 microcontroller to read GPS data and transmit it over UART. 
3. Refer Neo_6M_F0_Test/ESP8266code for the ESP8266 board to receive GPS data from UART and upload it to Blynk using the Blynk library.

## Usage
1. Open the project in your STM32 CubeIDE or any development environment.
2. Connect the GPS module to the STM32 microcontroller.
3. Build and flash the project to your STM32 board.
4. Connect STM32 to ESP8266 board and flsh the given code.
5. Open blynk app and setup dashboard as per need and create V0 and V1 virtual pins to hold values.

## Contributing
If you would like to contribute to this project, feel free to fork the repository and submit a pull request.
