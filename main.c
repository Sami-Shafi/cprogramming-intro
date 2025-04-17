#include <stdio.h>

int main() {
    
    // You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

    // Input Format
    
    // First line will contain N.
    // Second line will contain N values named V.
    // Constraints
    
    // 1 <= N <= 10^5
    // -1000 <= V <= 1000
    // Output Format
    
    // Output the sum of positive numbers first, then sum of negative numbers.
    
    int N, sumP = 0, sumN = 0, temp;
    scanf("%d", &N);

    if(N >= 1 && N <= 100000) {
        for (int i = 1; i <= N; i++)
        {
            scanf("%d", &temp);
            if(temp >= -1000 && temp <= 1000) {
                if (temp >= 0)
                {
                    sumP += temp;
                }else {
                    sumN += temp;
                }
            }
        }

        printf("%d %d", sumP, sumN);
    }
    
    
    return 0;
}
