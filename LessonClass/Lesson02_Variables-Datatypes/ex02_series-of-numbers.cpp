#include<stdio.h>
/*
nhap num = 22
in ra day 0-1-3-6-10-15-21 =>22
*/
int main (){
/*Begin*/
int num = 22, ketqua = 0;


for(int n=0;n<=6;n++)
{
ketqua = ketqua + n;
printf ("\t%d", ketqua);

}

printf ("\t=>\t%d", num);
/*End*/
return 0;
}
