#include <stdio.h>
int main ()
{
    int limit;
    int start = 1;
    printf("Please Enter Maximum Number: \n");
    scanf("%d", &limit);

    for (int i = start; i<=limit; i+=1) {
        printf("%d is ", i);
        if(i%2==0){
            printf("even! \n");
        }else {
            printf("odd! \n");
        }
    }

    return 0;
}