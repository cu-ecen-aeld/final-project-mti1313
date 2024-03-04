#include <stdio.h>
#include <pigpio.h>

#define PIR_PIN 20
#define REED_PIN 16
#define BUZZ_PIN 21


int main()	{

	gpioSetMode(PIR_PIN, PI_INPUT);
	gpioSetMode(REED_PIN, PI_INPUT);
	gpioSetMode(LED_PIN, PI_OUTPUT);

	while (1)	{

		//Read input values
		int pir_value = gpioRead(PIT_PIN);
		int reed_value = gpioRead(REED_PIN);

		//If both sensors read LOW then activate buzzer
		if(pir_value == 0 && reed_value == 0)	{
			gpioWrite(BUZZ_PIN, 1);
		} else	{
			gpioWrite(BUZZ_PIN, 0);

		}

	}

}
