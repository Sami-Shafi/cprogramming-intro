#include <stdio.h>
#include <string.h>

int main() {

    int size, sum;
    scanf("%d", &size);
    int arr[size];
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &sum);
    

    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]+arr[j]==sum) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
    
    
    return 0;
}
