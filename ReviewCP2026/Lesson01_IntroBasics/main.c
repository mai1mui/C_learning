#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "helloW.h"
#include "formatSpecifiers.h"
#include "myContact.h"
#include "areaRectangle.h"

int main() {
	//viết 1 menu gọi xử lý từng file bài tập theo từng hàm đã đặt tên
	int choice;
	printf("Menu:\n");
	printf("1. Hello World\n");
	printf("2. Format Specifiers\n");
	printf("3. myContact\n");
	printf("4. Area of the rectangle\n");
	printf("5. Exit\n");
	printf("Enter your choice : ");
	scanf("%d", &choice);
	switch (choice) {
		case 1:
			helloW();
			break;
		case 2:
			formatSpecifiers();
			break;
		case 3:
			myContact();
			break;
		case 4:
			areaRectangle();
			break;
		case 5:
			printf("Exiting the program.\n");
			break;
		default:
			printf("Invalid choice.\n");
	}
	return 0;
}