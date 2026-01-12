#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>



char askToReturnToMenu() {
	char select_opt;

	// Vòng lặp kiểm tra xem người dùng có nhập đúng 'Y' hoặc 'N'
	do {
		printf("\nDo you want to come back to the menu? (Y/N) : ");
		fflush(stdin);  // Xóa ký tự xuống dòng trong bộ đệm
		scanf("%c", &select_opt);

		if (select_opt != 'Y' && select_opt != 'y' && select_opt != 'N' && select_opt != 'n') {
			printf("Invalid selection! Please enter 'Y' or 'N'.\n");
		}

	} while (select_opt != 'Y' && select_opt != 'y' && select_opt != 'N' && select_opt != 'n');

	return select_opt;
}



int main() {
	int n_2,option = 4;
	char select_opt;
	do {
		printf("\n****************************************** \n");
		printf("* Select an appropriate action:\n");
		printf("*     1. R1\n");
		printf("*     2. R2\n");
		printf("*     3. R3\n");
		printf("****************************************** \n");
		printf("Enter choice (1 - 3): ");
		scanf("%d", &option);
		switch (option) {
			case 1: //Question 2
				printf("\n==>  Execute R1\n");
				select_opt = askToReturnToMenu();  // Gọi hàm askToReturnToMenu()
				if (select_opt == 'N' || select_opt == 'n') {
					printf("\n========= Exit the program. Goodbye! ========= \n");
					exit(0);  // Thoát khỏi chương trình
				}
				break;
			case 2: //Question 03
				printf("\n==>  Execute R2\n");
				select_opt = askToReturnToMenu();  // Gọi hàm askToReturnToMenu()
				if (select_opt == 'N' || select_opt == 'n') {
					printf("\n========= Exitthe program. Goodbye! ========= \n");
					exit(0);  // Thoát khỏi chương trình
				}
				break;
			case 3:
				printf("\n========= Exit the program. Goodbye! ========= \n");
				exit(0);
			default:
				printf("Invalid selection !");
				fflush(stdin);
				select_opt = askToReturnToMenu();  // Gọi hàm askToReturnToMenu()
				if (select_opt == 'N' || select_opt == 'n') {
					printf("\n========= Exit the program. Goodbye! ========= \n");
					exit(0);  // Thoát khỏi chương trình
				}
				break;
		}
	} while(option!=3);
	return 0;
}
