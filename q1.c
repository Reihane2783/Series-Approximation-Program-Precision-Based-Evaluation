#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    double summand = 1, numerator, denominator, s = 0, total = 0;
    int i = 0, sign = 1;

    printf("Enter x as a float number such that 0.0 < x < 1.0:\n");
    scanf("%f", &x);

    if (x > 0 && x < 1)
    {
        while (summand > 1E-4)
        {
            i++;
            numerator = pow(x, 2 * (i - 1));
            denominator = sign * (pow(x, i) / i);
            total += denominator;
            summand = numerator / total;
            s += sign * summand;
            sign = -sign;
        }

        printf("S = %f\n", s);
    }
    else
    {
        printf("Invalid input. Please enter a value between 0 and 1.\n");
    }

    return 0;
}
