#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Helpers to print arrays.
    int i, j;

    // 2D array declaration in STACK
    int A[3][4] = { {1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7} };

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("B Array: \n");
    printf("\n");
    printf("\n");

    // 2D array declaration in STACK and HEAP
    int *B[3];
    B[0] = (int *)malloc(4 * sizeof(int));
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("C Array: \n");
    printf("\n");
    printf("\n");

    // 2D array declaration in HEAP
    int **C;
    C = (int **)malloc(3 * sizeof(int *));
    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}