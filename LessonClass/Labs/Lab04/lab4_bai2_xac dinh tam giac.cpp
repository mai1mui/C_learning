#include <stdio.h>
#include <conio.h>
/*
Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì.
enter the first side of the triangle - nhap canh thu nhat cua tam giac
 th1: a+b>c, a+c>b, b+c>a => đây là tam giác
 		1.1 a=b=c => tam giác đều
 		1.2 a=b hoặc a=c hoặc b=c => tam giác cân 
 		1.3 a2+b2=c2 hoặc a2+c2=b2 hoặc b2+c2=a2 => tam giác vuông
 				1.3.1 a=b hoặc a=c hoặc b=c =? tam giác vuông cân
 				1.3.2 còn lại => tam giác vuông thường
 		1.4 khác 3 th trên => đây là tam giác thường
 th2: a+b<=c, a+c<=b, b+c<=a => đây k phải là tam giác

*/
int main()
{
		float a,b,c;
		printf("Enter the first side of the triangle: ");
		scanf("%f",&a);
		printf("Enter the second side of the triangle: ");
		scanf("%f",&b);
		printf("Enter the third side of the triangle: ");
		scanf("%f",&c);
	
		//xây dựng thuật toán
		//loại 3 số không phải là tam giác
				if(a+b<=c || a+c<=b || b+c<=a)
				{
					printf("%.2f, %.2f, %.2f are not the three sides of a triangle ",a,b,c);
				}
				else
				{
					printf("%.2f, %.2f, %.2f are the three sides of a triangle ",a,b,c);
							//1.1 a=b=c => tam giác đều
							if(a==b==c)
							{
									printf("\nThis is an equilateral triangle ");//tam giác đều
							}
							else
							{
										/*1.3 a2+b2=c2 hoặc a2+c2=b2 hoặc b2+c2=a2 => tam giác vuông
 										1.3.1 a=b hoặc a=c hoặc b=c =? tam giác vuông cân
 										1.3.2 còn lại => tam giác vuông 
 									*/
										if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
										{
													if(a==b || a==c || b==c)
													{
															printf("\nThis is a right isosceles triangle. ");//tam giác vuông cân
													}
													else
													{
															printf("\nThis is an right triangle ");//tam giác vuông
													}
										//1.2 a=b hoặc a=c hoặc b=c => tam giác cân 
										}
										else if(a==b || a==c || b==c)
															{
																	printf("\nThis is an isosceles triangle ");//tam giác cân
															}
															else
															{
																	printf("\nThis is an regular triangle ");//tam giác thường
															}
							}
				}
				
getch();
return 0;
}
