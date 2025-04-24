#include <stdio.h>

int main() {
    
    char a[30] = "SAMIULLAH IN SHAFI";
    printf("%s", a);
    int length = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        length++;
    }

    printf("\n%d", length);
    

    return 0;
}
