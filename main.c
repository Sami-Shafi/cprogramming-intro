#include <stdio.h>
#include <math.h>

// You will be given an array A and the size of that array N. You need to make a copy of this array named B. Then sort the array B in ascending order.

// After that, you need to make another array C, where each index i (0 <= i < N) of array C is the absolute difference between array A[i] and B[i].

// That means,
// C[0] = |A[0] - B[0]|
// C[1] = |A[1] - B[1]|
// C[2] = |A[2] - B[2]|
// .....
// .....
// C[N-1] = |A[N-1] - B[N-1]|

// Here, || means the absolute value. After making the array C, print that array.

// Input Format
// First line will contain T, the number of test cases.
// First line of each test case will contain N.
// Second line of each test case will contain the array A.


// Sample Input 0
// 2
// 5
// 5 4 3 2 1
// 6
// 2 4 5 6 5 1

// Sample Output 0
// 4 2 0 2 4 
// 1 2 1 1 0 5 

void replaceArrVal(int arr[], int num1, int num2) {
    int temp = arr[num1];
    arr[num1] = arr[num2];
    arr[num2] = temp;
}

void printArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
}

int main() {

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int size;
        scanf("%d", &size);
        int arr1[size], arr2[size], arr3[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr1[i]);
            arr2[i] = arr1[i];
        }

        for (int i = 0; i < size-1; i++)
        {
            for (int j = i+1; j < size; j++)
            {
                if(arr2[i] > arr2[j]) {
                    replaceArrVal(arr2, i, j);
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            int val = arr1[i] - arr2[i];
            arr3[i] = abs(val);
        }

        printArr(arr3, size);
    }

    return 0;
}