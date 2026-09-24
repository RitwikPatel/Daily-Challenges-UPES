
#include <stdio.h>

int main() {
    int n, firstDigit, lastDigit, swappedNumber, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    lastDigit = n % 10;
    temp = n;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

    swappedNumber = lastDigit;
    temp = n / 10;
    while (temp >= 10) {
        swappedNumber *= 10;
        temp /= 10;
    }
    swappedNumber = swappedNumber * 10 + firstDigit;

    printf("Number after swapping first and last digit is: %d\n", swappedNumber);

    return 0;
}