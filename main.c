#include <stdio.h>
#include <string.h>

void printSumInputs(size) {
    int nums[size], sum = 0;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }
    printf("Total: %d", sum);
}

int main() {

    int times;
    scanf("%d", &times);
    printSumInputs(times);
    
    return 0;
}
