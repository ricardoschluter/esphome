#include "zehnder_whr_rf.h"
#include "esphome/core/log.h"

namespace esphome {
namespace zehnder_whr_rf {
class ZehnderWhrRF : public PollingComponent {
 public:
  void setup() override {
   ESP_LOGD("setup exectuted in cpp");
  }
  void update() override { 
    ESP_LOGD("updating in cpp");
  } // This will be called by App.setup()
};
}  // namespace zehnder_whr_rf
}  // namespace esphome