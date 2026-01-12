#include <stdio.h>
/*
Viết chương trình để in bảng cửu chương từ 2 đến 10.
*/
int main()
{
for(int i=2;i<=9;i++)
{
	printf("bang cuu chuong nhan %d\n",i);
	for(int j=1;j<=10;j++)
	{
	printf("%d x %d = %d\n",i,j,i*j);
	}
}


return 0;
}
