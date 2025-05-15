#include <stdio.h>
#include <string.h>

int factorial(int n) {
    if (n == 1) {
        return 1;
    }

    return n * factorial(n-1);
}

int main() {

    int n, sum = 0;
    scanf("%d", &n);

    printf("%d", factorial(5));

    return 0;
}