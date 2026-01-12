#include <stdio.h>
#include <conio.h>//thu vien cua getch();
/*
*/
int main()
{
int max;
do
{
	printf("Enter a whole number: ");//Nhập một số nguyên
	scanf("%d",&max);
		if(max<0)
			{
				printf("This is not an integer !");//đây không phải là số nguyên
				printf("Condition: max >=0\n");
				printf("Press any key to continue....\n");
				getch();//dùng để kết thúc chương trình bằng bất kỳ phím nào trên bàn phím
			}
}
while(max<0);
	printf("\nNumber has just entered: %d",max);

return 0;
}
