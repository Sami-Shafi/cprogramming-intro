#include <stdio.h>

int main() {
    
    int x = 10;
    // printf("%p\n", &x);

    int* pointer;
    pointer = &x;

    *pointer = 20;

    printf("%d", x);
    
    return 0;
}
