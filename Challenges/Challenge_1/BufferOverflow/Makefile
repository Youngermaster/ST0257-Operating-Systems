CC=gcc
CFLAGS=-g -Wall
EXE=buffer_overflow
REXE=avoid_memory_leaks

all: $(EXE)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXE)

rust:
	rustc $(REXE).rs

cleanRust:
	rm -rf *.o $(REXE)