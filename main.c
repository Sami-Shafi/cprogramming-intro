#include <stdio.h>
#include <string.h>

// You will be given an array A and the size of that array N. Take input in the main function. You need to write a function named count_before_one() which receives that array of integers and the size of that array and return type will be integer. The function counts the number of elements in that array until you find 1 and returns that count. Print that count in the main function.

int count_before_one(int arr[], int size){
    int ans;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 1) {
            ans = i;
            break;
        }
    }

    return ans;
}

int main() {

    int size;
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); 
    }

    printf("%d", count_before_one(arr, size));
    
    return 0;
}