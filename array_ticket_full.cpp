#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Cấu trúc để lưu thông tin ngày
struct Date {
    int day;
    int month;
    int year;
};

// Cấu trúc để lưu thông tin vé phim
struct Ticket {
    char film_name[50];
    int price;
    Date date;
};

// Hàm nhập thông tin cho một vé
void inputTicket(Ticket &ticket) {
    printf("Enter film name: ");
    scanf(" %[^\n]s", ticket.film_name);  // Nhập tên phim
    printf("Enter price: ");
    scanf("%d", &ticket.price);  // Nhập giá vé
    printf("Enter day: ");
    scanf("%d", &ticket.date.day);  // Nhập ngày
    printf("Enter month: ");
    scanf("%d", &ticket.date.month);  // Nhập tháng
    printf("Enter year: ");
    scanf("%d", &ticket.date.year);  // Nhập năm
}

// Hàm hiển thị thông tin của một vé
void displayTicket(const Ticket &ticket) {
    printf("Film: %s\n", ticket.film_name);
    printf("Price: %d\n", ticket.price);
    printf("Date: %d-%d-%d\n", ticket.date.day, ticket.date.month, ticket.date.year);
}

int main() {
    int x;
    char ch;

    // Khai bao bien chuong trinh R1
    int n;

    // Khai bao bien chuong trinh R2
    int num_tickets;

    // Menu
    printf("*************************************************\n");
    printf("*  Select an appropriate action:\t\t*\n");
    printf("*  \t1. R1\t\t\t\t\t*\n");
    printf("*  \t2. R2\t\t\t\t\t*\n");
    printf("*  \t3. R3\t\t\t\t\t*\n");
    printf("*************************************************\n");

    do {
        printf("\nEnter Choice (1 - 3): ");
        scanf("%d", &x);
        
        switch(x) {
            case 1: {
                // Nhập giá trị vào mảng
                printf("Enter the size of the array: ");
                scanf("%d", &n);

                int arr[n];  // Khai báo mảng sau khi nhập kích thước
                int sum_odd = 0, count_odd = 0;

                for (int i = 0; i < n; i++) {
                    printf("a[%d]: ", i);
                    scanf("%d", &arr[i]);
                }

                printf("Output the array: ");
                // Hiển thị mảng và đếm số lẻ
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                    if (arr[i] % 2 != 0) {
                        sum_odd += arr[i];
                        count_odd++;
                    }
                }

                printf("\nNumber of odd integers: %d\n", count_odd);

                if (count_odd > 0) {
                    float avg_odd = (float)sum_odd / count_odd;
                    printf("Average of odd numbers: %.2f\n", avg_odd);
                } else {
                    printf("No odd numbers in the array.\n");
                }
                break;
            }
            case 2: {
                // Nhập và hiển thị thông tin vé
                printf("Enter the number of tickets: ");
                scanf("%d", &num_tickets);

                Ticket tickets[num_tickets];

                for (int i = 0; i < num_tickets; i++) {
                    printf("\nInput for ticket %d:\n", i + 1);
                    inputTicket(tickets[i]);
                }
				
				printf("\n==================================\n");
                printf("\nInformation of tickets:\n");

                for (int i = 0; i < num_tickets; i++) {
                    displayTicket(tickets[i]);
                    printf("\n");
                }
                break;
            }
            case 3:
                printf("\nProgram Exit");
                exit(0);
            default:
                printf("\nInvalid Choice");
                break;
        }

        // Tiếp tục hay không
        getchar(); // Đọc kí tự xuống dòng sau khi nhập `x`
        printf("\nContinue (y/n): ");
        ch = getchar();
        ch = tolower(ch);

        if(ch != 'y') {
            exit(0);
        }

    } while(x != 3);

    return 0;
}
