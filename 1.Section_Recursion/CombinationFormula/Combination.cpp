#include <stdio.h>


int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int combination(int n, int r)
{
    if (r > n)
        return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int nCr(int n, int r)
{
    if (n==r || r==0)
        return 1;
    return nCr(n-1, r-1) + nCr(n-1, r);
}

int main()
{
    int n = 4, r = 2;
    printf("C(%d, %d) = %d\n", n, r, combination(n, r));
    printf("Recursive C(%d, %d) = %d\n", n, r, nCr(n, r));
    return 0;

}