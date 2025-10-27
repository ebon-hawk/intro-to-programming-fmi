#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    unsigned char c1, c2, c3;

    printf("Enter 3 encoded integers: ");
    scanf("%hhu %hhu %hhu", &c1, &c2, &c3);

    // The lowest 2 bits were moved to highest, so we reverse
    unsigned char decoded1 = ((c1 << 2) & 0xFC) | (c1 >> 6);

    // Swap MSB and LSB
    unsigned char lsb = c2 & 0x01;
    unsigned char middle = c2 & 0x7E;
    unsigned char msb = (c2 & 0x80) >> 7;

    unsigned char decoded2 = (lsb << 7) | middle | msb;

    // Invert middle 4 bits
    unsigned char decoded3 = c3 ^ 0x3C;

    printf("Decoded message: %c%c%c\n", decoded1, decoded2, decoded3);

    return 0;
}