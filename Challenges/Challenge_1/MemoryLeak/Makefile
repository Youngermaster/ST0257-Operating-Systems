CC=gcc
CFLAGS=-g -Wall
EXE=memory_leak

all: $(EXE)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXE)

