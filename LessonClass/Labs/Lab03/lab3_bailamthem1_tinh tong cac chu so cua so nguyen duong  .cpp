#include <stdio.h>

int sumOfDigits(int n) //Hàm này nhận một số nguyên n và trả về tổng các chữ số của nó.
{
    int sum = 0;
    while (n > 0) 
				{
        sum += n % 10;  // Cộng chữ số cuối cùng vào sum
        n /= 10;        // Loại bỏ chữ số cuối cùng
    }
    return sum;
}

int main() 
{
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d", &n);
    
    if (n < 0) 
							{
        printf("Vui lòng nhập một số nguyên dương.\n");
    			} 
				else 
							{
        int result = sumOfDigits(n);
        printf("Tổng các chữ số của %d là: %d\n", n, result);
    			}
    return 0;
}
