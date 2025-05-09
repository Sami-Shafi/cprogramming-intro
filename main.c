#include <stdio.h>

int main() {
    
    int x = 10;
    printf("%p\n", &x);

    int* pointer;
    pointer = &x;

    // location of where x is stored
    printf("%p\n", pointer);
    // location of where pointer variable is stored
    printf("%p", &pointer);
    
    return 0;
}
