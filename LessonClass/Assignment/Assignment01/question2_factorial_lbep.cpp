#include <stdio.h>
	/*
Factorial number: tich cua cac so nguyen duong tu 1-n
ex 5! = 5 x 4 x 3 x 2 x 1 = 120
   4! = 4 x 3 x 2 x 1
*/
int main()
{
int n;//KHAI BAO BIEN SO NGUYEN

int result = 1;//KHAI BAO =1 VI factorial LA TICH CAC SO NGUYEN TU 1-n
printf("Enter an integer: ");
scanf("%d",&n);
for (int i=0;i<=n-1;i++)
				{
					result = result * (n-i);
				}
				printf("Factorial: %d! = %d",n,result);
return 0;
}
