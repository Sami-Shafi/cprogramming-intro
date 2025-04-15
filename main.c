#include <stdio.h>

int main() {
    //Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

    // Input
    // Only one line containing a number N (1 ≤ N ≤ 103).

    // Output
    // Print the answer according to the required above. If there are no even numbers print -1.

    int n;
    scanf("%d", &n);

    int evenExists = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 0) {
            if(evenExists == 0) {
                evenExists = 1;
            }
            printf("%d", i);
            if (n-i > 1) {
                printf("\n");
            }
        }
    }
    if (evenExists == 0) {
        printf("-1");
    }
    
    
    return 0;
}
