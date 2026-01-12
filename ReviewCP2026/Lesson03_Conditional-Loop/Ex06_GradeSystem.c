#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Ex06_GradeSystem.h"
//xếp hạng học lực
void Ex06_GradeSystem() {
	float grade;
	printf("Enter your grade: ");
	scanf("%f", &grade);
	if (grade>=8) {
		printf("Grade: A");
	}
	else if (grade>=6.5 & grade<8) {
		printf("Grade: B");
	}
	else { printf("Grade C: "); }
}