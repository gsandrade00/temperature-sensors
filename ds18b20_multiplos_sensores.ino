#include <OneWire.h>
#include <DallasTemperature.h>

OneWire barramento(D4);
DallasTemperature sensor(&barramento);

void setup()
{
   Serial.begin(115200);
   sensor.begin();
}

void loop()
{
  sensor.requestTemperatures();
  Serial.println(sensor.getTempCByIndex(0));
}
