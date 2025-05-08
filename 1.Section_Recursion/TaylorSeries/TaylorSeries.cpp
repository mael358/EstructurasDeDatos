#include <stdio.h>

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

double eImproved(double x, double n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return eImproved(x, n - 1);
}

double eIterative(int x, int n)
{
    double s = 1;
    for (; n > 0; n--)
    {
        s = 1 + x * s / n;
    }
    return s;
}

int main()
{
    double r;
    r = e(1, 10);
    printf("Old recursive: %lf\n", r);

    double rImproved;
    rImproved = eImproved(1, 10);
    printf("Improved: %lf\n", rImproved);

    double rIterative;
    rIterative = eIterative(1, 10);
    printf("Iterative: %lf\n", rIterative);

    return 0;
}   // Output: 2