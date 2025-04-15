#include <stdio.h>

int main() {    

    int num, calc;
    scanf("%d", &num);

    for (int i = 1; i <= 12; i++) {
        calc = num * i;
        printf("%d * %d = %d\n", num, i, calc);
    }

    return 0;
}
