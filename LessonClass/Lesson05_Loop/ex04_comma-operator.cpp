#include <stdio.h>

int main()
{
	/*
	int ch=65;
for (int i=1;i<4;i++)
ch=ch+2*i;
printf("%c\t",ch);
*/
//dung toan tu dau phay

for (int i=1,ch=65;i<4;i++,ch+=2*i)

printf("%c\t",ch);
return 0;
}
