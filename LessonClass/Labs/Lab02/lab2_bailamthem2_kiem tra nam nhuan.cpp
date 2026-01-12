#include <stdio.h>
#include <conio.h>
/*
Kiểm tra năm nhuận với năm nhập vào từ bàn phím
năm nhuận là năm chia hết cho 4
*/
int main()
{
	int y;
	printf("Enter year value: ");
	scanf("%d",&y);
	
			if(y%4==0)
			{
					printf("\n%d is a leap year",y);
			}
			else
			{
					printf("\n%d is not a leap year",y);
			}
	
getch();
return 0;
}
