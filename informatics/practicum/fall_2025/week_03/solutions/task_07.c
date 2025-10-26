#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int x1Left, y1Top;
    int x1Right, y1Bottom;

    scanf("%d %d %d %d", &x1Left, &y1Top, &x1Right, &y1Bottom);

    int x2Left, y2Top;
    int x2Right, y2Bottom;

    scanf("%d %d %d %d", &x2Left, &y2Top, &x2Right, &y2Bottom);

    // Left edge - the greater (further right) of the two left edges
    int overlapLeft = (x1Left <= x2Left) * x2Left + (x1Left > x2Left) * x1Left;

    // Right edge - the smaller (further left) of the two right edges
    int overlapRight = (x1Right < x2Right) * x1Right + (x1Right >= x2Right) * x2Right;

    // Top edge - the greater (lower) of the two top edges
    int overlapTop = (y1Top <= y2Top) * y2Top + (y1Top > y2Top) * y1Top;

    // Bottom edge - the smaller (higher) of the two bottom edges
    int overlapBottom = (y1Bottom < y2Bottom) * y1Bottom + (y1Bottom >= y2Bottom) * y2Bottom;

    int hasIntersection = (overlapBottom >= overlapTop) && (overlapLeft <= overlapRight);

    printf("%d\n", hasIntersection);

    return 0;
}