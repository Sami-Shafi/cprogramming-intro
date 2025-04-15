#include <stdio.h>

int main() {
    // Given N numbers. Count how many of these values are even, odd, positive and negative.

    // Input
    // First line contains one number N (1 ≤ N ≤ 103) number of values.

    // Second line contains N numbers (-105 ≤ Xi ≤ 105).

    // Output
    // Print four lines with the following format:
    // First Line: "Even: X", where X is the number of even numbers in the given input.
    // Second Line: "Odd: X", where X is the number of odd numbers in the given input.
    // Third Line: "Positive: X", where X is the number of positive numbers in the given input.
    // Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

    int valueCount, tempNum, evenCount = 0, oddCount = 0, posCount = 0, negCount = 0;
    scanf("%d", &valueCount);

    for (int i = 1; i <= valueCount; i++)
    {
        scanf("%d", &tempNum);
        
        if(tempNum % 2 == 0) {
            evenCount += 1;
        }else {
            oddCount += 1;
        }

        if(tempNum < 0) {
            negCount += 1;
        }else {
            posCount += 1;
        }
    }

    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", posCount);
    printf("Negative: %d", negCount);
    
    return 0;
}
