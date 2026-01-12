#include <stdio.h>
#include "Ex05_MultiplicationTable.h"
//in bảng cửu chương
void Ex05_MultipTable() {
	printf("MULTIPLICATION TABLE\n");
	for (int i = 2;i <= 9;i++) {
		for (int j = 1;j <= 10;j++) {
			printf(" %d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}