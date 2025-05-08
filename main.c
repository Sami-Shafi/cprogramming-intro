#include <stdio.h>
#include <math.h>

int printSpaces(spacesVar) {
    for (int i = 1; i <= spacesVar; i++)
    {
        printf(" ");
    }
}

int printStars(starsVar) {
    for (int i = 1; i <= starsVar; i++)
    {
        printf("*");
    }
}

int main() {

    int n;
    scanf("%d", &n);

    int step = 1, stars = 1, spaces = n-1;
    while (step <= n)
    {
        printSpaces(spaces);
        printStars(stars);
        printf("\n");
        
        spaces--;
        stars+=2;
        step++;
    }
    
    // clearing extra 2 stars after loop
    stars-=2;
    while (step > 0)
    {
        spaces++;
        printSpaces(spaces);
        printStars(stars);
        printf("\n");
        
        stars-=2;        
        step--;
    }
    
    
    return 0;
}
