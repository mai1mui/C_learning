#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Ex02_evenOdd.h"

void Ex02_evenOdd() {
	int number;
	printf("Enter number: ");
	scanf("%d", &number);

	printf("Even numbers from 1 to %d are: \n", number);
	for (int i = 1;i <= number;i++) {
		if (i%2==0) {
			printf("%d\t", i);
		}
	}
}