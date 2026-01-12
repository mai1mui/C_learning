#include <stdio.h>
/*
Tính tổng các số nguyên từ 1 đến n
Sn = 1 + 2 + … + n với n nhập từ bàn phím

*/
int main()
{
	int n,sum=0;
printf("Nhap so nguyen: ");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
	sum+=i;
	
}
printf("1 + 2 + 3 +...+ %d = %d: ",n,sum);

return 0;
}
