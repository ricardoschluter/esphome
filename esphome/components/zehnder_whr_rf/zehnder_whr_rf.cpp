#include "zehnder_whr_rf.h"
#include "esphome/core/log.h"

namespace esphome {
namespace zehnder_whr_rf {
class ZehnderWhrRF : public PollingComponent, public Sensor {
 public:
  void setup() override {
    // This will be called by App.setup()
  }
  void update() override {
    // This will be called by App.loop()
  }
};
}  // namespace zehnder_whr_rf
}  // namespace esphome