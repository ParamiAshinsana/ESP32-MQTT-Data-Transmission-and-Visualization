// config.h

#ifndef CONFIG_H
#define CONFIG_H

// Wi-Fi Credentials
#define WIFI_SSID "your_wifi_ssid"
#define WIFI_PASSWORD "your_wifi_password"

// MQTT Broker Settings
#define MQTT_BROKER "192.168.1.100"  // EMQX Docker IP or hostname
#define MQTT_PORT 1883
#define MQTT_TOPIC "esp32/sensor/data"
#define CLIENT_ID "ESP32Client"

#endif
