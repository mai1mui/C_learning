#include <stdio.h>
#include <conio.h>
#include <math.h>
/*
Viết chương trình giải phương trình bậc 2: a*x2 + b*x +c với a, b, c nhập vào từ bàn phím (không xét trường hợp suy biến a = 0).
Tính delta = b * b – 4 * a * c;
-	Bước 3: So sánh delta với 0
-	Bước 4: kết quả nhỏ hơn 0 => phương trình vô nghiệm
-	Bước 5: kết quả bằng 0 => phương trình có nghiệm kép
o	x1 = x2 = -b / (2 * a)
-	Bước 6: kết quả lớn hơn 0 => phương trình có 2 nghiệm
o	x1 = (-b – sqrt(delta))/ (2*a)
o	x2  = (-b + sqrt(delta))/ (2*a)

*/
int main()
{
	float a,b,c,delta;
	printf("Enter an integer a: ");
	scanf("%f",&a);
	printf("\nEnter an integer b: ");
	scanf("%f",&b);
	printf("\nEnter an integer c: ");
	scanf("%f",&c);
	
	delta = b*b-4*a*c;
	
		if(delta==0)
		{
				printf("\nEquation with double roots : x1 = x2 = %.3f ",-b/(2*a));
		}
		else if(delta>0)
		{
				printf("\nEquation with two solutions :");
				printf("\nx1 = %.3f ",(-b - sqrt(delta))/ (2*a));
				printf("\nx2 = %.3f ",(-b + sqrt(delta))/ (2*a));
		}
		else
		{
				printf("\nEquation with no solution :");
		}
		
getch();
return 0;
}
