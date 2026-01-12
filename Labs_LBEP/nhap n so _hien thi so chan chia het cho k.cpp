#include <stdio.h>
/*
-cho người dùng xác định nhập bao nhiêu số(max)
-nhập n(max lần)
-nhập k
-hiển thị các số chẵn trong danh sách n chia hết cho k
-và xác định có bao nhiêu số chẵn trong danh sách chia hết cho k
*/
int main()
{
	int max;
	int n[1000];//khai báo độ rộng bộ nhớ chứa max từ user
	int k;//khai báo biến k từ user
	int cnt;//biến đếm
	printf("How many numbers do you want to enter: ");//bạn muốn nhập bao nhiêu số, vd: 10 số
	scanf("%d",&max);
	
	for(int i=0;i<max;i++)
				{
					printf("Please enter the %d integer: ",i+1);//hãy nhập max số nguyên, vd: 10 số nguyên
					scanf("%d",&n[i]);
				}
				
	for(int i=0;i<max;i++)//cần khai bao lại biến i , do i chỉ được khai báo ở vòng lặp for ở trên
	printf("%d\t",n[i]);
	
	printf("\nPlease enter an integer: ");//hãy nhập k số nguyên
					scanf("%d",&k);
					
	for(int i=0;i<max;i++)
				{
					if((n[i]%2==0) && (n[i]%k==0))//điều kiện chẵn và chia hết cho k
					{
						printf("%d\t",n[i]);
						cnt++;
					}
				}
	
/*	for(int i=0;i<max;i++)
				{
					temp=n[i];
					
				}
				*/
	printf("\nThere are %d even numbers divisible by %d",cnt,k);
return 0;
}
