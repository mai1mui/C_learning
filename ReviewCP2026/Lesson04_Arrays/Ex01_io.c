#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Ex01_io.h"

void Ex01_io(void) {
    int a[100];
    int n;

	//kiểm soát n trong khoảng 1-100
    do {
        printf("Enter number of elements n: ");
        //kiểm tra scanf có đọc được không
        if (scanf("%d", &n) != 1) return;
    } while (n <= 0 || n > 100);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
