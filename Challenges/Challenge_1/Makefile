CC=gcc
CFLAGS=-g -Wall
EXE=stack_overflow

all: $(EXE)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXE)