#include <stdio.h>

// Función de búsqueda binaria que retorna el índice del elemento buscado
// o -1 si no se encuentra. La variable 'steps' es usada para contar cuántas
// iteraciones se realizan.
int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int steps = 0; // Contador de iteraciones (pasos)

    // Mientras el subarreglo tenga elementos:
    while (low <= high) {
        steps++; // Cada iteración representa una división del problema

        // Se calcula el índice medio para dividir el arreglo
        int mid = low + (high - low) / 2;
        
        // Comentario: Se añade 1 paso por cada comparación en el ciclo
        // para determinar si el elemento en la posición media es el objetivo.
        if (arr[mid] == target) {
            // Se encontró el elemento. Se imprime el número de pasos y se retorna el índice.
            printf("Pasos realizados: %d\n", steps);
            return mid;
        }
        // Si el elemento en 'mid' es menor que el objetivo, se descarta la mitad izquierda.
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // Si el elemento en 'mid' es mayor que el objetivo, se descarta la mitad derecha.
        else {
            high = mid - 1;
        }
    }
    
    // Si se sale del ciclo sin encontrar el elemento, se imprime el número de pasos.
    printf("Pasos realizados: %d\n", steps);
    return -1; // El elemento no se encontró
}

int main() {
    // Declaración e inicialización de un arreglo ordenado
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);  // Tamaño del arreglo
    int target = 7; // Elemento a buscar

    // Llamada a la función de búsqueda binaria
    int result = binarySearch(arr, n, target);
    
    // Se imprime el resultado de la búsqueda
    if (result != -1)
        printf("Elemento %d encontrado en el índice: %d\n", target, result);
    else
        printf("Elemento %d no encontrado.\n", target);
        
    return 0;
}
