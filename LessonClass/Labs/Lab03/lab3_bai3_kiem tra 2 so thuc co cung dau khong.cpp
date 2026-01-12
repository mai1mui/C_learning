#include <stdio.h>
#include <conio.h>
/*
Viết chương trình nhập 2 số thực, kiểm tra xem chúng có cùng dấu hay không.
*/
int main()
{
	float a,b;
		printf("Enter first integer: ");
		scanf("%f",&a);
		printf("Enter second integer: ");
		scanf("%f",&b);
		
				if(a*b>0)
						{
						printf("\n%10.3f has the same sign as %10.3f",a,b);
						}
				else
						{
						printf("\n%10.3f does not have the same sign as %10.3f",a,b);
						}
						
getch();
return 0;
}
