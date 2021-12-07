t:
	cc -pthread -o bin/test src/test.c -lwiringPi -lcrypt -lm -lrt

d:
	gcc -pthread -o bin/dht22 dht22.c -lwiringPi -lcrypt -lm -lrt
