#include <stdio.h>
/*
*/
int main()
{
int num;
printf("Nhap gia tri: ");
scanf("%d",&num);

if(num>=0)
{
printf("%d la so duong",num);
}
else
printf("%d la so am:",num);

printf("\nThe End");

return 0;
}
