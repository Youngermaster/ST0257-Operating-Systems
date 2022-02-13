CC=gcc
CFLAGS=-g -Wall
EXE=buffer_overflow

all: $(EXE)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXE)