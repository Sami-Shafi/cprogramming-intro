#include <stdio.h>
#include <string.h>

int sum(int num1, int num2) {
    int ans = num1 + num2;
    return ans;
}

int main() {

    int val = sum(20, 5);
    printf("%d", val);
    
    return 0;
}
