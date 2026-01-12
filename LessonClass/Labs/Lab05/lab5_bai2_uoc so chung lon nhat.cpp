#include <stdio.h>
/*
Tìm ước số chung lớn nhất của 2 số nguyên dương.
ƯCLN là số lớn nhất trong tập hợp các ước chung của các số đó.
Nếu a % b thì ta nói a là bội của b, còn b là ước của a
Thuật toán Euclid : USCLN của hai số a và b bằng USCLN của b và phần dư của a khi chia cho b
+ Nếu b=0, thì USCLN là a.
+ Nếu b≠0 , thay a = b và b bằng phần dư của a khi chia b, rồi lặp lại bước 1.
Quá trình này sẽ tiếp tục cho đến khi b trở thành 0, và khi đó, a là USCLN

*/
int ucln(int n1,int n2)//Hàm này nhận vào hai số nguyên n1 và n2 và trả về USCLN của chúng.
{
	while(n2!=0)//n1 chia n2, n2 là mẫu nên khác 0
						{
						int temp=n1%n2;//gán phần dư của phép chia cho biến tạm temp
						n1=n2;//gán n2 cho n1
						n2=temp;//gán phần dư từ temp vào n2 để tiếp tục thực hiện phép chia
						}
return n1;//khi n2=0, n1 chính là ucln cần tìm
}

int main()
{
	int n1,n2;
	printf("Nhap so nguyen duong thu nhat: ");
	scanf("%d",&n1);
	printf("Nhap so nguyen duong thu hai: ");
	scanf("%d",&n2);
	
	int result=ucln(n1,n2);
	printf("Uoc chung lon nhat cua %d va %d: %d",n1,n2,result);
return 0;
}
