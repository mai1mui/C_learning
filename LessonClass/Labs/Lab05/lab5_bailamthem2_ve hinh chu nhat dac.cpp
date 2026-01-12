#include <stdio.h>
/*
Viết chương trình in ra hình chữ nhật có kích thước m x n
a.	Hình chữ nhật đặc
b.	Hình chữ nhật rỗng.

*/
int main()
{
	int row,col;
	printf("Nhap chieu dai: ");
	scanf("%d",&col);
	printf("Nhap chieu rong: ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++)
				{
					for(int j=1;j<=col;j++)
								{
								printf("*");
								}
					printf("\n");
				}
return 0;
}
