#include <stdio.h>
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
					printf("\n+ten sinh vien %d:%s ",i+1,sv[i].ten);
					printf("\n+mon hoc: %s",sv[i].mon);
					printf("\n+ diem: %.2f",sv[i].diem);
					printf("\n--------------------");
				}
	//7.sap xep thu tu tang dan
float temp=0;
for(int i=0;i<max-1;i++)
			{
			for(int j=i+1;j<max;j++)
						{
							if(sv[i].diem<sv[j].diem)
						 temp=sv[i].diem;
						 sv[i]=sv[j];
						 sv[j].diem=temp;
						}
			}
	
	//hien thi
	for(int i=0;i<max;i++)
					{
						if(sv[i].diem==temp)
						{
						printf("\n+ten sinh vien %d:%s ",i+1,sv[i].ten);
						printf("\n+mon hoc: %s",sv[i].mon);
						printf("\n+ diem: %.2f",sv[i].diem);
						printf("\n--------------------");
						}
					}
	
return 0;
}
