#include <stdio.h>

int main() {
    
    // You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.

    // For example:

    // If the input is

    // 6
    // 10 20 30 40 50 60
    // You need to print 60 40 20 as their indexes are 5 3 1 respectively.

    // Input Format

    // First line will contain N.
    // Second line will contain the array A.
    // Constraints

    // 1 <= N <= 10^5
    // 1 <= A[i] <= 1000 ; where A[i] are the values of array A.
    // Output Format

    // Output the values of odd indexes in reverse way. Don't forget to put a space between two values.

    int arraySize, arrayValueAtIndex;
    scanf("%d", &arraySize);

    if (arraySize >= 1 && arraySize <= 100000)
    {
        int ourArray[arraySize];

        for (int i = 0; i < arraySize; i++)
        {
            scanf("%d", &arrayValueAtIndex);
            if (arrayValueAtIndex >= 1 && arrayValueAtIndex <= 1000) {
                ourArray[i] = arrayValueAtIndex;
            }
        }

        for (int i = arraySize-1; i >= 1; i-=2)
        {
            printf("%d", ourArray[i]);

            if(i > 1) {
                printf(" ");
            }
        }
    }
    

    return 0;
}
