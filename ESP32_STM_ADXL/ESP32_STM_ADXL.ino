#include <HardwareSerial.h>

HardwareSerial SeriralPort(2);

void setup() {
  SeriralPort.begin(115200,SERIAL_8N1,16,17);
  Serial.begin(9600);
}
void loop() {
  if(SeriralPort.available())
  {
      String Buffer = SeriralPort.readString();
      Serial.println(Buffer);
      Buffer = '\t';
  }
}
