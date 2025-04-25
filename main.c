#include <stdio.h>
#include <string.h>

int main() {

    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // this thing outputs:
    // -1 -> if first string is smaller
    // 0 -> if both strings are equal
    // 1 -> if second string is bigger
    printf("%d", strcmp(a,b));

    return 0;
}