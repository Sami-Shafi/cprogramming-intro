#include <stdio.h>

int main() {

    int arraySize, highestValue;
    scanf("%d %d", &arraySize, &highestValue);

    int ourArray[arraySize], iterationsArray[100001] = {0};
    
    for (int i = 0; i < arraySize; i++)
    {
        int insertedVal;
        scanf("%d", &insertedVal);
        ourArray[i] = insertedVal;
    }
    
    for (int i = 0; i < arraySize; i++)
    {
        int count = ourArray[i];
        iterationsArray[count-1]++;
    }

    for (int i = 0; i < highestValue; i++)
    {
        printf("%d\n", iterationsArray[i]);
    }

    return 0;
}