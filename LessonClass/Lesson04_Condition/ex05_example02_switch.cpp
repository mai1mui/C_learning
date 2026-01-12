#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
			int x;
						x=0;
			char ch;
			int n = 2;
			char ques [] = "Question";
						printf ("*********************************\n");
						printf ("====== C PROGRAM LANGUAGES ======\n");
						printf ("\t1-%s 0%d\n", ques, n);
						n++;
						printf ("\t2-%s 0%d\n", ques, n);
						n++;
						printf ("\t3-Exit\n");
						printf ("*********************************\n");
			do
			{	
									printf("Enter choice (1-3): ");
									scanf("%d",&x);
			
					switch (x)
					{
									case 1:
												printf("\nQuestione 02");
												break;
									case 2:
												printf("\nQuestione 03");
												break;
									case 3:
												printf("\nProgram Exit");
												exit(0);
									default:
												printf("\nYour choice is incorrect");//Lựa chọn của bạn không đúng
												break;
					}
					
							//Continue?
							getchar();
							printf("\nContinue? (y/n)");
							ch = getchar();
							ch = tolower(ch);
							
							if(ch != 'y')
							{
											exit(0);
							}
			}
			while(x!=3);
return 0;
}