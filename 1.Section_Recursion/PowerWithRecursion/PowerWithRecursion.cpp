#include <stdio.h>

int power(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return power(m, n - 1) * m;
}

int power2(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power2(m * m, n / 2);
    return m * power2(m * m, (n - 1) / 2);
}

int main()
{
    int r;
    r = power(2, 9);
    printf("%d\n", r);

    int r2;
    r2 = power2(2, 9);
    printf("%d\n", r2);
    return 0;
}   // Output: 8
// The power function calculates the power of a number using recursion. The power function takes two arguments, m and n, and returns the value of m raised to the power of n. The base case of the power function is when n is equal to 0, in which case the function returns 1. Otherwise, the function recursively calls itself with the arguments m and n - 1 and multiplies the result by m. This process continues until the base case is reached, at which point the final result is returned. The main function calls the power function with the arguments 2 and 3 and prints the result, which is 8.