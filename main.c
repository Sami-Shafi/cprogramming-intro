#include <stdio.h>

int main() {
    
    // You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.

    // Note: Index starts from 0.

    // Input Format

    // First line will contain N.
    // Second line will contain the array A.
    // Third line will contain X and V.
    // Constraints

    // 1 <= N <= 10^5
    // 1 <= A[i] <= 100 ; where A[i] are the values of array A.
    // 0 <= X < N
    // 1 <= V <= 100
    // Output Format

    // Output the final array in reverse order.

    int arraySize, valueInsideArray;
    scanf("%d", &arraySize);
    if (arraySize <= 0 || arraySize > 100000) {return 1;}

    int ourArray[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        scanf("%d", &valueInsideArray);
        
        if(valueInsideArray > 0 && valueInsideArray <= 100) {
            ourArray[i] = valueInsideArray;
        }
    }

    int targetIndex, changedVal;
    scanf("%d", &targetIndex);
    scanf("%d", &changedVal);

    if (targetIndex >= 0 && targetIndex < arraySize && changedVal >= 1 && changedVal <= 100) {
        ourArray[targetIndex] = changedVal;
    }

    for (int i = arraySize-1; i >= 0; i--)
    {
        printf("%d", ourArray[i]);
        if (i > 0)
        {
            printf(" ");
        }
        
    }
    
    return 0;
}
