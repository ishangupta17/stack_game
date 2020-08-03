#include <Servo.h>

Servo servo1;

void setup()
{
  servo1.attach(9);
    servo1.write(0);
  delay(5000);
  servo1.write(35);
  delay(200);
    servo1.write(0);
  delay(750);

}

void loop()
{
  servo1.write(35);  //1
  delay(200);
    servo1.write(0);
  delay(600);

}
