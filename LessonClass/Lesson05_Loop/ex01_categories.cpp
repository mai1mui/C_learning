#include <stdio.h>
/*
chia 2 loai
1.fixed loop- biet duoc so lan chay| variable loop - k biet duoc so lan chay
	1.1 fixed				: for
	1.2 varible		: while. do...while (repeat...until)
2.check condition before- kiem tra dieu kien truoc khi chay|after- chay truoc 1 dieu kien roi kiem tra
	2.1	before		: for, while
	2.2 after			:do...while (repeat...until)
	----------------------------------------
	1.1 fixed loop
	syntax (cu phap) for (a;b;c)
																		{
																		
																		}
			a=initial value - chay tu dau? - khoi dau
			b=condition - chay toi dau thi dung? - dieu kien
			c=evaluated value - gia tri tang hay giam? - buoc nhay
	1.2 variable loop
																	while (condition)
																	{
																				lenh can chay
																				i++;
																	}
*/
int main()
{
/*for (int i=1;i<=10;i++)
{
	printf("%d.luong thang %d\n",i,i);
}
*/
/*int i=1;

	while (i<=10)
	{
	printf("%d.luong thang %d\n",i,i);
	i++;
	}
	*/
	/*
	for(int i=1;i<=10;i++)
{
	if(i%2==0)
	{
		printf("%d\n",i);
	}
}
	*/
	int i=1;//neu gan i=11, do...while se chay 1 lan roi dung vi do...while chay truoc roi kiem tra dieu kien

	do
	{
	printf("%d.luong thang %d\n",i,i);
	i++;
}
	while (i<=10);
return 0;
}
