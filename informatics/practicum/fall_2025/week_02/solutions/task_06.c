#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    char lower;

    printf("Enter a lowercase letter: ");
    scanf("%c", &lower);

    char upper = lower - ('a' - 'A');

    printf("Uppercase equivalent: %c\n", upper);

    return 0;
}