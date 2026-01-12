#include <stdio.h>
#include "Ex01_ConditionalLoop_BreakContinue.h"
/*
Bài 1
Yêu cầu:
In các số từ 1 tới 100 nhưng:
bỏ qua các số chia hết cho 7 (continue)
tính tổng các số đã in
dừng vòng lặp khi tổng vượt quá 1000 (break)
*/
void Ex01_ConditionalLoop_BreakContinue() {
	int sum = 0;

	for (int i=1; i <= 100;i++) {
		if (i % 7 == 0) { 
			continue;
		}
		printf("%d\t", i);

		sum += i;

		if (sum > 1000) { break; }


	}
	printf("\nSum = %d\n", sum);
}