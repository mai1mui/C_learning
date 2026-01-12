#include <stdio.h>
/*
*/
int main()
{
printf("The number 555 in various forms:\n");
printf("\n1.Without any modifier:\n");
printf("[%d]\n",555);

printf("\n2.With - modifier:\n");//implicit: left align-canh le trai
printf("[%-d]\n",555);

printf("\n3.With digit string 10 as modifier: \n");//canh phai
printf("[%10d]\n",555);//chua ra 10 khoang trang
printf("[%10d]\n",11555);

printf("\n4.With 0 as modifier:\n");
printf("[%0d]\n",555);

printf("\n5.With 0 and digit string 10 as modifier:\n");
printf("[%010d]\n",555);
printf("[%010d]\n",11555);

printf("\n6.With -, 0 and digit string 10 as modifier:\n");
printf("[%-010d]\n",555);

return 0;
}
