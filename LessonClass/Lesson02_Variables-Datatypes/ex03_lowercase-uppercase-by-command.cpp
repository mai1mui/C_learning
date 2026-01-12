#include<stdio.h>
#include<ctype.h>
/*
nhap 1 ki tu thuong
hien thi 1 ki tu hoa
*/
int main (){
/*Begin*/
char ch;

printf("Enter a lower case character: ");
scanf("%c", &ch);
printf("%c has just entered is upercase form: %c", ch, (ch-32));
printf("Conert by using method: %c\n", toupper(ch));
printf("ASCII of %c is %d\n", ch, ch);
printf("ASCII of %c is %d", ch-32, ch-32);
/*End*/
return 0;
}
