#include <stdio.h>
#include <string.h>
//1.khai bao cau truc
struct sinhvien
	{
		char ten[25];
		char mon[25];
		float diem;
	};
int main()
{
	//2.khai bao bien kieu cau truc
	typedef struct sinhvien student;
	//3.khai bao mang
	student sv[100];
	int max;
	//4.bat loi
	do
						{
							printf("ban muon quan ly bao nhieu sinh vien (1-10): ");
							scanf("%d",&max);
						}
	while(max<1 || max >10);
	getchar();//vi max la kieu so
	//5.nhap du lieu
	for(int i=0;i<max;i++)
				{
					printf("nhap ten sinh vien %d: ",i+1);
					gets(sv[i].ten);
					printf("nhap mon hoc: ");
					gets(sv[i].mon);
					printf("nhap diem: ");
					scanf("%f",&sv[i].diem);
					//co khoang trong, can loai bo khaong trong
					getchar();
				}
	//6.hien thi thong tin
	printf("\n----------THONG TIN SINH VIEN----------");
	
	for(int i=0;i<max;i++)
				{
					char ketqua[5];
					if(sv[i].diem>=40)
							{
								strcpy(ketqua,"pass");
							}
					else
							{
								strcpy(ketqua,"ref");
							}
					printf("\n+ten sinh vien %d:%s ",i+1,sv[i].ten);
					printf("\n+mon hoc: %s",sv[i].mon);
					printf("\n+ diem: %.2f",sv[i].diem);
					printf("\n+ ket qua: %s",ketqua);
					printf("\n--------------------");
				}
	//7.tim kiem
	char search[50];
	int index =0;
			//7.1 nhap du lieu tim kiem
			printf("nhap ten sinh vien muon tim: ");
			gets(search);
			//7.2 tim kiem
			for(int i=0;i<max;i++)
						{
							if(strcmp(sv[i].ten,search)==0)
									{
										index=1;
									}				
						}
			//7.3 hien thi
			if (index<0)
						{
							printf("khong co ten sinh vien trong danh sach tim kiem");
						}
			else
						{
							printf("\n----------THONG TIN SINH VIEN----------");
							printf("\n+ten sinh vien:%s ",sv[index].ten);
							printf("\n+mon hoc: %s",sv[index].mon);
							printf("\n+ diem: %.2f",sv[index].diem);
							printf("\n--------------------");
						}
return 0;
}
