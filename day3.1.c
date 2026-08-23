#include <stdio.h>

int main() {
    int celsius, fahrenheit;

    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit=%d", fahrenheit);

    return 0;
}

//If we enter celsius=100
//we get Fahrenheit=212