#include <stdio.h>//THU VIEN SU DUNG NHAP/XUAT DU LIEU
#include <stdlib.h>//THU VIEN SU DUNG HAM EXIT()
#include <ctype.h>//THU VIEN SU DUNG HAM TOLOWER()
#define pi 3.14
int main()
{
	int stt;//SO THU TU CAU HOI
	char ch;//KHAI BAO BIEN KI TU YES/NO
	float dai,rong;
	float r;
	
	do
						{
							printf("*****************************************");
							printf("\n   C PROGRAM LANGUAGE\t");
							printf("\n\t1.Question 02.");
							printf("\n\t2.Question 03.");
							printf("\n\t3.Exit.");
							printf("\n*****************************************\n");
/*Nếu người dùng nhập số nằm ngoài phạm vi (1 - 3),	một thông báo lỗi sẽ được đưa ra.*/
							printf("Enter choice (1-3): ");
							scanf("%d",&stt);
							switch(stt)
													{
														case 1:{
															printf("\n\t1.Question 02: Perimeter and area of the rectangle.");
															printf("\nEnter the width of Rectangle: ");//RONG
															scanf("%f",&rong);
															printf("\nEnter the high of Rectangle: ");//DAI
															scanf("%f",&dai);
															printf("\nPerimeter of the Rectangle: 2 * (%.2f + %.2f) = %.2f",rong,dai,2*(dai+rong));
															printf("\nArea of the Rectangle: %.2f * %.2f = %.2f",rong,dai,dai*rong);
															break;
														}
														case 2:
															printf("\n\t1.Question 03.");
															printf("\nEnter the radius of Rectangle: ");//BAN KINH
															scanf("%f",&r);
															printf("\n\tPerimeter of the Circle: 2 * %.2f * %.2f = %.2f",r,pi,2*r*pi);
															printf("\n\tArea of the Circle: %.2f * %.2f * %.2f = %.2f",r,r,pi,r*r*pi);
															break;
														case 3:
															printf("\n\t3.Exit.\n");
															exit(0);//THOAT KHOI CHUONG TRINH NEU USER CHON STT 3
															break;
														default:
															printf("\nYour choice is incorrect");//LUA CHON CUA BAN KHONG DUNG
															break;
													}
							getchar();
							printf("\nDo you want to continue ?");//BAN CO MUON TIEP TUC KHONG?
							ch=getchar();
							ch=tolower(ch);
							if(ch!='y')
									{
										exit(0);
									}
						}
	while(stt!=3);
return 0;
}
