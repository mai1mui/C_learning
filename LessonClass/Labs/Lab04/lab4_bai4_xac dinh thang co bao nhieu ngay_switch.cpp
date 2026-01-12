#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày.
*/
const int minYear=1900,maxYear=10000;
int main()
{
int year,month;
printf("Nhap so thang trong nam (1-12): ");
scanf("%d",&month);
if(month<1 || month>12)
		{
			printf("Wrong month, program exit.\n");
			exit(1);
		}
printf("Nhap so nam: ");
scanf("%d",&year);
if(year<minYear || year>maxYear)
		{
			printf("The year is between %d and %d\n ",minYear,maxYear);
			exit(1);
		}
switch (month)
{
	case 1:  	case 3: 	case 5: 	case 7:	 	case 8: 	case 10:
						printf("\nThis month has 31 days.");
						break;
	case 4: 	case 6: 	case 11: 	case 9:
						printf("\nThis month has 30 days.");
						break;
	case 2:
						int isLeafYear=(year%4==0 && year%100!=0 || (year%400==0));
						if(isLeafYear)
								{
									printf("\nThis month has 29 days.");
								}
						else
								{
									printf("\nThis month has 28 days.");
								}
						break;																					

}
return 0;
}

