#include <stdio.h>

int main()
{
    unsigned int a, b, k;
    if (scanf("%u%u%u", &a, &b, &k) != 3)
    {
        puts("Invalid input format!");
        return 1;
    }

    if (b < a)
    {
        puts("Invalid interval bounds!");
        return 1;
    }

    /// we assume digits are numbered 0, 1, 2, ... from right to left
    for (unsigned int i = a; i <= b; ++ i)
    {
        unsigned int cpy = i, newNum = 0, power = 1;
        for (unsigned int j = 0; cpy; ++ j, cpy /= 10)
        {
            if (j == k) continue;
            newNum += power * (cpy % 10);
            power *= 10;
        }

        unsigned int revNum = 0;
        cpy = newNum;
        while (cpy)
        {
            revNum = revNum * 10 + cpy % 10;
            cpy /= 10;
        }

        if (newNum == revNum)
        {
            printf("%u\n", i);
        }
    }

    return 0;
}

/**
    Example test data:
    1000 1200 3
**/
