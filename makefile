#
# Thank You makefile
#

CC=gcc

TARGETS=thankyou

all: $(TARGETS)

thankyou: main.c students.o students.h
	$(CC) -o $@ $<

clean:
	rm -f $(TARGETS) *.o
