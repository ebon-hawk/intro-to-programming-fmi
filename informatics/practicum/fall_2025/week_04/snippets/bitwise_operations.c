#include <stdint.h>
#include <stdio.h>

int main() {
    uint8_t a = 5; // 00000101
    uint8_t b = 3; // 00000011

    printf("a & b = %u\n", a & b);
    printf("a | b = %u\n", a | b);
    printf("a ^ b = %u\n", a ^ b);
    printf("~a = %u\n", (uint8_t)~a);
    printf("a << 1 = %u\n", a << 1);
    printf("a >> 1 = %u\n", a >> 1);

    return 0;
}