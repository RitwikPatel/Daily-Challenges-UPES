// Q53: Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

// */

#include <stdio.h>

int main(void) {
    for (int row = 0; row < 13; ++row) {
        puts("-");
    }
    for (int group = 0; group < 5; ++group) {
        int stars;

        if (group <= 2) {
            stars = 2 * group + 1;
        } else {
            stars = 2 * (4 - group) + 1;
        }

        for (int i = 0; i < stars; ++i) {
            puts("*");
        }

        if (group < 4) {
            putchar('\n');
        }
    }

    return 0;
}
