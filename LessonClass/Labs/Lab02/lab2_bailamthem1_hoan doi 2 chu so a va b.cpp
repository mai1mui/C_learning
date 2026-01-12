#include <stdio.h>
#include <conio.h>
/*
Viết chương trình hoán đổi (swap) giá trị của 2 số a, b nhập từ bàn phím
-	Ví dụ, nhập vào a = 5, b = 7, xuất ra a = 7, b = 5
phương pháp: dùng biến tạm để lưu trữ
gán biến tạm = a
    a=b
    gán b=biến tạm
*/
int main()
{
	int a,b,t;
printf("Enter first integer a = ");
scanf("%d",&a);
printf("\nEnter second integer b = ");
scanf("%d",&b);

t=a;
a=b;
b=t;

printf("\nSwap the two integers: a = %d, b = %d",a,b);
getch();
return 0;
}
