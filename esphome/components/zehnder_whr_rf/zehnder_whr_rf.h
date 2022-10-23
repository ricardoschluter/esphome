#pragma once

#include "esphome/core/log.h"
#include "esphome/core/component.h"
#include "esphome/core/hal.h"
#include "esphome/components/sensor/sensor.h"

namespace esphome {
namespace zehnder_whr_rf {
class ZehnderWhrRfSensor : public PollingComponent {
 public:
  ZehnderWhrRfSensor() : PollingComponent(10000) {}

  void setup() override {
    ESP_LOGD("setup exectuted");
  }
  void update() override { 
    ESP_LOGD("updating");
  }
};
}  // namespace zehnder_whr_rf
}  // namespace esphome