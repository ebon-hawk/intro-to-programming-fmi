#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    long long a, b, c, d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Left and right limit of intersection
    long long left = (a <= c) * c + (a > c) * a;
    long long right = (b < d) * b + (b >= d) * d;

    // Check if intersection exists
    int hasIntersection = (left <= right);

    printf("%lld %lld %d\n", left, right, hasIntersection);

    return 0;
}