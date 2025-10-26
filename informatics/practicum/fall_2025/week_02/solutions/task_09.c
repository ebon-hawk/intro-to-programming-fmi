#include <stdio.h>

int main() {
    unsigned char x = 254;

    printf("%u\n", x);

    x += 1;

    printf("%u\n", x);

    // Overflow
    x += 1;

    printf("%u\n", x);

    x += 1;

    printf("%u\n", x);

    return 0;
}