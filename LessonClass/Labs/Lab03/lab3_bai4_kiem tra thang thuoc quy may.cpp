#include <stdio.h>
#include <conio.h>
/*
Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm.
*/
int main()
{
		int m;
		printf("Enter the month of the year: ");
		scanf("%d",&m);
		
		switch(m)
		{
				case 1:
				case 2:
				case 3:
					printf("This is quarter 1 ");
					break;
				case 4:
				case 5:
				case 6:
					printf("This is quarter 2 ");
					break;
				case 7:
				case 8:
				case 9:
					printf("This is quarter 3 ");
					break;
				case 10:
				case 11:
				case 12:
					printf("This is quarter 4 ");
					break;
		}
getch();
return 0;
}
