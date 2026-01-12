#include <stdio.h>
#include <math.h>
/*
Viết chương trình tính tổng bình phương các số nguyên từ 1 đến n
Sn  = 1^2 + 2^2 + … + n^2 với n nhập từ bàn phím

*/
int main()
{
		int n,sum=0;
		printf("Nhap so nguyen: ");
		scanf("%d",&n);

		for(int i=1;i<=n;i++)
		{
				sum+=i*i;
		}
		printf("1^2 + 2^2 + 3^2 +...+ %d^2 = %d ",n,sum);

return 0;
}
