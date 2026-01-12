#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Ex03_PrimeCheck.h"

void Ex03_PrimeCheck() {
	//enter number
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	//check number : >1 and divisible by 1 and itself only
	if (number<=1) {
		printf("%d is not a prime number.\n", number);
	}
	else {
		int isPrime = 1;//gắn cờ hiệu
		for (int i = 2;i <= (number / 2);i++) {
			if (number%i==0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) {
			printf("%d is a prime number.\n", number);
		}
		else {
			printf("%d is not a prime number.\n", number);
		}
	}
}