#include <stdio.h>
#include "basicsOperators.h"

void basicsOperators() {
	int a = 10, b = 3;
	// Arithmetic Operators
	printf("Add: a+b = %d\n", a + b);
	printf("Sub: a-b = %d\n", a - b);
	printf("Mul: a*b = %d\n", a * b);
	printf("Div: a/b = %d\n", a / b);
	printf("Mod: a%%b = %d\n", a % b);
	// Relational Operators
	printf("Greater: a>b =%d\n", a > b);
	printf("Less: a<b =%d\n", a < b);
	printf("Equal: a==b =%d\n", a == b);
	// Logical Operators
	if (a >= b) {
		printf("True: a>=b");
	}
	else {
		printf("False");
	}
	// Increment and Decrement Operators
	int c = a++;
	printf("Dùng rồi mới tăng: c=a++ = %d\n", c);

	int d = ++b;
	printf("Tăng rồi mới dùng: d = ++a = %d\n", d);

	//Conditional Operator
	int max = (a > b) ? a : b;
	printf("Max = = (a > b) ? a : b = %d\n", max);

	//Pointer Operators
	int* p = &a;
	printf("Truy xuất giá trị tại địa chỉ a = *p = %d\n", *p);
	printf("Lấy địa chỉ a = &a =%p\n", &a);

	//Member Access Operators
	struct Student {
		int age;
	};
	struct Student s;
	s.age = 20;
	printf("Truy xuất giá trị age của struct Student = truy cập trực tiếp s.age = %d\n", s.age);

	struct Student* ptr = &s;
	ptr->age = 21;
	printf("Truy xuất giá trị age của struct Student = truy cập thông qua pointer p->age = %d\n", ptr->age);
}

