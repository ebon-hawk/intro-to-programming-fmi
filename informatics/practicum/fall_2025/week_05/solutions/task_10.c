#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    char a1, a2, b1, b2, x;
    const int CASE_DIFF = 'a' - 'A';

    scanf(" %c %c %c %c %c", &a1, &a2, &b1, &b2, &x);

    int inA = (x >= a1 && x <= a2) ||
        (x >= a1 + CASE_DIFF && x <= a2 + CASE_DIFF);

    int inB = (x >= b1 && x <= b2) ||
        (x >= b1 - CASE_DIFF && x <= b2 - CASE_DIFF);

    printf("%s\n", (inA || inB) ? "True" : "False");
    printf("%s\n", (inA && inB) ? "True" : "False");
    printf("%s\n", (inA && !inB) ? "True" : "False");
    printf("%s\n", (inA != inB) ? "True" : "False");

    return 0;
}