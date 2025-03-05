CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
OBJ = main.o syntax.o

gurkpad: $(OBJ)
	$(CC) $(CFLAGS) -o gurkpad $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o gurkpad
