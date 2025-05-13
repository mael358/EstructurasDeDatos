#include <stdio.h>

int main()
{
    int *p = new int[5]; // Dynamically allocate an array of 5 integers
    int *q = new int[10]; // Dynamically allocate an array of 10 integers
    // Initialize the first array
    p[0] = 3; p[1] = 5; p[2] = 7; p[3] = 9; p[4] = 11;
    // Copy the contents of p to q
    for (int i = 0; i < 5; i++)
        q[i] = p[i];

    delete[] p; // Free the memory allocated for the first array
    // Reassign p to point to q
    p = q;
    q = NULL; // Avoid dangling pointer
    // Print the addresses of the elements in the new array
    for (int i = 0; i < 10; i++)
        printf("%d \n", p[i]);
    
    return 0;
}