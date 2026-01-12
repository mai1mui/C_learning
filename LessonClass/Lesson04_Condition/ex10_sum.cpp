#include <stdio.h>
/*
1.nhap so thu nhat
2.nhap so thu 2
3.nhap toan tu : +, -, *,/
4.dung switch hien thi ket qua theo toan tu
*/
int main()
{
float n1,n2;
char ch;

printf("Enter the first number: ");
scanf("%f",&n1);
printf("Enter the second number: ");
scanf("%f",&n2);

getchar();

printf("Enter the operator (+,-,*,/) : ");
ch=getchar();

switch(ch)
	{
		case '+':
			printf("%.3f %c %.3f = %.3f", n1,ch,n2,n1+n2 );
			break;
		case '-':
			printf("%.3f %c %.3f = %.3f", n1,ch,n2,n1-n2 );
			break;
		case '*':
			printf("%.3f %c %.3f = %.3f", n1,ch,n2,n1*n2 );
			break;
		case '/':
			printf("%.3f %c %.3f = %.3f", n1,ch,n2,n1/n2 );
			break;
	}
return 0;
}
