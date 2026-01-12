#include <stdio.h>
//1.KHAI BAO CAU TRUC sach LUU TRU TEN SACH, SO LUONG
struct sach
{
	char ten[100];
	int soluong;
	float dongia;
};
int main()
{
int n;//KHAI BAO BIEN NHAP SO LUONG SACH MUON QUAN LY

//2.KHAI BAO MANG
struct sach book[10];//GAN CAU TRUC sach CHO BIEN book
//3.BAT LOI NEU USER NHAP QUA 10 CUON
do
					{
						printf("How many books would you like to manage: ");//BAN MUON QUAN LY BAO NHIEU CUON SACH
						scanf("%d",&n);
						if(n<1 || n>10)
								{
									printf("\nThe number is invalid! Press any key to continue\n ");//SO KHONG HOP LE, NHAN PHIM BAT KY DE TIEP TUC
								}
					}
while(n<1 || n>10);
getchar();//VI n LA KIEU SO, TRONG BO NHO DEM CON VUON ENTER
//4.NHAP DU LIEU SACH
for(int i=0;i<n;i++)
			{
			printf("Enter book %d name: ",i+1);//i++1 VI n LA MANG DU LIEU, i BAT DAU =0
			gets(book[i].ten);
			printf("Enter quantity: ");//NHAP SO LUONG
			scanf("%d",&book[i].soluong);
			getchar();//DON SACH BO NHO DEM VI DUNG SCANF NHAP SO NGUYEN THI TRONG BO NHO CON VUON PHIM ENTER
			printf("Enter unit price: ");//NHAP DON GIA
			scanf("%f",&book[i].dongia);
			getchar();//DON SACH BO NHO DEM VI DUNG SCANF NHAP SO THUC THI TRONG BO NHO CON VUON PHIM ENTER
			}
//5.HIEN THI THONG TIN
printf("\nBook List Information: \n");
printf("\nNo\t  Name\t\tQuantity\tPrice\t  Amount \n");
printf("\n----|------------------|------------|-----------|-----------| \n");
for(int i=0;i<n;i++)
			{
				printf("%d\t%s\t  %d\t\t%.2f\t  %.2f\n",i+1,book[i].ten,book[i].soluong,book[i].dongia,book[i].soluong*book[i].dongia);
			}
	
//-------------------------------------------------------------------------------------------------------------------------//
//6.1.SAP XEP TANG DAN THEO SO LUONG 
struct sach temp;
for(int i=0;i<n-1;i++)
			{
			for(int j=i+1;j<n;j++)
						{
							if(book[i].soluong>book[j].soluong)
									{
										temp=book[i];
										book[i]=book[j];
										book[j]=temp;
									}
						}
			}
//6.2.HIEN THI THONG TIN
printf("\nBook List Information by Quantity: \n");
printf("\nNo\t  Name\t\tQuantity\tPrice\t  Amount \n");
printf("\n----|------------------|------------|-----------|-----------| \n");
for(int i=0;i<n;i++)
			{
				printf("%d\t%s\t\t%d\t\t%.2f\t  %.2f\n",i+1,book[i].ten,book[i].soluong,book[i].dongia,book[i].soluong*book[i].dongia);
			}
return 0;
}
