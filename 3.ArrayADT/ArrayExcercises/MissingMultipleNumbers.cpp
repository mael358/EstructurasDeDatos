#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int A[] = {6, 7, 8, 9, 11, 12, 14, 15, 16, 18, 19, 20};
    cout << "sizeof(A) = " << sizeof(A) << endl;
    cout << "sizeof(A[0]) = " << sizeof(A[0]) << endl;
    int n = sizeof(A) / sizeof(A[0]);

    int diff = A[0] - 0;

    // Buscar múltiples números faltantes en la secuencia
    for (int i = 0; i < n; i++) {
        while (A[i] - i > diff) {
            cout << "Número faltante: " << i + diff << endl;
            diff++;
        }
    }

    return 0;
}

