#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Ex02_SumOfElements.h"

#define MAX 100

void Ex02_SumOfElements(void) {
    int n, i;
    int sum = 0;
    int arr[MAX];

    printf("Enter the number of elements (1-100): ");
	// Kiểm tra scanf và giá trị n
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) {
        printf("Invalid input.\n");
        return;
    }
	// Nhập các phần tử mảng
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
		// Kiểm tra scanf
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return;
        }
    }
	// Tính tổng các phần tử
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of the elements is: %d\n", sum);
}
