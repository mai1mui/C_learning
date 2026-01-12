#include <stdio.h>

int main() {
    int number, tens, units;

    printf("Enter a two-digit integer: ");
    scanf("%d", &number);

    // Check if the number has exactly two digits
    if (number < 10 || number > 99) {
        printf("Please enter a valid two-digit integer.\n");
        return 1;
    }

    // Separate tens and units digits
    tens = number / 10;
    units = number % 10;

    // Print the tens part
    printf("The number is read as: ");
    switch (tens) {
        case 1: printf("Mười "); break;
        case 2: printf("Hai mươi "); break;
        case 3: printf("Ba mươi "); break;
        case 4: printf("Bốn mươi "); break;
        case 5: printf("Năm mươi "); break;
        case 6: printf("Sáu mươi "); break;
        case 7: printf("Bảy mươi "); break;
        case 8: printf("Tám mươi "); break;
        case 9: printf("Chín mươi "); break;
    }

    // Print the units part
    switch (units) {
        case 1: printf("một\n"); break;
        case 2: printf("hai\n"); break;
        case 3: printf("ba\n"); break;
        case 4: printf("bốn\n"); break;
        case 5: printf("năm\n"); break;
        case 6: printf("sáu\n"); break;
        case 7: printf("bảy\n"); break;
        case 8: printf("tám\n"); break;
        case 9: printf("chín\n"); break;
        case 0: 
            if (tens == 1) 
                printf("\n"); // For "Mười" (10)
            else 
                printf("lăm\n"); // For numbers ending in 0 like "Hai mươi"
            break;
    }

    return 0;
}
