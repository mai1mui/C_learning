#include <stdio.h>
#include <string.h>
/*
*/
int main()
{
	//khai báo 2 chuỗi
	char str1[50];
	char str2[50];
	int ketqua;
	//nhập giá trị hai chuỗi
	printf("nhap chuoi thu nhat: ");
	gets(str1);
	printf("nhap chuoi thu hai: ");
	gets(str2);
	//hiển thị hai chuỗi trước khi gọi hàm
	printf("hai chuoi truoc khi goi ham: \n+str1:%s\n+str2:%s",str1,str2);
	//gọi hàm strcmp() <= #include <string.h>
	ketqua=strcmp(str1,str2);
	//hiển thị giá trị hai chuỗi sau khi gọi hàm
	if(ketqua<0)
			{
				printf("\nhai chuoi sau khi goi ham: \n+%s\n+%s",str1,str2);
			}
	else if(ketqua>0)
			{
				printf("\nhai chuoi sau khi goi ham: \n+%s\n+%s",str2,str1);
			}
	else 
			{
				printf("\nhai chuoi sau khi goi ham: \n%s va %s la nhu nhau",str1,str2);
			}
	
return 0;
}
