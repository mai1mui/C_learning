#include <stdio.h>
/*
*/
int main()
{
int num,res;
printf("Nhap gia tri: ");
scanf("%d",&num);

res=num%2;
if(res==0)
printf("%d la so chan",num);
else if(res!=0)
printf("%d la so le",num);
else
printf("%d khong hop le",num);


return 0;
}
