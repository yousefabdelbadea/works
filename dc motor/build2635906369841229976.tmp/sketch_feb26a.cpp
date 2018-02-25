#line 1 "sketch_feb26a.ino"
#include "Arduino.h"
void setup();
void loop();
#line 1
int dir1=13;
int dir2=12;

void setup()
{
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
}
void loop()
{
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);
delay(1000);
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
delay(1000);


}

