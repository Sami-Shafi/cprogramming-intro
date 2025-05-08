#include <stdio.h>
#include <string.h>

int sum2Inputs() {
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    int ans = num1 + num2;
    return ans;
}

int main() {

    int val = sum2Inputs();
    printf("%d", val);
    
    return 0;
}
