#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "areaRectangle.h"

void areaRectangle() {
	float length, width, area = 0;
	printf("Enter length of the rectangle:");
	scanf("%f", &length);
	printf("Enter width of the rectangle:");
	scanf("%f", &width);

	area = length * width;

	printf("Area of the rectangle: %.2f\n", area);
	return 0;
}