#include <stdio.h>
/*
Viết chương trình in ra tam giác cân có độ cao h
1.	Tam giác cân đặc nằm giữa màn hình
2.	Tam giác cân rỗng nằm giữa màn hình
3.	Tam giác  vuông cân đặc
4.	Tam giác  vuông cân rỗng.
*/
int main()
{
	int high;
	printf("Nhap chieu cao tam giac: ");
	scanf("%d",&high);
	
	for(int x=0;x<high;x++)
				{
					// In khoảng trắng để căn giữa tam giác
					for(int y=0;y<high-x-1;y++)
								{
									printf(" ");
								}
					// In viền ngoài của tam giác
					for(int k=0;k<2*x+1;k++)
								{
									//in dấu * ở cạnh trái, cạnh phải và dòng cuối
									if(k==0 || k==2*x || (x==high-1))//cạnh trái k=0, cạnh phải k=2x, dòng cuối x=high-1
											{
												printf("*");
											}
									else
											{
												//các vị trí bên trong để trống
												printf(" ");
											}
								}
					// Xuống dòng để bắt đầu dòng tiếp theo
					printf("\n");
				}
	
return 0;
}
