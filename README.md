# CO-Gas-Detector-using-ESP32
## 📖 Project Overview

This project is an IoT-based Carbon Monoxide (CO) Gas Detection System designed to protect workers involved in waste disposal and burning activities from harmful CO exposure.

### The system continuously monitors:

- 🌫️ Carbon Monoxide levels

- 🌡️ Temperature

- 💧 Humidity

### If CO concentration crosses a safe threshold, the system:

- 🚨 Activates a buzzer alert

- 📟 Displays warning message on LCD

- 📡 Can be extended to send IoT alerts

## 🚨 Problem Statement

Workers involved in disposing and burning community waste are at high risk of carbon monoxide (CO) exposure due to incomplete combustion of organic and synthetic materials.

### Since CO is:

- Invisible

- Odorless

- Tasteless

It cannot be detected without specialized equipment, making it a silent health hazard.

### Prolonged exposure can cause:

- Headaches

- Dizziness

- Nausea

- Loss of consciousness

- Death in extreme cases

Most waste disposal sites lack real-time monitoring systems, leaving workers unaware of dangerous CO levels until symptoms appear.

This project provides a low-cost, real-time CO monitoring and alert system to enhance worker safety.

## 🧠 Components Used
### ESP32 Dev Module

- Acts as the brain of the system

- Reads sensor data

- Processes logic

- Controls alerts

- Enables WiFi/Bluetooth features

### MQ-7

- Detects Carbon Monoxide gas concentration

- Provides analog output proportional to CO levels

- Uses SnO₂ sensing layer

 ### DHT11

- Measures temperature and humidity

- Helps monitor environmental conditions

### 16x2 I2C LCD Display

- Displays real-time CO and temperature values

- Shows warning messages

### Buzzer

- Produces sound alerts during dangerous CO levels

## ⚙️ Working Principle

- MQ-7 detects CO gas and outputs analog voltage.

- ESP32 reads the analog value (0–4095 range).

### If CO level exceeds threshold:

- Buzzer turns ON

- Warning message is displayed

### LCD continuously shows:

- CO value

- Temperature

- Humidity

## 🔌 Pin Configuration
1) Component	ESP32 Pin

2) DHT11 Data	GPIO 4

3) MQ-7 Analog	GPIO 34

4) Buzzer	GPIO 25

5) LCD SDA	GPIO 21

6) LCD SCL	GPIO 22

## 📊 Features

✔ Real-time CO Monitoring

✔ Temperature & Humidity Display

✔ Automatic Sound Alert System

✔ Low-cost Safety Device

✔ Expandable to IoT Cloud Monitoring

✔ Suitable for Waste Burning Areas

## 🚀 Future Enhancements

- 📡 Send alerts via WiFi (IoT Dashboard)

- 📱 Mobile App Monitoring

- 📊 Display CO in PPM instead of raw value

- ☁️ Cloud data logging

- 🔋 Portable battery-powered version

## 🎯 Applications

- Waste Disposal Sites

- Industrial Areas

- Parking Garages

- Coal Mines

- Residential Safety Systems
