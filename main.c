#include <stdio.h>
#include <string.h>

int main() {

    // Given 2 numbers N, M and an array A of N numbers. For every number from 1 to M, print how many times this number appears in this array.

    // Input
    // First line contains two numbers N, M (1≤N≤105,1≤M≤105).

    // Second line contains N numbers (1≤Ai≤M).

    // Output
    // Print M lines, the ith line should contain number of times that the number i appears in A

    // Example

    // Input
    // 10 5
    // 1 2 3 4 5 3 2 1 5 3
    
    // Output
    // 2
    // 2
    // 3
    // 1
    // 2

    int arraySize, highestValue;
    scanf("%d %d", &arraySize, &highestValue);
    int ourArray[arraySize], iterationsArray[highestValue];

    for (int i = 0; i < arraySize; i++)
    {
        int insertedVal;
        scanf("%d", &insertedVal);
        if (insertedVal > 0 && insertedVal <= highestValue) {
            ourArray[i] = insertedVal;
        }
    }

    int iterationCount;
    for (int count = 1; count <= highestValue; count++)
    {
        iterationCount = 0;
        for (int i = 0; i < arraySize; i++)
        {
            if (count == ourArray[i]) {
                iterationCount++;
            }
        }
        iterationsArray[count-1] = iterationCount;
    }

    for (int i = 0; i < highestValue; i++)
    {
        printf("%d\n", iterationsArray[i]);
    }
    

    return 0;
}