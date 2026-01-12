#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
/*
chuong trinh chay 10 lan
1. int i=0; i<=9; i++;
2. int i=0; i<10; i++;
3. int i=1; i<=10; i++;
4. int i=1; i<11; i++;
*/
int main()
{
		char ch;
		int n;
		do
		{
			printf("Enter line number: ");//nhập số dòng
		scanf("%d",&n);
			if(n<10)
				{
					for(int y=1;y<=n;y++)
				{
					for (int x=1;x<=y;x++)
					{
						printf("*\t");
					}
						printf("\n\n\n");
				}
				}
			else
				{
						printf("You cannot enter more than 10 lines ! ");//bạn không thể nhập quá 10 dòng
				}
			getchar();
			printf("\nContinue? (y/n)");
			ch = getchar();
			ch = tolower(ch);
					if(ch != 'y')
							{
											exit(0);
							}
		}
		while(n<10);
		
		getch();
return 0;
}
