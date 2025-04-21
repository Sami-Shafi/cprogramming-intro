#include <stdio.h>

int main() {
    
    int size;
    scanf("%d", &size);

    int array[size+1];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int index, val;
    scanf("%d %d", &index, &val);
    for (int i = size; i > index; i--)
    {
        array[i] = array[i-1];
    }
    array[index] = val;

    for (int i = 0; i < size+1; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
