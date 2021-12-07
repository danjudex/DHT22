/*
 * DHT22 for Raspberry Pi with WiringPi
 * Original Author: Hyun Wook Choi
 * Original Version: 0.1.0
 * Forked from: https://github.com/ccoong7/DHT22
 */

#include <stdio.h>
#include <wiringPi.h>

// #define NUM 20 //26pin

// static const unsigned short signal = 7;

int main(void)
{
	wiringPiSetup();

	pinMode(2, INPUT);

	return 0;
}
