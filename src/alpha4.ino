#include <Adafruit_GFX_RK.h>
#include <Adafruit_LEDBackpack_RK.h>

SYSTEM_MODE(SEMI_AUTOMATIC);
Adafruit_AlphaNum4 alpha4 = Adafruit_AlphaNum4();

void setup() {
  Serial.begin(9600);
  alpha4.begin(0x70);
  alpha4.writeDigitAscii(0, 'A');
  alpha4.writeDigitAscii(1, 'D');
  alpha4.writeDigitAscii(2, 'A');
  alpha4.writeDigitAscii(3, 'M');
  alpha4.writeDisplay();
}

void loop() {

}