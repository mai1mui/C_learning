#include <stdio.h>
/*
Cần có tổng 200000 đồng từ 3 loại giấy bạc 1000 đồng, 2000 đồng, 5000 đồng.
Lập chương trình để tìm ra tất cả các phương án có thể.
*/
int main() 
{
    int count = 0; // Đếm số lượng phương án

    // Số tờ 5000 đồng tối đa là 40 vì 5000 * 40 = 200000
    for (int x = 0; x <= 40; x++) //x đại diện cho số tờ 5000 đồng
								{
				    // Số tờ 2000 đồng tối đa phụ thuộc vào giá trị còn lại sau khi trừ đi phần của tờ 5000
				    for (int y = 0; y <= (200000 - 5000 * x) / 2000; y++) // y là số tờ 2000 đồng
												{
								    // Số tờ 1000 đồng còn lại
								  	 int z = (200000 - 5000 * x - 2000 * y) / 1000;//z là số tờ 1000 đồng.
								
								    // Kiểm tra nếu tổng số tiền đúng là 200000 đồng
								    if (5000 * x + 2000 * y + 1000 * z == 200000) 
															{
								        printf("answer: 5000 VND: %d sheets, 2000 VND: %d sheets, 1000 VND: %d sheets\n", x, y, z);
								        count++;
								       }
								    }
				    }

    printf("Sum of answer: %d\n", count);

    return 0;
}
