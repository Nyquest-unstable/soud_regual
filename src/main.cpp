#include <Arduino.h>

#include "Keyboard.h" //keyboard library

void setup()
{
  Serial.begin(9600);
  
  // put your setup code here, to run once:
  pinMode(WIO_KEY_A, INPUT);
  pinMode(WIO_KEY_B, INPUT);
  pinMode(WIO_KEY_C, INPUT);

  Keyboard.begin(); // start keyboard communication

}

void loop()
{
  if (digitalRead(WIO_KEY_A) == LOW)
  {                      // detect button press
    Keyboard.write(KEY_MEDIA_VOLUME_UP, 2); // single key is pressed (character)
  }
  delay(200);
  // put your main code here, to run repeatedly:
}