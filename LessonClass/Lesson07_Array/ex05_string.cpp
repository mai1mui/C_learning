#include <stdio.h>
#include <string.h>
/*
*/
int main()
{
		//1.mảng ký tự
		char loichao[] = {'H','E','L','L','O'};
		//2.chuỗi
		char email[] = "emaill@mymail.com";
		//3.hiển thị như 1 mảng ký tự
		for(int i=0;i<strlen(loichao);i++)
			{
				printf("%c",loichao[i]);
			}
			
			for(int i=0;i<strlen(email);i++)
			{
				printf("\n");
				printf("%c\t",email[i]);
			}
		//4.hiển thị như 1 chuỗi
				printf("\nBien loi chao hien thi kieu chuoi: %s",loichao);
				printf("\nBien email hien thi kieu chuoi: %s",email);
return 0;
}
