#include <stdio.h>
#include <string.h>

int main() {

    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    // each row loop
    for (int i = 0; i < r; i++)
    {
        // values in each column
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}