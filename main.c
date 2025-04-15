#include <stdio.h>

int main() {


    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int lowerLimit = -100000;
    int upperLimit = 100000;

    if (a >= lowerLimit && a <= upperLimit && b >= lowerLimit && b <= upperLimit && c >= lowerLimit && c <= upperLimit) {
        int highest = a;
        if (b > a) {
            highest = b;
        }
        if (c > highest) {
            highest = c;
        }
        printf("%d", highest);
    }
    
    return 0;
}
