#include <stdio.h>

int main() {
    // You will be given an integer N. If N is a positive number then print from 1 to N, otherwise print from N to 0.

    // Note: A positive number is a number that is strictly greater than 0.

    // Input Format

    // Input will contain only N.
    // Constraints

    // -10^5 <= N <= 10^5
    // Output Format

    // Output as asked in the question and don't forget to put a space between the values.
    
    int N, start, end;
    scanf("%d", &N);

    if(N > 0) {
        start = 1;
        end = N;
    }else {
        start = N;
        end = 0;
    }

    for (int i = start; i <= end; i++)
    {
        printf("%d", i);
        if (i < end)
        {
            printf(" ");
        }
                
    }

    return 0;
}
