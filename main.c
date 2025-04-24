#include <stdio.h>
#include <string.h>

int main() {
    // A program that will serially take all digits from a number and sum them. Like, if you put 23434 it will return sum of 2+3+4+3+4

    char s[1000001];
    scanf("%s", s);

    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        // when we get it with s[i] it will return the ASCII value. To get integer we have to subtract 48 from it
        sum += s[i]-'0';
    }

    printf("%d", sum);
    
    return 0;
}
