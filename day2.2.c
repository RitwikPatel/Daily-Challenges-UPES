#include <stdio.h>

int main() {
    int r;

    scanf("%d", &r);

    printf("Area=%.2f, Circumference=%.2f", 3.14159 * r * r, 2 * 3.14159 * r);

    return 0;
}
//if we enter r=7
//we get Area=153.94, Circumference=43.98%