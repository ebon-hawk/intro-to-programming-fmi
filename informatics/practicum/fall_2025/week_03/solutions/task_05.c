#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    // Variables to store the circle's center coordinates and radius
    double r, x0, y0;

    scanf("%lf %lf %lf", &x0, &y0, &r);

    // Variables to store the coordinates of the point to check
    double x, y;

    scanf("%lf %lf", &x, &y);

    double dx = x - x0;
    double dy = y - y0;

    // Using squared distance avoids unnecessary square root calculations
    double dist2 = dx * dx + dy * dy;

    // Compute squared radius for comparison
    double r2 = r * r;

    const double EPS = 1e-9; // Tolerance for floating point comparison
    int inside = (dist2 < r2 - EPS);
    int on = ((dist2 - r2 < EPS) && (r2 - dist2 < EPS));
    int outside = (dist2 > r2 + EPS);

    printf("%d %d %d\n", inside, on, outside);

    return 0;
}