# ESP32 MQTT Data Transmission and Visualization
This project demonstrates real-time sensor data transmission from an ESP32 microcontroller using the MQTT protocol.
It uses EMQX as the MQTT broker, Node-RED for data visualization, and Docker for easy containerized deployment.

## 📦 Project Structure
graphql
Copy
Edit
ESP32-MQTT-Data-Visualization/</br>
│
├── esp32/</br>
│   ├── esp32_mqtt.ino         # Main ESP32 code</br>
│   ├── config.h               # Wi-Fi and MQTT configurations</br>
│
├── docker/</br>
│   ├── docker-compose.yml     # Docker setup for EMQX and Node-RED</br>
│
├── nodered/</br>
│   └── nodered_flow.json      # Node-RED flow (import into Node-RED)</br>
│
├── README.md                  # Project overview</br>
└── .gitignore                 # Git ignore rules</br></br>

    
## 🚀 Technologies Used</br>
ESP32 — Microcontroller for sending sensor data

MQTT — Lightweight messaging protocol

EMQX — High-performance MQTT broker

Node-RED — Low-code platform for wiring together IoT devices

Docker — Containerized deployment for EMQX and Node-RED

## 🛠️ How to Set Up
#### 1. ESP32 Microcontroller
Open esp32/esp32_mqtt.ino in Arduino IDE.

Update config.h with your Wi-Fi SSID, password, and broker IP address.

Install required Arduino libraries:

WiFi (built-in for ESP32 boards)

PubSubClient (Manage Libraries -> Install)

Upload the sketch to your ESP32.

#### 2. Set Up Docker (EMQX + Node-RED)
Make sure Docker and Docker Compose are installed.

Navigate to the docker/ directory.

Run the following command to start the containers:

bash
Copy
Edit
docker-compose up -d
EMQX Broker will run on:

MQTT Port: 1883

EMQX Dashboard: http://localhost:18083

Node-RED will be available at:

http://localhost:1880

#### 3. Node-RED Flow
Open Node-RED (http://localhost:1880).

Import the flow from nodered/nodered_flow.json.

Deploy the flow.

You should now see real-time temperature and humidity readings on the dashboard!

## 📊 Sample Dashboard View
(You can add screenshots here later!)

## 📌 Notes
The ESP32 currently sends simulated random sensor data.

You can easily connect real sensors (like DHT11/DHT22) to replace the dummy values.

