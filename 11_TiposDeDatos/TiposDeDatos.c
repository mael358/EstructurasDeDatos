#include <stdio.h>
#include <stdbool.h>

// Funcion principal
int main() {

    int a = 1.5; // 2 bytes. Rango desde -32768 a 32767
    char b = 'z'; // 1 byte. Rango desde -128 a 127
    float c = 1.5; // 4 bytes. Rango desde 1.2E-38 a 3.4E+38
    double d = 1.5; // 8 bytes. Rango desde 2.3E-308 a 1.7E+308
    long e = 1.5; // 4 bytes. Rango desde -2147483648 a 2147483647
    short v = 1.5; // 2 bytes. Rango desde -32768 a 32767
    unsigned int w = 1.5; // 4 bytes. Rango desde 0 a 4294967295
    
    printf("Valor de y: %d\n", w);

    return 0;
}