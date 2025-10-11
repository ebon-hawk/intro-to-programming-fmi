#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int year;

    scanf("%d", &year);

    int isLeap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    printf("%d\n", isLeap);

    return 0;
}