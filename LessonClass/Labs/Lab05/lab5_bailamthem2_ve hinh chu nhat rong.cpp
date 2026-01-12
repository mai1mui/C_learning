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
	for(int i=0;i<row;i++)//vòng lặp ngoài chạy qua từng dòng từ 0 đến rộng - 1, với i đại diện cho số thứ tự dòng.
				{
					for(int j=0;j<col;j++)//vòng lặp trong chạy qua từng cột trong mỗi dòng từ 0 đến dài - 1, với j đại diện cho số thứ tự cột
								{
									if(i==0 ||//Dòng đầu tiên.
											 i==row-1 || //Dòng cuối cùng.
												j==0 ||//Cột đầu tiên.
											 j==col-1)//Cột cuối cùng.
											{
												printf("*");
											}
											else
											{
												printf(" ");
											}
								}
					printf("\n");
				}
return 0;
}
