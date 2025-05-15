#include <stdio.h>
#include <string.h>

void executeMath(int n) {
    if (n <= 0) {
        return;
    }

    long long int total;
    int a,b,c;
    scanf("%lld %d %d %d", &total, &a, &b, &c);
    long long int mul = a*b*c;
    long long int potentialAns = total / mul;
    
    if (mul == 0) {
        printf("-1\n");
    } else if (total % mul == 0) {
        printf("%lld\n", potentialAns);
    } else {
        printf("-1\n");
    }

    executeMath(n-1);
}


int main() {

    int n;
    scanf("%d", &n);

    executeMath(n);

    return 0;
}