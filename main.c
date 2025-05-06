#include <stdio.h>
#include <string.h>

int main() {

    int n, star=1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int space = n-i;
        while (space > 0) {
            printf(" ");
            space--;
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star+=2;
    }
    
    
    return 0;
}
