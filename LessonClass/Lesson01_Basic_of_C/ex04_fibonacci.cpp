#include<stdio.h>
/*
fibonacci numbers: 
Số Fibonacci (số Fibonacci) là một dãy số trong học toán bắt đầu bằng 0 và 1,và mỗi số tiếp theo trong dãy được tạo ra bằng cách cộng hai số liền kề trước nó.
Fibonacci dãy có dạng: 0 ,1 ,1 ,2 ,3 ,5 ,8 ,13 ,21 ,34 ,55 ,89 ,144 ,…
Công thức tổng hợp để tìm số Fibonacci
F ( danh từ )=F ( n−1 )+F ( n−2 )
*/
int main (){
/*Begin*/
int n1 = 0;
int n2 = 1,ketqua = 0;
printf("%d\t%d", n1, n2);
//Bước 1
ketqua = n1 + n2;
printf("\t%d", ketqua);
n1 = n2;
n2 = ketqua;

//Bước 2
ketqua = n1 + n2;
printf("\t%d", ketqua);
n1 = n2;
n2 = ketqua;

//Bước 3
ketqua = n1 + n2;
printf("\t%d", ketqua);
n1 = n2;
n2 = ketqua;

//Bước 4 
ketqua = n1 + n2;
printf("\t%d", ketqua);
n1 = n2;
n2 = ketqua;
/*End*/
return 0;
}
