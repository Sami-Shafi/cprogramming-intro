#include <stdio.h>

int main() {

    // Given a number N
    // and an array A
    // of N
    // numbers. Determine if it's palindrome or not.

    // Note:
    // An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.
    
    int size, pal = 1;
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0, j = size-1; i < j; i++, j--) {
        if (array[i] != array[j])
        {
            pal = 0;
            break;
        }
    }

    if (pal == 1)
    {
        printf("YES");
    }else {
        printf("NO");
    }
    
    
    return 0;
}