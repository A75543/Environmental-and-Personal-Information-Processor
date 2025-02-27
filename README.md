# E-P.I.P. - Environmental and Personal Information Processor

## Overview
E-P.I.P. is a safety device designed for hazardous environments, integrating multiple sensors to monitor air quality, temperature, humidity, GPS location, and vitals. The system alerts users to unsafe conditions and logs critical data for analysis.

## Features
- **Air Quality Monitoring** (MQ135 Sensor)
- **Temperature & Humidity Sensing** (DHT22)
- **GPS Location Tracking** (NEO-6M)
- **Vitals Monitoring** (MAX30102)
- **Data Storage** (MicroSD Card)
- **LCD Display** (QD3501 / ILI9486)
- **Power Supply** (7.4V Battery with Regulators)

## System Design
The device is built around an **ATmega2560-16AU** microcontroller, handling real-time data processing and sensor integration.

## Repository Structure
- `/docs/` - Documentation, schematics, and reports
- `/hardware/` - PCB layouts, BOM, and circuit designs
- `/firmware/` - Microcontroller code and sensor drivers
- `/software/` - UI, data logging, and display functions
- `/assets/` - Images, diagrams, and references

## Getting Started
1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/E-PIP.git
