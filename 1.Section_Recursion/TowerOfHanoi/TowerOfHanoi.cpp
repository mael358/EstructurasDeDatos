#include <stdio.h>


void TOH(int n, char A, char B, char C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("Move disk %d from %c to %c\n", n, A, C);
        TOH(n - 1, B, A, C);
    }
}

int main(){
    int n = 4; // Number of disks
    TOH(n, 'A', 'B', 'C'); // A, B and C are names of rods
    // A is source, B is auxiliary, C is destination
    // The function TOH will print the steps to move the disks
    // from source to destination using the auxiliary rod
    // The function TOH is a recursive function that follows the rules of the Tower of Hanoi problem
    // The base case is when there is only one disk to move
    // In that case, it simply moves the disk from the source rod to the destination rod
    return 0;
}