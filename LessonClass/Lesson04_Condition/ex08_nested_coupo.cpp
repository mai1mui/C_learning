#include <stdio.h>
//nested- co che long
// invoice-  hoa don
//quantity-so luong
//value- gia tri
//nested block-khoi long
int main()
{
int inv, qua;
printf("Enter invoice value: ");
scanf("%d",&inv);
printf("Enter quantity value: ");
scanf("%d",&qua);
//khoi long nam trong if
if(qua>=5)
{
		if(inv>=1000)
			{
				printf("Invoice value is: %d",inv);
				printf("\n=====COUPON=====");			
			}
			else
			{
				printf("Invoice value is: %d",inv);
			}
}
else
{
	printf("Invoice value is: %d",inv);
}
return 0;
}
