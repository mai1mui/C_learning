#include <stdio.h>
#include <conio.h>
#include <math.h>
/*
Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó.
sd hàm fabs từ thư viện math.h
 if (a < 0) a = fabs(a);
*/
int main()
{
		float a,b,c;
		printf("Enter first integer: ");
		scanf("%f",&a);
		printf("Enter second integer: ");
		scanf("%f",&b);
		printf("Enter third integer: ");
		scanf("%f",&c);
		/*The values after replacing negatives with absolute values are
		- Các giá trị sau khi thay thế các giá trị âm bằng các giá trị tuyệt đối là
		*/
		if (a < 0) a = fabs(a);
		if (b < 0) b = fabs(b);
		if (c < 0) c = fabs(c);
		
		printf("\nThe values after replacing negatives with absolute values are: %.2f",a);
		printf("\nThe values after replacing negatives with absolute values are: %.2f",b);
		printf("\nThe values after replacing negatives with absolute values are: %.2f",c);
getch();
return 0;
}
