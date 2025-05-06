#include <stdio.h>
#include <string.h>

int main() {

    char word1[101], word2[101];
    scanf("%s %s", &word1, &word2);

    if(strlen(word1) == strlen(word2)) {
        for (int i = 0; i < strlen(word1); i++)
        {
            int j=0;
            int match;
            while (j < strlen(word2))
            {
                
                match = 0;
                if(word1[i] == word2[j]) {
                    match++;
                    word2[j] = "0";
                    break;
                }

                j++;
            }

            if (match == 0)
            {
                printf("No");
                break;
            }else if (strlen(word1)-i == 1) {
                printf("Yes");
            }

        }
    }
    
    return 0;
}
