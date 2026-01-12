#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Ex01_ConditionalLoop_BreakContinue.h"
#include "Ex02_evenOdd.h"
#include "Ex03_PrimeCheck.h"
#include "Ex04_FindPair.h"
#include "Ex05_MultiplicationTable.h"
#include "Ex06_GradeSystem.h"
#include "Ex07_sum1toN.h"

int main() {
	int choice;
	printf("MENU\n");
	printf("1. Ex01_ConditionalLoop_BreakContinue\n");
	printf("2. Ex02_evenOdd\n");
	printf("3. Ex03_PrimeCheck\n");
	printf("4. Ex04_FindPair\n");
	printf("5. Ex05_MultipTable\n");
	printf("6. Ex06_GradeSystem\n");
	printf("7. Ex07_sum1toN\n");
	printf("0. Exit\n");
	
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice) {
		case 1:
			Ex01_ConditionalLoop_BreakContinue();
			break;
		case 2:
			Ex02_evenOdd();
			break;
		case 3:
			Ex03_PrimeCheck();
			break;
		case 4:
			Ex04_FindPair();
			break;
		case 5:
			Ex05_MultipTable();
			break;
		case 6:
			Ex06_GradeSystem();
			break;
		case 7:
			Ex07_sum1toN();
			break;
		case 0:
			printf("Exiting the program.\n");
			break;
		default:
			printf("Invalid choice. Please try again.\n");
			break;
	}
	return 0;
}