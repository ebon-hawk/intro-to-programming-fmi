#define _CRT_SECURE_NO_WARNINGS

#include <stdint.h>
#include <stdio.h>

int main() {
    const int BIT_LENGTH = 8;
    int crossoverPoint;
    uint8_t parent1, parent2;

    printf("Enter the first 8-bit chromosome (0-255): ");
    scanf("%hhu", &parent1);

    printf("Enter the second 8-bit chromosome (0-255): ");
    scanf("%hhu", &parent2);

    // Determines how many bits from the right (LSB side) are swapped
    printf("Enter the crossover point (1 to %d): ", BIT_LENGTH - 1);
    scanf("%d", &crossoverPoint);

    // Generates a mask with `crossoverPoint` number of 1s
    // from the right (if `crossoverPoint` is 5, the mask is `00011111`)
    uint8_t lowerMask = (1U << crossoverPoint) - 1;

    // The inverse of the lower mask - selects the
    // MSBs/left segment (if `crossoverPoint` is 5, the mask is `11100000`)
    uint8_t upperMask = ~lowerMask;

    // Takes the upper part of `parent1` and the lower part of `parent2`
    uint8_t offspring1 = (parent1 & ~lowerMask) | (parent2 & lowerMask);

    // Takes the upper part of `parent2` and the lower part of `parent1`
    uint8_t offspring2 = (parent2 & ~lowerMask) | (parent1 & lowerMask);

    printf("\n=== CROSSOVER RESULTS ===\n");

    printf("Crossover Point: %d\n", crossoverPoint);
    printf("Offspring 1 (P1 Upper + P2 Lower): 0x%02X\n", offspring1);
    printf("Offspring 2 (P2 Upper + P1 Lower): 0x%02X\n", offspring2);

    return 0;
}