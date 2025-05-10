#include <stdio.h>
#include <string.h>

int main() {

    int n, space;
    scanf("%d", &n);


    for (int i = 1; i <= n; i++)
    {
        space = n-i;
        while (space > 0)
        {
            printf(" ");
            space--;
        }
        

        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    
    return 0;
}