#include <stdio.h>//THU VIEN SU DUNG NHAP/XUAT DU LIEU
#include <stdlib.h>//THU VIEN SU DUNG HAM EXIT()
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
														case 1:
															printf("\n\t1.R1\n");
															break;
														case 2:
															printf("\n\t2.R2\n");
															break;
														case 3:
															printf("\n\t3.R3\n");
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
