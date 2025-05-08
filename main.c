#include <stdio.h>
#include <string.h>

void sum() {
    int x = 20;
    printf("SUM: %d\n", x);
}

int main() {

    int x = 10;
    printf("MAIN: %d\n", x);
    sum();
    
    return 0;
}
