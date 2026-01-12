#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "celciusToFahrenheit.h"

void celciusToFahrenheit() {
	float celsius, fahrenheit;

	printf("Enter temperature in Celsius: ");
	scanf("%f",&celsius);

	fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
	printf("fahrenheit = (celsius * 9.0 / 5.0) + 32.0\n");
	printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
}