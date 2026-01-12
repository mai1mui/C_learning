#include <stdio.h>

int main() { // Sửa từ void main() thành int main()
    int var = 500, *ptr_var;
    /* var is declared as an integer and ptr_var as a pointer pointing to an integer */
    ptr_var = &var; /* stores address of var in ptr_var */
    
    /* Prints value of variable (var) and address where var is stored */
    printf("The value %d is stored at address %p:", var, &var); // Sửa dấu ngoặc kép

    /* Prints value stored in ptr variable (ptr_var) and address where ptr_var is stored */
    printf("\nThe value %p is stored at address: %p", ptr_var, &ptr_var); // Sửa dấu ngoặc kép và kiểu dữ liệu

    /* Prints value of variable (var) and address where var is stored, using pointer to variable */
    printf("\nThe value %d is stored at address: %p", *ptr_var, ptr_var); // Sửa dấu ngoặc kép và kiểu dữ liệu
    
    return 0; // Đảm bảo return 0 trong hàm main
}
