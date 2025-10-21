#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    int isDigit = (ch >= '0' && ch <= '9');
    int isLower = (ch >= 'a' && ch <= 'z');
    int isUpper = (ch >= 'A' && ch <= 'Z');

    int isOther = !(isDigit || isLower || isUpper);
    printf("%d %d %d %d\n", isUpper, isLower, isDigit, isOther);
    return 0;
}