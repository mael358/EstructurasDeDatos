#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10;
    int *p;

    p = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of p: %p\n", p);
    printf("Value of *p: %d\n", *p);


    //Stack memory
    //int arr[5] = {1, 2, 3, 4, 5};

    //Heap memory


    int *q;
    q = (int *)malloc(5*sizeof(int));
    q[0] = 10; q[1] = 20; q[2] = 30; q[3] = 40; q[4] = 50;

    printf("\n");
    printf("\n");
    printf("\n");


    for (int i = 0; i < 5; i++)
        printf("%d\n", q[i]);

    free(q);
    return 0;
}