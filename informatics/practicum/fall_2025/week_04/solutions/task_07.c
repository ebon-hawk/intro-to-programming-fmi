#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// To determine if a number is even or odd,
// you isolate its least significant bit (LSB)
// by applying a bitwise AND operation with 1,
// where a result of 0 indicates the number is even
// and 1 indicates it is odd
int main() {
    unsigned int N;

    printf("Enter an unsigned integer N: ");
    scanf("%u", &N);

    int isEven = !(N & 1);

    printf("%u is even: %d\n", N, isEven);

    return 0;
}