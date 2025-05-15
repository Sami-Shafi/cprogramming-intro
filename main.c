#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// You will be given a matrix of size N * M. You need to tell if it is Jadu Matrix or not.
// Note: A Jadu Matrix is a square matrix, where the values of primary diagonal and secondary diagonal are 1. Rest of the cell will contain only 0.

// Input Format
// First line will contain N, the row and M, the column of the matrix.
// Then the N * M sized matrix will be given.

// Constraints
// 1 <= N, M <= 100
// 0 <= Values <= 100

// Output Format
// Ouput "YES" if the matrix is Jadu Matrix, otherwise output "NO" without the quotation marks.

// Sample Input 0
// 5 5
// 1 0 0 0 1
// 0 1 0 1 0
// 0 0 1 0 0
// 0 1 0 1 0
// 1 0 0 0 1

// Sample Output 0
// YES

int main() {

    int n, m;
    scanf("%d %d", &n, &m);
    bool is_jadu = true;

    if (n!=m) {
        is_jadu = false;   
    }

    int mat[n][m];


    if (n >= 1 && n <= 100 && m >= 1 && m <= 100) {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if(is_jadu != true) {
            break;
        }

        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] < 0) {
                return 1;
            }

            if (i == j || i+j == n-1) {
                if(mat[i][j] != 1) {
                    is_jadu = false;
                    break;
                }
            } else if (mat[i][j] != 0) {
                is_jadu = false;
                break;
            }
        }
    }

    if (is_jadu)
    {
        printf("YES");
    }else {
        printf("NO");
    }
    

    return 0;
}