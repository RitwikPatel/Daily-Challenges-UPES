// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0, remainder;
    int numDigits;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    numDigits = log10(n) + 1;

    while (n != 0) {
        remainder = n % 10;
        sum += pow(remainder, numDigits);
        n /= 10;
    }

    if (original == sum) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}