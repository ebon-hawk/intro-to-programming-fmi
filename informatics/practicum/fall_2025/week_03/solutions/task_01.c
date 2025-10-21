#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int absX = (x < 0) * (-x) + (x >= 0) * x;
    printf("%d\n", absX);
    return 0;
}