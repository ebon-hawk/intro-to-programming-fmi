#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int h, m;

    scanf("%d %d", &h, &m);

    m += 15;

    if (m >= 60) {
        h += 1;
        m -= 60;
    }

    if (h >= 24) {
        h -= 24;
    }

    printf("%02d:%02d\n", h, m);

    return 0;
}