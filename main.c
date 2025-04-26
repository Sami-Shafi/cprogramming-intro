#include <stdio.h>
#include <string.h>

int main() {

    // You will be given a string S as input contains only small English alphabets. You need to tell the number of consonants in it. The string will not contain any spaces.

    // Note: Vowels are a,e,i,o and u. The rest are called consonants.

    char s[100001];
    scanf("%s", s);

    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            continue;
        }
        count++;
    }

    printf("%d", count);

    return 0;
}