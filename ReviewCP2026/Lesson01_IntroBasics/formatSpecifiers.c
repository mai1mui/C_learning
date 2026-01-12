#include <stdio.h>
#include "formatSpecifiers.h"

void formatSpecifiers() {
	int number = 42;//interger
	float pi = 3.14;//số thực
	char letter = 'A';//kí tự
	char name[] = "Mai";//chuỗi kí tự

	//In ra kết quả
	printf("Integer: %d\n", number);
	printf("Float:%.3f\n", pi);
	printf("Character: %c\n", letter);
	printf("String:%s", name);
	return 0;
}