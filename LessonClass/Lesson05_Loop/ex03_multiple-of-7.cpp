#include <stdio.h>
/*
boi so cua 7 tu 1-100
*/
int main()
{
	//case1: lenh lap for- lay nhung so chia het cho 7
for(int i=1;i<=100;i++)
	{
		if(i%7==0)
		{
			printf("%d\t",i);
		}
	}
	
	/*case2: lay nhung so khong chia het cho 7, bo qua, chi hien thi co chia het cho 7
	for(int i=1;i<=100;i++)
	{
		if(i%7!=0)
			{
			continue;
			}
		printf("%d\t",i);
	}
*/
/*case3: bat dau bang 7, 1 buoc nhay +7
for(int i=7;i<=100;i+=7)
		{
			printf("%d\t",i);
		}
		*/
return 0;
}
