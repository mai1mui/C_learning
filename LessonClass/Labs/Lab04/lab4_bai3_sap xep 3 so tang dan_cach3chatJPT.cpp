#include <stdio.h>
/*
Viết chương trình nhập vào 3 số thực. Hãy in 3 số ấy ra màn hình theo thứ tự tang dần (chỉ sử dụng if … else).
*/
int main()
{
	//gán biến
	float n1,n2,n3,temp;
	printf("Enter the first number: ");
	scanf("%f",&n1);
	printf("Enter the second number: ");
	scanf("%f",&n2);
	printf("Enter the second number: ");
	scanf("%f",&n3);
	//câu lệnh điều kiện
	if(n1<=n2 && n1<=n3)
			{
				if(n2<n3)
						{
							printf("%.2f\t%.2f\t%.2f",n1,n2,n3);
						}
				else
						{
							printf("%.2f\t%.2f\t%.2f",n1,n3,n2);
						}
			}
	 if(n2<=n1 && n2<=n3)
			{
				if(n1<=n3)
						{
							printf("%.2f\t%.2f\t%.2f",n2,n1,n3);
						}
				else
						{
							printf("%.2f\t%.2f\t%.2f",n2,n3,n1);
						}
			}
	 if(n3<=n1 && n3<=n2)
			{
				if(n1<=n2)
						{
							printf("%.2f\t%.2f\t%.2f",n3,n1,n2);
						}
				else
						{
							printf("%.2f\t%.2f\t%.2f",n3,n2,n1);
						}
			}
return 0;
}
