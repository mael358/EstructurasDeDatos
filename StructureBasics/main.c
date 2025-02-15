#include <stdio.h>


struct Rectancle {
    int length;
    int breadth;
    char x; // Consumes 4 bytes but we would only use 1 byte for it's value.
};

int main(){
    struct Rectancle r;
    r.length = 10;
    r.breadth = 5;

    printf("Length: %d\n", r.length);
    printf("Breadth: %d\n", r.breadth);
    printf("Size in memory: %lu\n", sizeof(r));

    return 0;
}