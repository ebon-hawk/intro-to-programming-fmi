#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    double x, y, z;

    scanf("%lf %lf %lf", &x, &y, &z);

    int negX = x < 0;
    int posX = x > 0;

    int negY = y < 0;
    int posY = y > 0;

    int negZ = z < 0;
    int posZ = z > 0;

    int octant = 1 * (posX && posY && posZ)
        + 2 * (negX && posY && posZ)
        + 3 * (negX && negY && posZ)
        + 4 * (posX && negY && posZ)
        + 5 * (posX && posY && negZ)
        + 6 * (negX && posY && negZ)
        + 7 * (negX && negY && negZ)
        + 8 * (posX && negY && negZ);

    printf("%d\n", octant);

    return 0;
}