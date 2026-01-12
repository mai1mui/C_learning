#include <stdio.h>
#include <conio.h>
/*
Viết chương trình tìm giá trị lớn nhất trong 3 số nguyên a, b, c nhập từ bàn phím.
*/
int main()
{
	int a,b,c;
	printf("Nhap so nguyen thu nhat: ");
		scanf("%d",&a);
	printf("\nNhap so nguyen thu hai: ");
		scanf("%d",&b);
	printf("\nNhap so nguyen thu ba: ");
		scanf("%d",&c);	
		
		if(a>b && a>c)
			{
				printf("\n%d la so nguyen lon nhat",a);
			}
		if(b>a && b>c)
			{
				printf("\n%d la so nguyen lon nhat",b);
			}
		if(c>b && c>a)
			{
				printf("\n%d la so nguyen lon nhat",c);
			}
getch();

return 0;
}
