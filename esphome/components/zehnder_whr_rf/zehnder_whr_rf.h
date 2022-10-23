#pragma once

#include "esphome.h"
#include "component.h"
#include "sensor.h"
#include "spi.h"

namespace esphome {
namespace zehnder_whr_rf {
class ZehnderWhrRF : public PollingComponent, public Sensor {
 Sensor *pressure_sensor = new Sensor();
 public:
  ZehnderWhrRF() : PollingComponent(60000) {}

  void setup() override {}
  void update() override { 
    int pressure =1000;
    pressure_sensor->publish_state(pressure / 100.0);
  }
};
}  // namespace zehnder_whr_rf
}  // namespace esphome