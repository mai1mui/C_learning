#include <stdio.h>
#include <math.h>

int isPrime(int n) //Hàm này nhận vào một số nguyên n và trả về 1 nếu n là số nguyên tố, trả về 0 nếu không phải.
{
    if (n <= 1) return 0;          // Số nhỏ hơn hoặc bằng 1 không phải là số nguyên tố
    if (n <= 3) return 1;          // 2 và 3 là số nguyên tố
    if (n % 2 == 0 || n % 3 == 0) return 0; // Loại bỏ các số chia hết cho 2 hoặc 3

    // Kiểm tra các ước từ 5 đến sqrt(n)
    for (int i = 5; i <= sqrt(n); i += 6) 
								{
				     if (n % i == 0 || n % (i + 2) == 0) return 0;
				    }
    return 1;
}

int main() 
{
    int n;
    printf("Nhập một số nguyên dương: ");
    scanf("%d", &n);
    
    if (isPrime(n)) 
							{
			     printf("%d là số nguyên tố.\n", n);
			    } 
				else 
							{
			     printf("%d không phải là số nguyên tố.\n", n);
			    }
    
    return 0;
}
