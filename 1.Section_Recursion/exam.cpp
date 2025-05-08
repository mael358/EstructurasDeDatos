#include <stdio.h>

void foo (int n, int sum)
{
    int residuo = 0, division = 0;

    if (n == 0) return;

    residuo = n % 10;
    division = n/10;
    sum = sum + residuo;
    foo(division, sum);
    printf("%d", residuo);
}

int f(int &x, int c) 
{
    c = c - 1; 
    if (c == 0) return 1; 
    x = x + 1; 
    return f(x,c) * x;
}

int fun (int n)
{ 
    int x=1, k; 
    if (n==1) return x; 
    for (k=1; k<n; ++k) 
    x=x + fun (k) * fun (n - k); 
    return x; 
}

void count(int n) 
{
    static int d = 1; 
    printf("%d", n); 
    printf("%d", d); 
    d++; 
    if (n > 1) count (n-1); 
    printf("%d", d);
} 


int main ()
{
    //int a = 2048, sum = 0;
    //foo (a, sum);
    //printf("%d\n", sum);

    //int x = 5, c = 5;
    //int result = f(x, c);
    //printf("%d\n", result);
    //printf("%d\n", x);

    //int n = 5;
    //int result = fun(n);
    //printf("%d\n", result);
    count(3);
    return 0;
}

