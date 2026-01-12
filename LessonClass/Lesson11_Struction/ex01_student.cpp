#include <stdio.h>
/*
*/
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
	//struct sinhvien sv1,sv2;
	//hoac neu khong thich ten dai, muon dat lai
	typedef struct sinhvien student;
	student sv1,sv2;
	//3.nhap du lieu
	printf("nhap ten sinh vien 1: ");
	gets(sv1.ten);
	printf("nhap mon hoc: ");
	gets(sv1.mon);
	printf("nhap diem: ");
	scanf("%f",&sv1.diem);
	
	getchar();//co khoang trong, can loai bo khaong trong
	printf("nhap ten sinh vien 2: ");
	gets(sv2.ten);
	printf("nhap mon hoc: ");
	gets(sv2.mon);
	printf("nhap diem: ");
	scanf("%f",&sv2.diem);
	//4.hien thi thong tin
	printf("\n----------THONG TIN SINH VIEN----------");
	printf("\n+ten sinh vien 1:%s ",sv1.ten);
	printf("\n+mon hoc: %s",sv1.mon);
	printf("\n+ diem: %.2f",sv1.diem);
	printf("\n--------------------");
	printf("\n+ten sinh vien 2:%s ",sv2.ten);
	printf("\n+mon hoc: %s",sv2.mon);
	printf("\n+ diem: %.2f",sv2.diem);
return 0;
}
