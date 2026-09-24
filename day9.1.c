#include <math.h>
#include <stdio.h>

int main(void)
{
	double a, b, c, discriminant;
	double root1, root2;

	printf("Enter the coefficients a, b and c: ");
	if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
		printf("Invalid input.\n");
		return 1;
	}

	if (a == 0) {
		printf("This is not a quadratic equation.\n");
		return 0;
	}

	discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("The equation has two distinct real roots.\n");
		printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
	} else if (discriminant == 0) {
		root1 = -b / (2 * a);
		printf("The equation has two equal real roots.\n");
		printf("Root 1 = Root 2 = %.2f\n", root1);
	} else {
		printf("The equation has two complex roots.\n");
		printf("Real part = %.2f\n", -b / (2 * a));
		printf("Imaginary part = %.2f\n", sqrt(-discriminant) / fabs(2 * a));
	}

	return 0;
}


