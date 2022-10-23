#pragma once

#include "component.h"
#include "sensor.h"
#include "esphome/core/log.h"

namespace esphome {
namespace zehnder_whr_rf {
class ZehnderWhrRF : public PollingComponent, public Sensor {
 Sensor *pressure_sensor = new Sensor();
 public:
  ZehnderWhrRF() : PollingComponent(60000) {}

  void setup() override {ESP_LOGW("setup");}
  void update() override { 
    int pressure =1000;
    pressure_sensor->publish_state(pressure / 100.0);
    ESP_LOGW("dededed");
  }
};
}  // namespace zehnder_whr_rf
}  // namespace esphome