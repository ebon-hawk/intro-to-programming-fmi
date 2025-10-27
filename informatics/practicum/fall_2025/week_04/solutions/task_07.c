#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
 * The least significant bit determines whether a number is even or odd.
 * We can isolate that bit with `& 1`.
 */
int main() {
    unsigned int N;

    printf("Enter an unsigned integer N: ");
    scanf("%u", &N);

    int isEven = !(N & 1);

    printf("%u is even: %d\n", N, isEven);

    return 0;
}