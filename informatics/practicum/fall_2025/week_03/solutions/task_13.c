#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int main() {
    double px, py;
    scanf("%lf %lf", &px, &py);

    const double ax = -4, ay = -1;
    const double bx = -5, by = 5;
    const double cx = 2, cy = 0;
    const double dx = -3, dy = -5;
    const double ex = -3, ey = -4;

    // Compute squared radii for the circles
    const double bigRadius2 = (bx - ax) * (bx - ax) + (by - ay) * (by - ay);
    const double smallRadius2 = (ex - dx) * (ex - dx) + (ey - dy) * (ey - dy);

    // Compute squared distance from the point to the circle centers
    const double distInner2 = (px - dx) * (px - dx) + (py - dy) * (py - dy);
    const double distOuter2 = (px - ax) * (px - ax) + (py - ay) * (py - ay);

    // Small epsilon to avoid floating-point errors
    const double EPS = 1e-9;

    // Check if the point is inside the circles
    int inBigCircle = (distOuter2 < bigRadius2 - EPS);
    int inSmallCircle = (distInner2 < smallRadius2 - EPS);

    // Line AB coefficients
    double t1 = by - ay;
    double u1 = -(bx - ax);
    double v1 = (bx - ax) * ay - (by - ay) * ax;
    double value1 = t1 * px + u1 * py + v1; // Evaluate line function at the point

    // Line AC coefficients
    double t2 = cy - ay;
    double u2 = -(cx - ax);
    double v2 = (cx - ax) * ay - (cy - ay) * ax;
    double value2 = t2 * px + u2 * py + v2; // Evaluate line function at the point

    // A point is inside the triangle if it lies on the correct side of all edges
    int inTriangle = (value1 > EPS) && (value2 > EPS);

    int inColoredArea = inBigCircle && (!inTriangle) && (!inSmallCircle);
    printf("%d", inColoredArea);
    return 0;
}