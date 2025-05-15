#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// You will be given a 2D matrix of N * M size. The matrix will contain integer values only. You need to print the values of last row and then print the values of last column in the order they were given.

// Input Format
// First line will contain N and M the row and column respectively.
// Then the 2D matrix will be given.

// Constraints
// 2 <= N,M <= 100
// 0 <= Element <= 100

// Output Format
// First line will contain the values of last row.
// Second line will contain the values of last column.

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
        

    for (int i = 0; i < m; i++)
    {
        printf("%d ", mat[n-1][i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", mat[i][m-1]);
    }

    return 0;
}