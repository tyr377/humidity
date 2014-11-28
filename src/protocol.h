
uint16_t MAGIC_NUMBER = 0x2410;
uint32_t CURRENT_VERSION = 1;

uint32_t TYPE_DHT22 = 1;


struct header {
  uint32_t version;
  uint32_t type;
  uint32_t size;
  uint32_t check;
};

/* container for sensor DHT22 (sensor for temperature and humidity) */
struct container_dht22 {
  float humidity;
  float temperature;
};
