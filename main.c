#include <stdio.h>

int main() {
    // Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
    // Only one line containing two numbers A, B (1  ≤  A, B  ≤  10^6)
    
    int a;
    int b;
    scanf("%d %d", &a, &b);

    if(a>=1 && b>=1 && a<=1000000 && b<=1000000){
        if ( a % b == 0 || b % a == 0) {
            printf("Multiples");
        }else {
            printf("No Multiples");
        }
    }
    
    return 0;
}
