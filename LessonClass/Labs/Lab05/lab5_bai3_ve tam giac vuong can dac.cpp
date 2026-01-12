#include <stdio.h>
/*
Viết chương trình in ra tam giác cân có độ cao h
1.	Tam giác cân đặc nằm giữa màn hình
2.	Tam giác cân rỗng nằm giữa màn hình
3.	Tam giác  vuông cân đặc
4.	Tam giác  vuông cân rỗng.
*/
int main() 
{
    int h;

    // Nhập chiều cao của tam giác
    printf("Nhap chieu cao tam giac:  ");
    scanf("%d", &h);

    // Vòng lặp để in các dòng của tam giác
    for (int i = 1; i <= h; i++) 
								{
									// Vòng lặp để in các ký tự trong mỗi hàng
        for (int j = 1; j <= i; j++) 
												{
				    // In dấu '*' nếu là cạnh của tam giác hoặc hàng cuối
            if (j == 1 || j == i || i == h) 
															{
			             printf("*");
			            } 
												else 
															{
			             printf(" ");
            			}
       				 }
        // Xuống dòng
        printf("\n");
        }
     return 0;
}
