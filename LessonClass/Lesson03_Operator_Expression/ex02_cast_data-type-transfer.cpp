#include <stdio.h>
/*
*/
int main()
{
int num1=10;
float num2=20.0;
printf("Imlicit [incorrect]: %d+%.2f=%d\n",num1,num2,num1+num2);//error
printf("Imlicit [correct]: %d+%.2f=%.2f\n",num1,num2,num1+num2);
printf("Exlicit : %d+%.2f=%d\n",num1,num2,num1+(int)num2);//ep kieu
printf("Exlicit : %d+%.2f=%d\n",num1,num2,(int)(num1+num2));//recommentdation
return 0;
return 0;
return 0;

}
