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
		int n[5],index, sum=0;
		for(int i=0;i<5;i++)
		{
			printf ("Please enter the %d number: ",i+1);
			scanf("%d", &n[i]);
		//Operator
			sum = sum+n[i];
		}
			printf("Sum of 5 numbers is: %d", sum);
				
			printf ("\nValue of the second entry: ");
			scanf("%d", &index);
			printf("%d entry value: %d",index,n[index-1]);
getch();
return 0;
}
