#include <stdio.h>

int main()
{
	int max;
	int n[1000];//KHAI BAO BO NHO CHUA MAX TU USER
	int cnt;//BIEN DEM
	float sum;
	float aver;//BIEN TRUNG BINH CONG
//NHAP SO LUONG SO NGUYEN TRONG MANG
	printf("Enter the size of the array: ");
	scanf("%d",&max);
//HIEN THI
	for(int i=0;i<max;i++)
				{
					printf("a[%d]: ",i);
					scanf("%d",&n[i]);
				}
	printf("Output the array: ");
	for(int i=0;i<max;i++)
				{
					printf("%d\t",n[i]);
				}
//DEM SO LE
	for(int i=0;i<max;i++)
				{
					if(n[i]%2!=0)//DIEU KIEN LA LE
					{
						sum+=n[i];
						cnt++;
					}
				}
	printf("\nNumber of the odd integer: %d",cnt);
//TINH TRUNG BINH CONG CAC SO NGUYEN LE
if (cnt == 0) 
			{
    printf("\nThere are no odd numbers.\n");
   } 
else 
			{
   aver = sum/cnt;
   printf("\nAverage of odd numbers: %.2f\n", aver);
   }
return 0;
}
