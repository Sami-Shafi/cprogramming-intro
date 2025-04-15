#include <stdio.h>

int main() {
    // Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

    // For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

    //range: 999 < x <= 9999

    int num, first;
    scanf("%d", &num);
    first = num;

    if(num>999 && num<=9999){
        while (first >= 10) {
            first /= 10;
        }

        if (first % 2 == 0) {
            printf("EVEN");
        } else {
            printf("ODD");
        }
    }
    
    return 0;
}
