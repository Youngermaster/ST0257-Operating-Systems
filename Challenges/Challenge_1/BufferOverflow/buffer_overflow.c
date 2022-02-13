#include <stdio.h>

int main(int argc, char const *argv[]) {
    char *s = "hello world";
    char c = s[20];
    printf("%p - %p -> %d\n", &c, __builtin_frame_address(0), c);
    printf("%p - %p -> %s\n", &s, __builtin_frame_address(0), s);
    printf("%p - %p -> %d\n", &s[20], __builtin_frame_address(0), s[20]);
    return 0;
}
