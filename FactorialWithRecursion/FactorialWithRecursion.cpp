#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int IterativeFactorial(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    int r;
    r = factorial(5);
    printf("%d\n", r);


    int r2;
    r2 = IterativeFactorial(5);
    printf("%d\n", r2);

    return 0;
}   // Output: 120