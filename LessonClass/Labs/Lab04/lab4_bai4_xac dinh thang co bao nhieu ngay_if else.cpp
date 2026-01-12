#include <stdio.h>
//Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày.
int main() {
    int month, year, days;

    // Nhập tháng và năm
    printf("Enter a month number (1-12): ");
    scanf("%d", &month);
    printf("Enter a year number: ");
    scanf("%d", &year);

    // Kiểm tra số ngày trong tháng
    if (month < 1 || month > 12) {
        printf("Error.\n");
        return 1;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month == 2) {
        // Kiểm tra năm nhuận cho tháng 2
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;  // Năm nhuận
        } else {
            days = 28;  // Không phải năm nhuận
        }
    }

    printf("Month %d, year  %d has %d days.\n", month, year, days);
    return 0;
}
