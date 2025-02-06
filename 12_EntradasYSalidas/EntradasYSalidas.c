// Entradas y salidas en C

#include <stdio.h>

int main(){

    char e[40];

    printf("Escribe tu nombre: \n");
    gets(e);

    printf("El valor que escribiste es %s\n", e);


}