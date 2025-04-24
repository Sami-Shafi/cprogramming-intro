#include <stdio.h>

int main() {
    
    char a[10];
    // scanf("%s", &a);
    fgets(a, 10, stdin);
    printf("%s", a);

    return 0;
}
