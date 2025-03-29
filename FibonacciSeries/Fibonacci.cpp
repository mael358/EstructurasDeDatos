#include <stdio.h>
#include <chrono>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int fibonacciIterative(int n)
{
    int a = 0, b = 1, c;
    if (n == 0)
        return a;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int fibonacciImproved(int n)
{
    static int a = 0, b = 1, c;
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    c = a + b;
    a = b;
    b = c;
    return fibonacciImproved(n - 1);
}

int main()
{
    int n = 6;
    printf("Fibonacci of %d (recursive): %d\n", n, fibonacci(n));
    printf("Fibonacci of %d (iterative): %d\n", n, fibonacciIterative(n));
    printf("Fibonacci of %d (improved): %d\n", n, fibonacciImproved(n));
    return 0;
}