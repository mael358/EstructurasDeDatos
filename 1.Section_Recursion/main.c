#include <stdio.h>
#include <stdbool.h>

#define PI 3.14159

// Funcion principal
int main() {
    printf("Hello, World!\n");

    int x = 10;
    float suma = x + PI;
    printf("Suma: %f\n", suma);

    bool esVerdadero = true;
    printf("Es verdadero: %d\n", esVerdadero);

    unsigned int y = 10; // Solo positivos
    printf("Valor de y: %d\n", y);


    return 0;
}