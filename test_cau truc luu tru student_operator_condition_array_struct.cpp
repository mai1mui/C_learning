#include <stdio.h>
#include <string.h>
/*
1.khai bao bien cau truc ten sinhvien gom: ten, mon, diem
2.bat loi, chi cho phep nhap toi da 10 sinh vien
3.nhap du lieu sinh vien gom ten,mon, diem
4.hien thi thong tin sinh vien co hien thi ket qua neu diem >=40 thi pass, nguoc lai thi ref
5.tim kiem sinh vien trong danh sach
6.hien thi sinh vien co diem cao nhat 
7.hien thi thong tin sinh vien sap xep tang dan dang bang
*/

	//KHAI BAO CAU TRUC
	struct sinhvien
		{
			char ten[50];
			char mon[50];
			float diem;
		};
		
	//CHUONG TRINH MAIN
int main()
{
	//KHAI BAO BIEN CAU TRUC
	typedef struct sinhvien student;//DOI TEN CAU TRUC STRUCT SINHVIEN BANG STUDENT CHO NGAN GON
	//KHAI BAO MANG
	student sv[10];
	//2.BAT LOI CHI NHAP MAX=10 SINH VIEN
	int sosv;
	do
						{
						printf("Nhap so luong sinh vien (toi da 10 SV): ");
						scanf("%d",&sosv);
						}
	while(sosv<1 || sosv>10);
	getchar();
	//3.NHAP DU LIEU SINH VIEN
	for(int i=0;i<sosv;i++)
				{
					printf("nhap ten sinh vien thu %d: ",i+1);
					gets(sv[i].ten);
					printf("nhap ten mon hoc: ");
					gets(sv[i].mon);
					printf("nhap diem: ");
					scanf("%f",&sv[i].diem);
					getchar();
				}
	
	//4.HIEN THI THONG TIN SINH VIEN CO DANH GIA KET QUA
	printf("\n-----THONG TIN SINH VIEN-----");
	for(int i=0;i<sosv;i++)
				{
					char ketqua[50];
					if(sv[i].diem>=40)
							{
								strcpy(ketqua,"pass");
							}
					else
							{
								strcpy(ketqua,"ref");
							}
					printf("\n+Ten sinh vien thu %d: %s",i+1,sv[i].ten);
					printf("\n+Ten Mon hoc: %s",sv[i].mon);
					printf("\n+Diem: %.2f",sv[i].diem);
					printf("\n+Danh gia ket qua: %s",ketqua);
					printf("\n---------------------------------\n");					
				}
	//5.TIM KIEM SINH VIEN TRONG DANH SACH
	char search[50];
	int index=-1;
				//5.1 NHAP DU LIEU TIM KIEM
				printf("\nNhap ten sinh vien muon tim: ");
				gets(search);
				//5.2 TIM KIEM
				for(int i=0;i<sosv;i++)
							{
								if(strcmp(sv[i].ten,search)==0)//HAM STRCMP DUNG DE SO SANH 2 CHUOI
										{
											index=i;
											break;//DUNG LAI KHI TIM THAY THONG TIN SINH VIEN
										}
							}
				//5.3 HIEN THI
				if(index==-1)
						{
							printf("Khong co ten sinh vien trong danh sach ban tim kiem");
						}
				else
						{
							printf("\n-----TIM THAY THONG TIN SINH VIEN-----");
							printf("\n+Ten sinh vien: %s",sv[index].ten);
							printf("\n+Ten mon hoc: %s",sv[index].mon);
							printf("\n+Diem: %.2f",sv[index].diem);
							printf("\n----------------------------------\n");
						}
				
	//6.HIEN THI SINH VIEN CO DIEM CAO NHAT
	printf("\nSinh vien co diem cao nhat la: ");
	float temp;
	temp=sv[0].diem;
	
			//SAP XEP THEO THU TU
			for(int i=0;i<sosv;i++)
						{
							if(temp<sv[i].diem)
									{
										temp=sv[i].diem;
									}
						}
			//HIEN THI
			for(int i=0;i<sosv;i++)
						{
							if(sv[i].diem==temp)
									{
										printf("\n+Ten sinh vien thu %d: %s",i+1,sv[i].ten);
										printf("\n+Ten Mon hoc: %s",sv[i].mon);
										printf("\n+Diem: %.2f",sv[i].diem);
										printf("\n---------------------------------\n");
									}
						}
	
	//7.HIEN THI THONG TIN SINH VIEN DANG BANG THEO DIEM TANG DAN
	student temp1;
			//SAP XEP THEO THU TU
			for(int i=0;i<sosv-1;i++)
						{
							for(int j=i+1;j<sosv;j++)
										{
											if(sv[i].diem<sv[j].diem)
													{
														temp1=sv[i];
														sv[i]=sv[j];
														sv[j]=temp1;
													}
										}
						}
			//HIEN THI DANH SACH SAU SAP XEP
			printf("\n-----THONG TIN SINH VIEN THEO THU TU DIEM-----\n");
			printf("\n\tTEN SINH VIEN\tTEN MON HOC\tDIEM");
			for(int i=0;i<sosv;i++)
						{	
						printf("\n\t|---------|---------|---------");
						//VONG LAP HIEN THI DIEM
						printf("\n%d\t%s\t%s\t%.2f\n",i+1,sv[i].ten,sv[i].mon,sv[i].diem);
						}
						printf("\n---------------------------------\n");	
return 0;
}
