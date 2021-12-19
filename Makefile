
all: trig

trig: sine.c cos.c main.c
	gcc sine.c cos.c main.c -o trig -lm

clean:
	rm trig