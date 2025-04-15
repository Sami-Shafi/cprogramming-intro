#include <stdio.h>

int main() {
    
    // Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.
    // Note: The "Correct" password is the number 1999.

    // Input
    // The input contains several passwords.
    // Each line contains a number X (103 ≤ X ≤ 104 - 1).
    
    int pass = 1999, input;
    while (scanf("%d", &input) != EOF)
    {
        if (input == pass) {
            printf("Correct");
            break;
        }else {
            printf("Wrong\n");
        }
    }
    

    return 0;
}
