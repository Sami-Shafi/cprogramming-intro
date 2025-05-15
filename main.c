#include <stdio.h>
#include <string.h>

// Given the multiplication of four numbers and three of those numbers, find the missing number.
// Note: If the missing number could not be found for the given input, print -1. All numbers are non-negative integers.

// Input Format
// The first line will contain T, number of test cases.
// For every test case, the input will contain one integer M (the multiplication of the four numbers), A, B, C (three of those four numbers).

// Constraints
// 1 < T <= 100000
// 0 <= M <= 10^18
// 1 <= A, B, C <= 10^6

// Output Format
// Print the missing number. Don't forget to print a new line after it.

// Sample Input
// 4
// 20 1 2 2
// 10 2 2 1
// 1 1 2 3
// 0 3 10 15

// Sample Output
// 5
// -1
// -1
// 0

void executeMath(int n) {
    if (n == 0) {
        return;
    }

    long long int total;
    int a,b,c;
    scanf("%d %d %d %d", &total, &a, &b, &c);
    int mul = a*b*c;
    int potentialAns = total / mul;
    if (potentialAns * mul == total) {
        printf("%d\n", potentialAns);
    }else {
        printf("-1\n");
    }
    
    executeMath(n-1);
}


int main() {

    int n;
    scanf("%d", &n);

    executeMath(n);

    return 0;
}