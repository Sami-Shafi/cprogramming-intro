#include <stdio.h>
#include <string.h>

int main() {

    // Given a string S. Print the origin string if it's not too long otherwise, print the special abbreviation.

    // Note: The string is called too long, if its length is strictly more than 10 characters. If the string is too long then you have to print the string in the following manner:

    // Print the first character in the string.
    // Print number of characters between the first and the last characters.
    // Print the last character in the string.
    // For example: "localization" will be "l10n", and "internationalization" will be "i18n".
    
    int size;
    scanf("%d", &size);

    char array[size][100];

    for (int i = 0; i < size; i++)
    {
        scanf("%s", &array[i]);
    }
    
    // loop in all words
    for (int i = 0; i < size; i++)
    {
        if(strlen(array[i]) > 10) {
            char firstDig = array[i][0];
            int length = 0;
            char lastDig;

            // loop inside each word
            for (int d = 0; d < strlen(array[i]); d++)
            {
                if (d > 0 && d < strlen(array[i])-1){
                    length++;
                }

                if (strlen(array[i])-d == 1) {
                    lastDig = array[i][d];
                }
            }
            
            printf("%c%d%c\n", firstDig, length, lastDig);
        }else {
            printf("%s\n", array[i]);
        }
    }
    
    
    return 0;
}