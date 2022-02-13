CC=gcc
CFLAGS=-g -Wall
EXE=read_only_memory

all: $(EXE)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXE)