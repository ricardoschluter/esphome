import esphome.codegen as cg
import esphome.config_validation as cv
from esphome import pins
from esphome.components import sensor
from esphome.cpp_helpers import gpio_pin_expression

CONF_MY_REQUIRED_KEY = 'my_required_key'
CONF_MY_OPTIONAL_KEY = 'my_optional_key'

zehnder_whr_rf_ns = cg.esphome_ns.namespace("zehnder_whr_rf")
ZehnderWhrRfSensor = zehnder_whr_rf_ns.class_("ZehnderWhrRfSensor", cg.PollingComponent)

CONFIG_SCHEMA = cv.Schema({
  cv.GenerateID(): cv.declare_id(ZehnderWhrRfSensor),
  cv.Required(CONF_MY_REQUIRED_KEY): cv.string,
  cv.Optional(CONF_MY_OPTIONAL_KEY, default=10): cv.int_,
}).extend(cv.polling_component_schema("60s"))