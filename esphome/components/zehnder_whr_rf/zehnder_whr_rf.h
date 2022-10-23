#pragma once

#include "component.h"
#include "esphome/core/log.h"

namespace esphome {
namespace zehnder_whr_rf {
class ZehnderWhrRF : public PollingComponent {
 public:
  ZehnderWhrRF() : PollingComponent(10000) {}

  void setup() override {
    ESP_LOGD("setup exectuted");
  }
  void update() override { 
    ESP_LOGD("updating");
  }
};
}  // namespace zehnder_whr_rf
}  // namespace esphome