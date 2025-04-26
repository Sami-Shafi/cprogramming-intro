#include <stdio.h>
#include <string.h>

int main() {

    // Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appeard in the village before the start of the work, and now there are M2 additional farmers. Can you determine how many fewer days it will take for them to complete the task?

    // Note: If the answer is a floating value, take the integer part of the answer.

    // Input Format
    // First line will contain T, the number of test cases.
    // For each test case, input will contain three positive integers M1, M2 and D.


    // Our Code Planning
    // Steps Plan:: initial number (10), additional number (5), initial days (15)
    // 10 joner lage 15 din, 1 joner lage 10*15 din, 10+5 joner lage (10*15)/(10+5) -> new days ?
    // new days - initial days = ans

    // first take t, for t times run a loop -> inside each loop -> run a scan loop & work with the ans

    int times;
    scanf("%d", &times);

    for (int iteration = 1; iteration <= times; iteration++)
    {
        int prevF, addF, initD;
        scanf("%d %d %d", &prevF, &addF, &initD);

        int totalF = prevF + addF;
        int initIndividualD = prevF * initD;
        int newD = initIndividualD / totalF;
        printf("%d\n", initD-newD);
    }

    return 0;
}
