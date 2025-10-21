#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    // Variables to store the circle's center coordinates and radius
    int r, x0, y0;
    scanf("%d %d %d", &x0, &y0, &r);

    // Variables to store the coordinates of the point to check
    int x, y;
    scanf("%d %d", &x, &y);

    int dx = x - x0;
    int dy = y - y0;

    // Compute squared distance from point to circle center (using
    // squared distance avoids unnecessary square root calculations)
    int dist2 = dx * dx + dy * dy;

    // Compute squared radius for comparison
    int r2 = r * r;

    int inside = (dist2 < r2);
    int on = (dist2 == r2);
    int outside = (dist2 > r2);
    printf("%d %d %d\n", inside, on, outside);
    return 0;
}