#include <stdio.h>

int main() {
    
    char a[10];
    scanf("%s", &a);
    printf("%d\n", a[9]);
    printf("%s\n", a[9]);
    printf("%s\n", a);
    printf("%d", a);

    return 0;
}
