#include<stdio.h>
int main (){
/*Begin*/
float high, width, circum, area;
//Nhap chieu dai, chieu rong tu ban phim
printf("Hay nhap gia tri chieu dai: ");
scanf("%f", &high);
printf("Hay nhap gia tri chieu rong: ");
scanf("%f", &width);

//tinh chu vi, dien tich
circum = 2 * ( high + width );
area = high * width;

//In ket qua
printf("Chu vi hinh chu nhat la: %.2f", circum);
printf("\nDien tich hinh chu nhat la: %.2f", area);
/*End*/
return 0;
}
