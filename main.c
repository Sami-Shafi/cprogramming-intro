#include <stdio.h>
#include <string.h>

int main() {

    char a[101], b[101];
    scanf("%s %s", &a, &b);

    for (int i = 0; i < 101; i++) {
        if(a[i] == "\0" && b[i] == "\0") {
            printf("Both Strings are the same!");
        }else if(a[i] == "\0" || a[i] < b[i]) {
            printf("A is smaller");
        }else if (b[i] == "\0" || b[i] < a[i]) {
            printf("B is smaller");
        }else if (a[i] == b[i]) {
            continue;
        }
        break;
    }

    return 0;
}