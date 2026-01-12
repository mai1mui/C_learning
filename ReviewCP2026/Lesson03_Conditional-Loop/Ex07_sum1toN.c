#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Ex07_sum1toN.h"
//tính tổng 1 to n
void Ex07_sum1toN() {
	int number;
	int sum = 0;
	int i;
	printf("Enter a number: ");
	scanf("%d", &number);
	for (i = 1;i <= number;i++) {
		sum += i;
	}
	printf("%d\n",sum);
}
