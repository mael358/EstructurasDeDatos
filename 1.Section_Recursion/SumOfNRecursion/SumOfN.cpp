#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int IterativeSum(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
        s += i;
    return s;
}

int main()
{
    int r;
    r = sum(5);
    printf("%d\n", r);

    int r2;
    r2 = IterativeSum(5);
    printf("%d\n", r2);
    return 0;
}   // Output: 15