#include <stdio.h>
#include <math.h>
#define EPS 1e-6

int main()
{
    double x1, y1;
    puts("Enter coordinates of first point:");
    if (scanf("%lf%lf", &x1, &y1) != 2)
    {
        puts("Invalid input format!");
        return 1;
    }

    double x2, y2;
    puts("Enter coordinates of second point:");
    if (scanf("%lf%lf", &x2, &y2) != 2)
    {
        puts("Invalid input format!");
        return 1;
    }

    double x3, y3;
    puts("Enter coordinates of third point:");
    if (scanf("%lf%lf", &x3, &y3) != 2)
    {
        puts("Invalid input format!");
        return 1;
    }

    double x4, y4;
    puts("Enter coordinates of fourth point:");
    if (scanf("%lf%lf", &x4, &y4) != 2)
    {
        puts("Invalid input format!");
        return 1;
    }

    double vector12_x = x2 - x1,
           vector12_y = y2 - y1,
           vector23_x = x3 - x2,
           vector23_y = y3 - y2,
           vector14_x = x4 - x1,
           vector14_y = y4 - y1;

    double length12_squared = vector12_x * vector12_x +
                              vector12_y * vector12_y,
           length14_squared = vector14_x * vector14_x +
                              vector14_y * vector14_y;

    double scalar_product = vector12_x * vector14_x +
                            vector12_y * vector14_y;

    if (fabs(vector14_x - vector23_x) < EPS &&
        fabs(vector14_y - vector23_y) < EPS &&                 /** guarantees the four entered points form a parallelogram */
        fabs(length12_squared - length14_squared) < EPS &&     /** guarantees the four entered points form a rhombus */
        fabs(scalar_product) < EPS &&                          /** guarantees the four entered points form a square */
        fabs(length12_squared) >= EPS)                         /** guarantees the side of the square is non-zero */
    {
        puts("The four entered points form a square with positive side length!");
    }
    else
    {
        puts("The four entered points do not form a square with positive side length!");
        return 0;
    }

    double x, y;
    puts("Enter coordinates of a point:");
    if (scanf("%lf%lf", &x, &y) != 2)
    {
        puts("Invalid input format!");
        return 1;
    }

    double center_x = (x1 + x2 + x3 + x4) / 4;
    double center_y = (y1 + y2 + y3 + y4) / 4;

    double midpoint12_x = (x1 + x2) / 2;
    double midpoint12_y = (y1 + y2) / 2;

    double small_radius_squared = (center_x - midpoint12_x) * (center_x - midpoint12_x) +
                                  (center_y - midpoint12_y) * (center_y - midpoint12_y);

    double big_radius_squared = (center_x - x1) * (center_x - x1) +
                                (center_y - y1) * (center_y - y1);

    double distance_squared = (center_x - x) * (center_x - x) +
                              (center_y - y) * (center_y - y);

    if (small_radius_squared - EPS < distance_squared &&
        big_radius_squared + EPS > distance_squared)
    {
        puts("The entered point is inside the desired region!");
    }
    else
    {
        puts("The entered point is outside the desired region!");
        return 0;
    }

    /** four vector products to determine the areas with
        vertices two adjacent vertices and the given point **/
    double area12 = fabs((x1 - x) * (y2 - y) - (x2 - x) * (y1 - y)) / 2;
    double area23 = fabs((x2 - x) * (y3 - y) - (x3 - x) * (y2 - y)) / 2;
    double area34 = fabs((x3 - x) * (y4 - y) - (x4 - x) * (y3 - y)) / 2;
    double area41 = fabs((x4 - x) * (y1 - y) - (x1 - x) * (y4 - y)) / 2;
    double totalArea = area12 + area23 + area34 + area41;

    double realArea = length12_squared;

    if (fabs(totalArea - realArea) < EPS)
    {
        puts("The entered point is inside the square or on its side!");
    }
    else
    {
        puts("The entered point is outside the square!");
    }

    return 0;
}

/**
    Example test data:
    0 0
    1 0
    1 1
    0 1
    0.1 0.1

    Example test data:
    1 0
    0 1
    -1 0
    0 -1
    0 0
*/
