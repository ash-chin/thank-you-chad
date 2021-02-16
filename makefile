#
# Thank You makefile
#
sources=$(wildcard *.c)
objects=$(addsuffix .o, $(basename $(sources)))
CC=gcc

TARGET=thankyou

$(TARGET): $(objects)
	$(CC) -o $(TARGET) $(objects)
%.o : %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(TARGET) $(objects)
