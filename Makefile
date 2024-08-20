CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

onetimepad: one-time-pad/onetimepad.c one-time-pad/test.c
	gcc $(CFLAGS) one-time-pad/onetimepad.c one-time-pad/test.c -o test-onetimepad $(LDFLAGS)

clean:
	rm -f test-onetimepad