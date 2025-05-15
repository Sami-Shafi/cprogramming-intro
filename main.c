#include <stdio.h>
#include <string.h>
#include <stdbool.h>


// Christmas Tree Generator
// Sample Input 0
// 1

// Sample Output 0
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//      *
//      *
//      *
//      *
//      *

// Sample Input 1
// 3

// Sample Output 1
//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
// *************
//      ***
//      ***
//      ***
//      ***
//      ***

// Sample Input 2
// 5

// Sample Output 2
//        *
//       ***
//      *****
//     *******
//    *********
//   ***********
//  *************
// ***************
//      *****
//      *****
//      *****
//      *****
//      *****

void makeBranch(int stars, int spaces,int max) {
    if (stars > max) {
        return;
    }
    for (int i = 1; i <= spaces; i++) {
        printf(" ");
    } 
    for (int i = 1; i <= stars; i++)
    {
        printf("*");
    }
    printf("\n");
    makeBranch(stars+2, spaces-1, max);
}

void makeBody(int n) {
    for (int i = 0; i < 5; i++)
    {
        for (int i = 1; i <= 5; i++) {
        printf(" ");
        } 
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

int main() {

    int n;
    scanf("%d", &n);

    if(n % 2 != 0 && n > 0 && n < 22) {
        int highest = n+10;
        makeBranch(1, (highest-1)/2, highest);
        makeBody(n);
    }

    return 0;
}