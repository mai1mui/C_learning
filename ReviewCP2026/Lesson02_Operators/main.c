#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "basicsOperators.h"
#include "maxMin.h"
#include "celciusToFahrenheit.h"

int main() {
	int choice;
	printf("MENU\n");
	printf("1. Basics Operators\n");
	printf("2. Find max and min of three numbers\n");
	printf("3. Celsius to Fahrenheit\n");
	printf("0. Exit\n");

	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		basicsOperators();
		break;
	case 2:
		maxMin();
		break;
	case 3:
		celciusToFahrenheit();
		break;
	case 0:
		printf("Exiting...\n");
		break;
	default:
		printf("Invalid choice. Exiting...\n");
		break;
	}

	return 0;
}