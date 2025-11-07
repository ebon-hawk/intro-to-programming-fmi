#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int isZigzag = 1;

    if (!(a <= b || a >= b)) isZigzag = 0;

    if (!((b <= a && b <= c) || (b >= a && b >= c))) isZigzag = 0;

    if (!((c <= b && c <= d) || (c >= b && c >= d))) isZigzag = 0;

    if (!((d <= c && d <= e) || (d >= c && d >= e))) isZigzag = 0;

    if (!(e <= d || e >= d)) isZigzag = 0;

    if (isZigzag) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}