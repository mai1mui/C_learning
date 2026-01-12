#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>


//Khai báo cấu trúc
struct rectangle_list {
	char color[20];
	float width;
	float height;
};
//Khai báo biến cho cấu trúc
typedef struct rectangle_list rec_lst;


//Func hiển thị dữ liệu ra màn hình

void display_framework(int type) {
	if(type == 0){
		// In tiêu đề cho bảng rectangles chung
		printf("\n No. || Width                || Height                || Color	             ||");
		printf("\n-----||----------------------||-----------------------||---------------------||");}
	if(type == 1){
		// In tiêu đề cho bảng Squares chung
		printf("\n No. || Side                 || Area                  || Color	             ||");
		printf("\n-----||----------------------||-----------------------||---------------------||");}
}
void display_data(int index,struct rectangle_list rec,int type) { //đầu vào là phần tử trong struct
	if(type == 0){
		printf("\n %3d || %-20.1f || %22.1f|| %20s||",index+1,rec.width,rec.height,rec.color);
		printf("\n-----------------------------------------------------------------------------||");}
	if(type == 1){
		printf("\n %3d || %-20.1f || %22.1f|| %20s||",index+1,rec.width,rec.height*rec.width,rec.color);
		printf("\n-----------------------------------------------------------------------------||");}	
}
int main() {
	//Khai báo mảng
	rec_lst rec[100];
	int max,valid_input;
    // Bắt lỗi
    do {
        printf("\nInput the number of rectangles: ");
        
        // Check if input is a positive integer
        valid_input = scanf("%d", &max); //return của valid_input đối với %d = 0 khi không phải integer và ngược lại
        fflush(stdin);

        // Check if input is a valid integer and a positive number
        if (valid_input != 1 || max <= 0) {
            printf("The number is invalid! Press any key to continue!\n");
            getchar();
        }

    } while (valid_input != 1 || max <= 0);
	fflush(stdin);
	//Nhập dữ liệu
	for(int i = 0; i<max; i++) {
		printf("\nInput data for the rectange [%d] : \n",i+1);
		printf("Width : ",i+1);
		scanf("%f",&rec[i].width);
		printf("Height : ");
		scanf("%f",&rec[i].height);
		fflush(stdin);
		printf("Color : ");
		gets(rec[i].color);
		fflush(stdin);
	}
	//Hiển thị dữ liệu
	int count = 0;//Biến đếm squares
	printf("\nList of Rectangles:");
	display_framework(0);
	for(int i = 0; i<max; i++) {
		display_data(i,rec[i],0);
		if(rec[i].height ==rec[i].width){
			count++;}
	}
	
	//Hiển thị hình vuông
	int squares_index =0;
	printf("\n\nList of Squares:");
	if(count!= 0){
		display_framework(1);
		for(int i = 0; i<max; i++) {
			if(rec[i].height == rec[i].width){	
				display_data(squares_index,rec[i],1);
				squares_index++;
				}
		}
	}
	else{
		printf(" Not found !");
		}
	return 0;
}