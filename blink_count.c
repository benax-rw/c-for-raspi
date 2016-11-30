/*

This program will count as it blinks

*/

#include <stdio.h>
#include <wiringPi.h>

#define LED 7

int main (void)
{

printf("Blink Counter:\n");

wiringPiSetup();
pinMode(LED, OUTPUT);

int i=1;

while (i<=10){

printf("%d\n", i);

digitalWrite (LED, HIGH);
delay (500);


digitalWrite (LED, LOW);
delay (500);

i++;

}

return 0;


}