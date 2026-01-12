#include <stdio.h>
//nested- co che long
// invoice-  hoa don
//quantity-so luong
//value- gia tri
//nested block-khoi long
int main()
{
float invo, qua;
printf("Enter invoice value: ");
scanf("%.3f",&invo);
printf("Enter quantity value: ");
scanf("%.3f",&qua);


if((qua>5)||(invo>1000))
	{
		printf("Invoice value is: %d",invo);
		printf("\n=====COUPON=====");			
	}
			else
			{
				printf("Invoice value is: %d",invo);
			}

return 0;
}
