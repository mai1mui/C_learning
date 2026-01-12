#include <stdio.h>//THU VIEN SU DUNG NHAP/XUAT DU LIEU
#include <stdlib.h>//THU VIEN SU DUNG HAM EXIT()

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
	int stt;//SO THU TU CAU HOI
	do
						{
							printf("*****************************************");
							printf("\n*Select an appropriate action: \t*");
							printf("\n*\t1.R1\t\t\t*");
							printf("\n*\t2.R2\t\t\t*");
							printf("\n*\t3.R3\t\t\t*");
							printf("\n****************************************\n");
/*Nếu người dùng nhập số nằm ngoài phạm vi (1 - 3),	một thông báo lỗi sẽ được đưa ra.*/
							printf("Enter choice (1-3): ");
							scanf("%d",&stt);
							switch(stt)
													{
														case 1:{
															printf("\n\t1.R1\n");
															int max;
															int n[1000];//KHAI BAO BO NHO CHUA MAX TU USER
															int cnt;//BIEN DEM
															float sum;
															float aver;//BIEN TRUNG BINH CONG
														//NHAP SO LUONG SO NGUYEN TRONG MANG
															printf("Enter the size of the array: ");
															scanf("%d",&max);
														//HIEN THI
															for(int i=0;i<max;i++)
																		{
																			printf("a[%d]: ",i);
																			scanf("%d",&n[i]);
																		}
															printf("Output the array: ");
															for(int i=0;i<max;i++)
																		{
																			printf("%d\t",n[i]);
																		}
														//DEM SO LE
															for(int i=0;i<max;i++)
																		{
																			if(n[i]%2!=0)//DIEU KIEN LA LE
																			{
																				sum+=n[i];
																				cnt++;
																			}
																		}
															printf("\nNumber of the odd integer: %d",cnt);
														//TINH TRUNG BINH CONG CAC SO NGUYEN LE
														if (cnt == 0) 
																	{
														    printf("\nThere are no odd numbers.\n");
														   } 
														else 
																	{
														   aver = sum/cnt;
														   printf("\nAverage of odd numbers: %.2f\n", aver);
														   }
														}
															break;
														case 2:
														{
															printf("\n\t2.R2\n");
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
														}
															break;
														case 3:
															printf("\n\tExit program.\n");
															exit(0);//THOAT KHOI CHUONG TRINH NEU USER CHON STT 3
															break;
														default:
															printf("\nYour choice is incorrect\n");//LUA CHON CUA BAN KHONG DUNG
															break;
													}
						}
	while(stt!=3);
return 0;
}