#include<stdio.h>

/*
Factorial number:
ex 5! = 5 x 4 x 3 x 2 x 1 = 120
   4! = 4 x 3 x 2 x 1
*/
int main (){
/*Begin*/
//gán toán tử
int n = 5, ketqua = 1;
//Bước 1
ketqua = ketqua * (n - 0);
//Bước 2
ketqua = ketqua * (n - 1);
//Bước 3
ketqua = ketqua * (n - 2);
//Bước 4
ketqua = ketqua * (n - 3);
//Bước 5
ketqua = ketqua * (n - 4);
//In kết quả
printf("n! = %d", ketqua);
/*End*/

return 0;
}
