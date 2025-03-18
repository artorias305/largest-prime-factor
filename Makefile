CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = prime_factor

all: $(TARGET)

$(TARGET): prime_factor.o
	$(CC) $(CFLAGS) -o $(TARGET) prime_factor.o

prime_factor.o: prime_factor.c
	$(CC) $(CFLAGS) -c prime_factor.c

clean:
	rm -f $(TARGET) *.o
