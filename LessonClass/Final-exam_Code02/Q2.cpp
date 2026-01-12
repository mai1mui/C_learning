#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>




int main() {
	double result = 1;
	int n,valid_input;
	do {
		printf("\nInput a number ([2,15]) :");
		valid_input = scanf("%d",&n);
		if (valid_input != 1) {
			printf("Invalid input, plz enter an integer.\n");
			fflush(stdin);
		}
		else if( n<2 || n>15) {
				printf("Wrong number, plz try again\n");
			}
		}
		while(n < 2 || n>15  || valid_input!=1);
		for (int i  = 1; i<=n ; i++) {
			result = result*i;
		}
		printf("%d! = %.0f\n",n,result);
		return 0;
	}
