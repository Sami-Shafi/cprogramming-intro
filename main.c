#include <stdio.h>

int main() {
    
    int size;
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int index;
    scanf("%d", &index);
    for (int i = index; i < size-1; i++)
    {
        array[i] = array[i+1];
    }

    size-=1;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
