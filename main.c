#include <stdio.h>

int main() {
    // Given a number N, and N numbers, find maximum number in these N numbers.

    // Input
    // First line contains a number N (1 ≤ N ≤ 103).

    // Second line contains N numbers Xi (0 ≤ Xi ≤ 109).
    
    int count, highest; 
    scanf("%d", &count);

    int currentNum;
    for (int i=1; i<=count; i++) {
        scanf("%d", &currentNum);
        if (i == 1 || currentNum > highest) {
            highest = currentNum;
        }
    }
    printf("%d", highest);

    return 0;
}
