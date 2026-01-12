#include <stdio.h>
//1.KHAI BAO CAU TRUC
struct ticket
{
	char ten[100];
	float gia;
	int ngay;
	int thang;
	int nam;
};
int main()
{
int n;//KHAI BAO BIEN NHAP SO LUONG VE 
printf("Enter the number ticket: ");
scanf("%d",&n);
getchar();
//2.KHAI BAO MANG
struct ticket film[100];

//4.NHAP DU LIEU FILM
for(int i=0;i<n;i++)
			{
			printf("Film: ");
			gets(film[i].ten);
			printf("Price: ");
			scanf("%f",&film[i].gia);
			getchar();
			printf("Day: ");
			scanf("%d",&film[i].ngay);
			printf("Month: ");
			scanf("%d",&film[i].thang);
			printf("Year: ");
			scanf("%d",&film[i].nam);
			getchar();
			}
//5.HIEN THI THONG TIN
for(int i=0;i<n;i++)
			{
				printf("\nInput for ticket %d: ",i+1);
					printf("\nFilm: %s",film[i].ten);
					printf("\nPrice: %.2f",film[i].gia);
					printf("\nDay: %d",film[i].ngay);
					printf("\nMonth: %d",film[i].thang);
					printf("\nYear: %d\n",film[i].nam);
			}
printf("\nInformation of tickets: ");
for(int i=0;i<n;i++)
			{
			printf("\nFilm: %s",film[i].ten);
			printf("\nPrice: %.2f",film[i].gia);
			printf("\nDate: %d-%d-%d\n",film[i].ngay,film[i].thang,film[i].nam);
			}
return 0;
}
