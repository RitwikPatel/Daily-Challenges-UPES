// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
    long long n, complement = 0, base = 1, digit;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n != 0) {
        digit = n % 10;
        if (digit == 0) {
            complement += 1 * base;
        }
        n /= 10;
        base *= 10;
    }

    printf("1's complement is: %lld\n", complement);

    return 0;
}