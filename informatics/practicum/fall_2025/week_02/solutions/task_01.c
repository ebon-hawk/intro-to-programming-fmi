#include <stdio.h>

int main() {
    char c = 'A';
    double d = 3.14159;
    float f = 2.71f;
    int i = 42;

    printf("char: %c\n", c);
    printf("double: %lf\n", d);
    printf("float: %.2f\n", f);
    printf("int: %d\n", i);

    return 0;
}