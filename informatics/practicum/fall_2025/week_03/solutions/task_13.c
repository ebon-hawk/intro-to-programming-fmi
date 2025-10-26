#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int main() {
    double px, py;

    scanf("%lf %lf", &px, &py);

    const double AX = -4, AY = -1;
    const double BX = -5, BY = 5;
    const double CX = 2, CY = 0;
    const double DX = -3, DY = -5;
    const double EX = -3, EY = -4;

    // Compute squared radii for the circles
    double bigRadius2 = (BX - AX) * (BX - AX) + (BY - AY) * (BY - AY);
    double smallRadius2 = (EX - DX) * (EX - DX) + (EY - DY) * (EY - DY);

    // Compute squared distance from the point to the circle centers
    double distInner2 = (px - DX) * (px - DX) + (py - DY) * (py - DY);
    double distOuter2 = (px - AX) * (px - AX) + (py - AY) * (py - AY);

    // Small epsilon to avoid floating-point errors
    const double EPS = 1e-9;

    // Check if the point is inside the circles
    int inBigCircle = (distOuter2 < bigRadius2 - EPS);
    int inSmallCircle = (distInner2 < smallRadius2 - EPS);

    // Line AB coefficients
    double t1 = BY - AY;
    double u1 = -(BX - AX);
    double v1 = (BX - AX) * AY - (BY - AY) * AX;

    // Evaluate line function at the point
    double value1 = t1 * px + u1 * py + v1;

    // Line AC coefficients
    double t2 = CY - AY;
    double u2 = -(CX - AX);
    double v2 = (CX - AX) * AY - (CY - AY) * AX;

    // Evaluate line function at the point
    double value2 = t2 * px + u2 * py + v2;

    // A point is inside the triangle if it lies on the correct side of all edges
    int inTriangle = (value1 > EPS) && (value2 > EPS);

    int inColoredArea = inBigCircle && (!inTriangle) && (!inSmallCircle);

    printf("%d", inColoredArea);

    return 0;
}