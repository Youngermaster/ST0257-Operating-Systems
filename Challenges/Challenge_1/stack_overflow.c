#include <stdio.h>
int counter(int counter) {
    int anotherCounter = 17;
    printf("Counter function %p %p %p\n", &counter, &anotherCounter, __builtin_frame_address(0));
}

int main(int argc, char const *argv[]) {
    printf("This is a way to crash the program with a stack overflow\n");
    int i = 13;
    printf("Main function %p %p\n", &i, __builtin_frame_address(0));
    counter(18);
    return 0;
}
