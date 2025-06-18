#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int A[] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17};
    cout << "sizeof(A) = " << sizeof(A) << endl;
    cout << "sizeof(A[0]) = " << sizeof(A[0]) << endl;
    int n = sizeof(A)/sizeof(A[0]);
    
    int start = A[0];
    int end = A[n-1];

    // Suma esperada de una secuencia aritmética
    int expectedSum = (end * (end + 1)) / 2 - ((start - 1) * start) / 2;

    // Suma real del array
    int actualSum = 0;
    for(int i = 0; i < n; i++) {
        actualSum += A[i];
    }

    cout << "El número que falta es: " << expectedSum - actualSum << endl;

    return 0;
}
