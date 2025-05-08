#include <stdio.h>

int main() {
    int n;
    printf("Please enter the size of your array: \n");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

