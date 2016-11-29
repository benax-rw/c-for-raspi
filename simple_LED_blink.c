/*

This program will blink an LED with a delay of a half second (500ms)

*/

#include <stdio.h>
#include <wiringPi.h>

#define LED 7

int main (void)
{

printf("Raspberry Pi blink");

wiringPiSetup();
pinMode(LED, OUTPUT);

for (;;){

printf("LED ON");
digitalWrite (LED, HIGH);
delay (500);

printf("LED OFF");
digitalWrite (LED, LOW);
delay (500);

}

return 0;


}