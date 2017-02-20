CC = gcc
CFLAGS = -Wall -std=c99
LIBCHECK = `pkg-config --cflags --libs check`

all: matrix.o

test: test-build
	./matrix_test

test-build: matrix.o matrix_test.o
	$(CC) $(CFLAGS) $^ $(LIBCHECK) -o matrix_test

%.o : %.c
	$(CC) $(CFLAGS) $(LIBCHECK) -c $< -o $@

.PHONY: clean
clean:
	rm -rf *.o *.h.gch matrix_test
