#include <stdio.h>
#include "Ex04_FindPair.h"
/*
Yêu cầu: tìm 1 số i<50, j<50 sao cho i*j=50. tìm thấy thì dừng 
*/

void Ex04_FindPair() {
	for (int i = 1;i <= 50;i++) {
		for (int j = 1;j <= 50;j++) {
			if (i*j==50) {
				printf("i= %d ; j =%d\n", i, j);
				break;
			}
		}
	}
}