#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int x1, y1;
    int x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int dx = x1 - x2;
    int dy = y1 - y2;

    int dx2 = dx * dx;
    int dy2 = dy * dy;

    // Rook can move if the squares share the same column or row
    int rook = (x1 == x2) || (y1 == y2);

    // King can move if the destination is at most one square away in any direction
    int king = (dx2 <= 1) && (dy2 <= 1);

    // Bishop can move along a diagonal
    int bishop = (dx2 == dy2);

    // Queen can move along a column, diagonal, or row
    int queen = bishop || rook;
    printf("rook=%d king=%d queen=%d\n", rook, king, queen);
    return 0;
}