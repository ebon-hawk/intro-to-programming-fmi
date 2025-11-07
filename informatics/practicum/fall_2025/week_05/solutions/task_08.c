#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int day, month;

    scanf("%d %d", &day, &month);

    if (month < 1 || month > 12) {
        printf("Invalid input\n");

        return 1;
    }

    int daysInMonth;

    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        daysInMonth = 31; break;
    case 4:
    case 6:
    case 9:
    case 11:
        daysInMonth = 30; break;
    case 2:
        daysInMonth = 28; break;
    default:
        daysInMonth = -1; break;
    }

    if (day < 1 || day > daysInMonth) {
        printf("Invalid input\n");

        return 1;
    }

    ++day;

    if (day > daysInMonth) {
        day = 1;

        ++month;

        if (month > 12) month = 1;
    }

    printf("%d %d\n", day, month);

    return 0;
}