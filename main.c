#include <stdio.h>

int main() {

    // You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.

    int size;
    scanf("%d", &size);

    int a[size], first = 0, second = 0;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0 && a[i] % 3 == 0) {
            first++;
        }else if (a[i] % 3 == 0) {
            second++;
        }else if (a[i] % 2 == 0) {
            first++;
        }
    }

    printf("%d %d", first, second);

    return 0;
}