#include <stdio.h>
#include <string.h>
/*
*/
int main()
{
	//khai báo 1 con số
	char num[1000];
	//nhập giá trị con so
	printf("nhap mot so nguyen: ");
	gets(num);
	//ket luan con so co bao nhieu chu so
	printf("so chu so cua %s la: %d\n",num,strlen(num));
	
return 0;
}
