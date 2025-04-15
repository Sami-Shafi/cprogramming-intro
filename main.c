#include <stdio.h>

int main() {

    int x = 10;
    int y = ++x;
    int z = y++;
    printf("%d \n", x);
    printf("%d \n", y);
    printf("%d \n", z);
    printf("%d \n", z++);
    printf("%d ", z);

    printf("\n \n");

    int x2 = 10;
    ++x2;
    printf("%d", ++x2);
    
    return 0;
}
