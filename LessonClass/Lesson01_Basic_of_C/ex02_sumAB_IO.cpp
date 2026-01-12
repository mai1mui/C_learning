#include <stdio.h>
#include <conio.h>
int main ()
{

		int a, b, c, d, e, sum;
		printf ("Please enter the first number: ");
		scanf("%d", &a);
		printf("Please enter the second number: ");
		scanf("%d", &b);
		printf ("Please enter the third number: ");
		scanf("%d", &c);
		printf("Please enter the fourth number: ");
		scanf("%d", &d);
		printf("Please enter the fifth number: ");
		scanf("%d", &e);
	//Operator
		sum = a+b+c+d+e;
	
		printf("Sum of 5 numbers is: %d", sum);
	
	getch();
return 0;
}

