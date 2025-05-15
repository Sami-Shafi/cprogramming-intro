#include <stdio.h>
#include <string.h>

int main() {

    // Given two numbers N, M
    // and a 2D array of size N * M. Print the inverted array that appeared in the mirror.

    // Input
    // First line contains two numbers N, M (1≤N,M≤100)
    // N donates number of rows and M donates number of columns.

    // Each of the next N lines will contain M numbers (1≤Ai,j≤109).

    // Output
    // Print the inverted array.

    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = c-1; j >= 0; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}