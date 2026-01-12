#include<stdio.h>
#include<math.h>
/*
printf ("control string(1)", argument list(2));
(1) required
(2) optinal
*/
int main()
{
//assignment variable

//operators

//display result on screen
printf("Control string is required");
//the argument list consists of constants:
printf("\nthe argument list consists of constants:%d",100);
int n=15;
printf("\nvariable:%d",n);
printf("\nexpression:%d",n+15);
printf("\nfuction::%.2lf",pow(2,9));// sd ham nen can them thu vien #include<math.h>
//sd tong hop tat ca//the fomat commans must match the argument list in number, type and order
printf("variable:%d|expression:%d|fuction::%.2lf",n,n+35,pow(2,5));
return 0;
}
