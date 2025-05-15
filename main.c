#include <stdio.h>
#include <string.h>

void vowelCounter(char text[], int length, int index, int *count) {
    if (index == length) {
        printf("%d", *count);
        return;
    }
    char ch = text[index];
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        *count = *count + 1;
    }
    
    vowelCounter(text, length, index+1, count);
}

int main() {

    char text[201];
    int vcount = 0;
    fgets(text, 200, stdin);

    vowelCounter(text, strlen(text), 0, &vcount);

    return 0;
}