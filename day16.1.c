
#include <stdio.h>

int main() {
    int n, binary = 0, i = 1, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 2;
        binary += remainder * i;
        n /= 2;
        i *= 10;
    }

    printf("Binary representation is: %d\n", binary);

    return 0;
}