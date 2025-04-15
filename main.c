#include <stdio.h>

int main() {
    // Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case. Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.

    char letter;
    scanf("%c", &letter);
    int letterCode = letter;

    if(letterCode <= 57 && letterCode >= 48) {
        printf("IS DIGIT");
    }else {
        printf("ALPHA \n");
        if(letterCode <= 122 && letterCode >= 97){
            printf("IS SMALL");
        } else if(letterCode <= 90 && letterCode >= 65) {
            printf("IS CAPITAL");
        }    
    }
    
    return 0;
}
