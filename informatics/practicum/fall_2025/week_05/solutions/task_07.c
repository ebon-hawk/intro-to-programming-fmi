#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int day, month, year;

    scanf("%d %d %d", &day, &month, &year);

    int isValid = 1;

    if (year < 1900 || year > 9999) isValid = 0;

    if (month < 1 || month > 12) isValid = 0;

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
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth = 29;
        }
        else {
            daysInMonth = 28;
        }

        break;
    default:
        daysInMonth = -1; break;
    }

    if (day < 1 || day > daysInMonth) isValid = 0;

    if (isValid) {
        printf("Valid\n");
    }
    else {
        printf("Invalid\n");
    }

    return 0;
}