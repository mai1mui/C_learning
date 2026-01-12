#include <stdio.h>
#include <string.h>//THU VIEN SU DUNG HAM SO SANH CHUOI STRING CAMPARE STRCMP()
//1.KHAI BAO CAU TRUC LUU TRU THONG TIN SINH VIEN: TEN, MSSV,DIEM
struct sinhvien
{
	char ten[100];
	char mssv[20];//MANG CHUOI KY TU_LUU TRU CA SO LAN CHU_99 KY TU VI KY TU KET THUC CHUOI LA \0
	float diem;
};
int main()
{
	int n;//KHAI BAO BIEN BAT LOI
	//2.KHAI BAO BIEN MANG
	struct sinhvien sv[15];
	//3.BAT LOI NEU NHAP QUA 15 SINH VIEN
	do
						{
							printf("How many students would you like to manage: ");
							scanf("%d",&n);
							if(n<1 || n>15)
									{
										printf("\nThe number is invalid! Press any key to continue\n ");
									}
						}
	while(n<1 || n>15);
	getchar();//VI n LA KIEU SO, TRONG BO NHO DEM CON VUON ENTER
	//4.NHAP DU LIEU SINH VIEN
	for(int i=0;i<n;i++)
				{
					printf("Enter student %d name: ",i+1);//NHAP TEN SINH VIEN
					gets(sv[i].ten);
					printf("Enter Rollno: ");//NHAP MSSV
					gets(sv[i].mssv);//KHONG CAN & VI MSSV DANG MANG CHUOI
					printf("Enter marks: ");//NHAP DIEM
					scanf("%f",&sv[i].diem);
					getchar();
				}
	//5.TIM KIEM SINH VIEN TRONG DANH SACH DA NHAP
	char search[20];//KHAI BAO MANG CHUOI KY TU
	int index=-1;//BO QUA STT 0 TRONG MANG
		//5.1 NHAP DU LIEU TIM KIEM
		printf("Enter Rollno to search: ");//NHAP MSSV MUON TIM
		scanf("%s",search);//MANG CHUOI KY TU KHONG CAN DUNG &
		//5.2 TIM KIEM VA HIEN THI THONG TIN SINH VIEN
	for(int i=0;i<n;i++)
				{
					if(strcmp(sv[i].mssv,search)==0)//HAM SO SANH CHUOI
							{
								index=i;//1 NGHIA LA TRUE_DA TIM THAY
								printf("\n  Rollno\t\tName\t\tMark\n");
								printf("\n-----------|------------------|------------|\n");
								printf("\n%s\t\t%s\t\t%.2f",sv[index].mssv,sv[index].ten,sv[index].diem);
								break;//DUNG VONG LAP KHI TIM THAY SINH VIEN
							}
				}
		//5.3.HIEN THI THONG BAO NEU KHONG TIM THAY SINH VIEN
		if(index==-1)
				{
					printf("\nThe student does not exits.\n");
				}
return 0;
}
