#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);

    // Convert the entire time into seconds and add one second
    int total = h * 3600 + m * 60 + s + 1;

    // Keep the value within a 24-hour range (wrap around after 23:59:59)
    total = total % (24 * 3600);

    // Extract the new hour value (integer division gives full hours)
    int newH = total / 3600;

    // Extract remaining minutes:
    // 1. `total % 3600` -> leftover seconds after removing full hours
    // 2. Divide by 60 -> convert leftover seconds to full minutes
    int newM = (total % 3600) / 60;

    // Extract remaining seconds (the remainder after full minutes)
    int newS = total % 60;
    printf("%02d:%02d:%02d\n", newH, newM, newS);
    return 0;
}