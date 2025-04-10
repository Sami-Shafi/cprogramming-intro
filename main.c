#include <stdio.h>
int main ()
{
    int sum = 0;
    int limit;
    int start = 1;
    printf("Please Enter Maximum Number: \n");
    scanf("%d", &limit);

    for (int i = start; i<=limit; i+=1) {
        sum += i;
        printf("Value Updated: %d \n", sum);
    }

    printf("--------- \n");
    printf("Total Summation: %d!", sum);

    return 0;
}