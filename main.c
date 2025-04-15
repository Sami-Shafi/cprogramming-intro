#include <stdio.h>

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int lowerLimit = -100000;
    int upperLimit = 100000;

    if (a >= lowerLimit && a <= upperLimit && b >= lowerLimit && b <= upperLimit && c >= lowerLimit && c <= upperLimit) {
        int highest = a;
        int lowest = b;
        if (b > a) {
            highest = b;
            lowest = a;
        }
        if (c > highest) {
            highest = c;
        }
        if (c < lowest) {
            lowest = c;
        }
        printf("%d %d", lowest, highest);
    }
    
    return 0;
}
