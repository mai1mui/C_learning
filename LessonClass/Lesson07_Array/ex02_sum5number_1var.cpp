#include <stdio.h>
#include <conio.h>
/*
1.khai báo 5 biến
2.nhập giá trị 5 biến
3.tính tổng, hiển thị tổng 5 biến
ưu điểm
+khai báo được nhiều biến
+viết ít mã lệnh
nhược điểm
+chỉ truy xuất được gái trị cuối cùng
*/
int main()
{
		int n, sum;
		for(int i=0;i<5;i++)
		{
			printf ("Please enter the %d number: ",i+1);
			scanf("%d", &n);
		//Operator
			sum = sum+n;
		}
				printf("Sum of 5 numbers is: %d", sum);
getch();
return 0;
}
