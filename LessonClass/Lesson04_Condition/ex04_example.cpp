#include <stdio.h>

int main()
{

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

int x;
x=0;
printf("Enter choice (1-3): ");
scanf("%d",&x);
if (x==1)
printf("\nQuestione 02");
else if (x==2)
printf("\nChoice is 03");
else if (x==3)
printf("\nProgram Exit");
else
printf("\nInvalid Choice");

return 0;
}
