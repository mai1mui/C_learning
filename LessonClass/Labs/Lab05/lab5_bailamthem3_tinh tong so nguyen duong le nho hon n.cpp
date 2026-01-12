#include <stdio.h>
/*
Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn n, n nhập từ bàn phím.
*/
int main()
{
	int n,sum=0;
	printf("Nhap so n: ");
	scanf("%d",&n);
	for(int i=1;i<n;i+=2)
				{
					sum+=i;
				}
	printf("Tong cac gia tri le nguyen duong nho hon %d la: %d",n,sum);
	
return 0;
}
