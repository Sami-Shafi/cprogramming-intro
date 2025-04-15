#include <stdio.h>

int main() {
    // Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

    // Note : difference between 'a' and 'A' in ASCII is 32 .

    char letter;
    scanf("%c", &letter);
    int letterCode = letter;

    char newLetter;
    if(letterCode <= 122 && letterCode >= 97){
        newLetter = letterCode-32;
        printf("%c", newLetter);
    } else if(letterCode <= 90 && letterCode >= 65) {
        newLetter = letterCode+32;
        printf("%c", newLetter);
    }
    
    return 0;
}
