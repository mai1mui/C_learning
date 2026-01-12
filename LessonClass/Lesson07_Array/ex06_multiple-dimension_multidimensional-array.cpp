#include <stdio.h>
#include <conio.h>
/*
*/
int main()
{
	//1.m?ng s? 2 chi?u
	int dong =3;
	int cot =4;
	int table[dong][cot] ={
																								{1, 2, 3, 4},
																								{5, 6, 7, 8},
																								{9,10,11,12}			
																							};
			//hien thi
			for(int row =0;row<dong;row++)
			{
				for(int col=0;col<cot;col++)
				{
					printf("%d\t",table[row][col]);
				}
				printf("\n\n\n");
			}
	//2.m?ng chu?i 2 chi?u
			char list[3][50] ={
																						"test1@email.com",
																						"test2@email.com",
																						"test3@email.com"
																					};
			for(int i=0;i<3;i++)
				{
					printf("%d.%s\n",i+1,list[i]);
				}
getch();
return 0;
}
