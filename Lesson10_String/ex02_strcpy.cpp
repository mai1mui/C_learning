#include <stdio.h>
#include <string.h>
/*
*/
int main()
{
	//khai báo 2 chuỗi
	char str1[50];
	char str2[50];
	//nhập giá trị hai chuỗi
	printf("nhap chuoi thu nhat: ");
	gets(str1);
	printf("nhap chuoi thu hai: ");
	gets(str2);
	//hiển thị hai chuỗi trước khi gọi hàm
	printf("hai chuoi truoc khi goi ham: \n+str1:%s\n+str2:%s",str1,str2);
	//gọi hàm strcpy() <= #include <string.h>
	strcpy(str1,str2);
	//hiển thị giá trị hai chuỗi sau khi gọi hàm
	printf("\nhai chuoi sau khi goi ham: \n+str1:%s\n+str2:%s",str1,str2);
return 0;
}
