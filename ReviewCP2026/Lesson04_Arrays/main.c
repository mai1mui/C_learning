#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "Ex01_io.h"
#include "Ex02_SumOfElements.h"

int main(void) {
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Execute Ex01_io\n");
		printf("2. Execute Ex02_SumOfElements\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");

        // kiểm tra scanf
        if (scanf("%d", &choice) != 1)
            return 0;

        switch (choice) {
        case 1:
            Ex01_io();
            break;
        case 2:
            Ex02_SumOfElements();
			break;
        case 0:
            printf("Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (true);//#include <stdbool.h> để đọc được lệnh true
}
