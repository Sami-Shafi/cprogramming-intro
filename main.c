#include <stdio.h>
#include <string.h>

// You will be given an array A, and the size of that array N. You need to write a function named odd_even() and take input inside that function. The function won't return anything. You need to count the number of even values and number of odd values in that array and print inside the function.

void odd_even(){

    int size;
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); 
    }

    int ec = 0, oc = 0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==0) {
            ec++;
        }else{
            oc++;
        }
    }

    printf("%d %d", ec, oc);
}

int main() {

    odd_even();

    return 0;
}