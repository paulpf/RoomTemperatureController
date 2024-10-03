# Room Temperature Controller

## Table of Contents
1. [The Idea](#the-idea)
2. [Current Room Temperature Controller](#current-room-temperature-controller)
3. [Realization](#realization)

## The Idea

The idea of this project is to develop a replacement for the existing mechanical room temperature controller. 
However, the new room temperature controller should be electronic and have the same function as the existing room temperature controller.
Additionally, the room temperature controller should have the following features:
- Adjustable temperature via two buttons
- Automatic temperature control
- Display for showing information
- Network connectivity (WiFi)
- Web server for controlling the room temperature controller
- MQTT for communication with other devices
- Switching the valve via an SSR (Solid State Relay)
- Additional sensors for measuring the following values:
  - Temperature
  - Humidity
  - CO2 concentration
  - Air pressure
  - Brightness

The software should be written in C++ and run on an ESP32. Additionally, a 3D-printed case should be used.

## Current Room Temperature Controller

The current room temperature controller is a mechanical device from the company Halmburger, model RTR-A10.

<img src="assets\20241003_120139.jpg" alt="alt text" width="500" style="height: auto;">

<img src="assets\20241003_115052.jpg" alt="alt text" width="500" style="height: auto;">

<img src="assets\20241003_115109.jpg" alt="alt text" width="500" style="height: auto;">

The instruction manual can be found under the folder assets:
- [Instruction Manual](assets\Anleitung-RTR-A10-und-RTR-A13.pdf)
- [Circuit diagram](assets\Schaltplan-Temperaturregler-Fussbodenheizung.pdf)

## Realization


