#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

int main() {
    char op;
    double a, b;

    const double EPS = 1e-9;

    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
    case '+':
        printf("%.10g\n", a + b); break;
    case '-':
        printf("%.10g\n", a - b); break;
    case '*':
        printf("%.10g\n", a * b); break;
    case '/':
        if (fabs(b) >= EPS) {
            printf("%.10g\n", a / b);
        }
        else {
            printf("ERROR: Division by zero\n");
        }

        break;
    default:
        printf("ERROR: Unknown operator\n"); break;
    }

    return 0;
}