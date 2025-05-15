#include <stdio.h>
#include <string.h>

void seperate(char str[], int index) {
    if(index == strlen(str)) {
        return;
    }
    printf("%c ", str[index]);
    seperate(str, index+1);
}

void keepWorking(int n) {
    if(n <= 0) {
        return;
    }
    char str[100001];
    scanf("%s", &str);
    seperate(str, 0);
    printf("\n");
    keepWorking(n-1);
}

int main() {

    int n;
    scanf("%d", &n);

    keepWorking(n);

    return 0;
}