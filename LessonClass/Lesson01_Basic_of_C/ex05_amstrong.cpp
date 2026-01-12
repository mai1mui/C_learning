#include<stdio.h>
/*
*/

int main (){

int amstrong, num, count=0, ketqua;
printf (" Enter a number: ");
scanf ("%d\n", &num);

amstrong = num;

//Buoc 1
ketqua = num%10;
printf ("%d\n", ketqua);
count++;
num = num/10;


return 0;
}
