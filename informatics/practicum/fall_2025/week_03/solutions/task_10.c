#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);

    int negX = x < 0;
    int negY = y < 0;
    int posX = x > 0;
    int posY = y > 0;

    int quadrant = 1 * (posX && posY)
        + 2 * (negX && posY)
        + 3 * (negX && negY)
        + 4 * (posX && negY);

    printf("%d\n", quadrant);
    return 0;
}