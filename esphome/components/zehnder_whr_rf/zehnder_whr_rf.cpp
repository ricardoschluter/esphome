#include "esphome.h"

class ZehnderWhrRF : public PollingComponent, public Sensor {
 public:
  void setup() override {
    // This will be called by App.setup()
  }
  void update() override {
    // This will be called by App.loop()
  }
};