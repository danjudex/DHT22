t:
	gcc -pthread -o bin/test src/test.c -lwiringPi -lcrypt -lm -lrt

st:
	gcc -pthread -o bin/signal_test test/signal_test.c -lwiringPi -lcrypt -lm -lrt
