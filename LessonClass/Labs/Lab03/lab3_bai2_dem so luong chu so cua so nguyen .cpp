#include <stdio.h>
#include <conio.h>
/*
Hãy đếm số lượng chữ số của số nguyên dương n
*/
int main()
{
	int a,cnt,tmp;
	printf("Enter an integer : ");
	scanf("%d",&a);
	
	cnt=0;
	tmp=a;
	
			if(a==0)
				cnt=1;
				while(tmp!=0)
					{
					cnt++;
					tmp=tmp/10;
					}
	printf("\nNumber of digits of the number %d is : %d",a,cnt);
		
getch();
return 0;
}
