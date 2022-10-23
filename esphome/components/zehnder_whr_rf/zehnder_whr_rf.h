#pragma once

#include "esphome/core/component.h"
#include "esphome/components/sensor/sensor.h"
#include "esphome/components/spi/spi.h"

namespace esphome {
namespace zehnder_whr_rf {
class ZehnderWhrRF : public PollingComponent {
 public:
  ZehnderWhrRF() : PollingComponent(60000) {}
  void setup() override {}
  void update() override { }
};
}  // namespace zehnder_whr_rf
}  // namespace esphome