#include <stdio.h>
#include "maxMin.h"

void maxMin() {
	int a, b, c;

	printf("Enter a: ");
	scanf_s("%d\n", &a);
	printf("Enter b: ");
	scanf_s("%d\n", &b);
	printf("Enter c: ");
	scanf_s("%d\n", &c);

	if (a>b &a>c&b>c) {
		printf("Max = a = %d\n", a);
		printf("Min = c = %d\n", c);
	}else if(b>a & b>c & a>c){
		printf("Max = b = %d\n", b);
		printf("Min = c = %d\n", c);
	}else if(a > b& a > c& b < c) {
		printf("Max = a = %d\n", a);
		printf("Min = b = %d\n", b);
	}else if(b > a& b > c& a < c) {
		printf("Max = b = %d\n", b);
		printf("Min = a = %d\n", a);
	}else if(c>a&c>b&a>b) {
		printf("Max = c = %d\n", c);
		printf("Min = b = %d\n", b);
	}
	else {
		printf("Max = c = %d\n", c);
		printf("Min = a = %d\n", a);
	}

}