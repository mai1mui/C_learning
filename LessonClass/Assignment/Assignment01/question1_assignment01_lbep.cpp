#include <stdio.h>//THU VIEN SU DUNG NHAP/XUAT DU LIEU
#include <stdlib.h>//THU VIEN SU DUNG HAM EXIT()
#include <ctype.h>//THU VIEN SU DUNG HAM TOLOWER()
int main()
{
	int stt;//SO THU TU CAU HOI
	char ch;//KHAI BAO BIEN KI TU YES/NO
	
	
	
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
														case 1:
															printf("\n\t1.Question 02.");
															break;
														case 2:
															printf("\n\t1.Question 03.");
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
