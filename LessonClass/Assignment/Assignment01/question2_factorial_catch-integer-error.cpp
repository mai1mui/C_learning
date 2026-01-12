#include <stdio.h>
	/*
Factorial number: tich cua cac so nguyen duong tu 1-n
ex 5! = 5 x 4 x 3 x 2 x 1 = 120
   4! = 4 x 3 x 2 x 1
*/
int main()
{
int n;//KHAI BAO BIEN SO NGUYEN
int ketqua;
int result = 1;//KHAI BAO =1 VI factorial LA TICH CAC SO NGUYEN TU 1-n
do
					{
						printf("Enter an integer: ");
						ketqua=scanf("%d",&n);
						if (ketqua!= 1 || n<0) 
									{
											printf("The number is invalid. Please enter any key to continue.\n");
			      		getchar(); // XOA BO DEM NEU NHAP SAI
			      } 
						else 
									{
										break;//THOAT VONG NEU NHAP DUNG
									}	          
					}
while(ketqua!=1 || n<0);
for (int i=0;i<=n-1;i++)
										{
											result = result * (n-i);
										}
										printf("Factorial: %d! = %d",n,result);
return 0;
}
