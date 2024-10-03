

# Room Temperature Controller

> **Note:** This documentation is still under construction.

<img src="assets\underconstruction.png" alt="alt text" width="500" style="height: 80;">

Table of Contents

  - [The Idea](#the-idea)
  - [Current Room Temperature Controller](#current-room-temperature-controller)
  - [Preliminary thoughts](#preliminary-thoughts)
      - [Hardware components](#hardware-components)
        - [Sensors](#sensors)
          - [Kind of sensor connection](#kind-of-sensor-connection)
          - [Temperature and Humidity Sensor](#temperature-and-humidity-sensor)
          - [CO2 Sensor](#co2-sensor)
          - [Brightness Sensor](#brightness-sensor)
        - [Display](#display)
        - [Relay](#relay)
        - [Buttons](#buttons)
        - [Controller](#controller)
        - [Power Supply](#power-supply)


## The Idea

The idea of this project is to develop a replacement for the existing mechanical room temperature controller. 
However, the new room temperature controller should be electronic and have the same function as the existing room temperature controller.

Additionally, the room temperature controller should have the following features:
- Adjustable temperature via display
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

## Preliminary thoughts

### Hardware components

#### Sensors

##### Kind of sensor connection

It exists different kind of sensors, which can be connected to the ESP32. 

Analog sensors can be connected via the ADC (Analog Digital Converter) pins. Digital sensors can be connected via the I2C or SPI interface.

The advantage of analog sensors is that they can be connected to any analog pin. The disadvantage is that only one sensor can be connected to one pin.

The advantage of digital sensors is that they can be connected to the same bus. This means that multiple sensors can be connected to the same bus. The disadvantage is that the sensors need an address to be addressed. This means that multiple sensors of the same type can be connected to the same bus, but they need to have different addresses.

In this project, i will use digital sensors, because of easier wiring and the possibility to connect multiple sensors to the same bus.

##### Temperature and Humidity Sensor

For measuring the temperature and humidity, the DHT20 sensor from the company ASAIR will be used. The sensor is connected via I2C. The sensor has a measurement range of -40 to 80 degrees Celsius and 0 to 100% relative humidity.

<img src="assets\DHT20.png" alt="alt text" width="300">

##### CO2 Sensor

For measuring the CO2 concentration, the CCS811 sensor will be used. The sensor is connected via I2C. The sensor has a measurement range of 400 to 8192 ppm. The sensor has an internal algorithm for calculating the CO2 concentration. The sensor also measures the TVOC (Total Volatile Organic Compounds) concentration. More information about the sensor can be found in the local documentation or on the website of the manufacturer.

<img src="assets\CCS811.png" alt="alt text" width="300">

Links:
- local documentation: [CCS811](assets\AZ363_D_14-10_DE_B0BN8V9PJV_a9e14072-22d6-4df1-897d-fb8e85ca8aa0.pdf)
- https://www.az-delivery.de/products/co2-gassensor-ccs811?variant=43961284002059

##### Brightness Sensor

For measuring the brightness, the BH1750 sensor will be used. This sensor is implemented on an extensionboard for AZ-ONEBoard from the company AZ-Delivery. The sensor is connected via I2C. The sensor has a measurement range of 0 to 65535 Lux. The sensor has a resolution of 1 Lux.

<img src="assets\BH1750.png" alt="alt text" width="300">


#### Display

As a display, a 2.4 inch TFT touch display will be used. The display is connected via SPI. The display has a resolution of 320x240 pixels. The display has a touch function, which can also be used for controlling the room temperature controller.


#### Relay

#### Buttons

#### Controller

#### Power Supply









