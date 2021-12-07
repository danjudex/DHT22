/*
 * DHT22 for Raspberry Pi with WiringPi
 * Original Author: Hyun Wook Choi
 * Original Version: 0.1.0
 * Forked from: https://github.com/ccoong7/DHT22
 */

#include <stdio.h>
#include <wiringPi.h>

// static const unsigned short signal = 7;

int main(void)
{
	// GPIO Initialization
	if (wiringPiSetupGpio() == -1)
	{
		printf("[x_x] GPIO Initialization FAILED.\n");
		return -1;
	}

	// pinMode(2, OUTPUT);

	return 0;
}
