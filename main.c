#include <stdio.h>

int main() {
    // Given a number N. Print the digits of that number from right to left separated by space.

    // Input
    // First line contains a number T (1 ≤ T ≤ 10) number of test cases.

    // Next T lines will contain a number N (0 ≤ N ≤ 109)

    // Output
    // For each test case print a single line contains the digits of the number separated by space.

    int lines, line;
    scanf("%d", &lines);

    for (int i = 1; i <= lines; i++)
    {
        scanf("%d", &line);
        while (line / 10 != 0){
            printf("%d", line % 10);
            printf(" ");
            line /= 10;
        }
        printf("%d", line % 10);
        printf("\n");
    }

    return 0;
}
