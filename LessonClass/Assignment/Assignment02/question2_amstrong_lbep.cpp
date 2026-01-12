#include <stdio.h>//thư viện chứa các hàm dùng để nhập/xuất dữ liệu
#include <math.h>//thư viện chứa hàm pow() tính lũy thừa

int main()//hàm hàm dùng để nhập/xuất dữ liệu
{
	//khai báo biến
			int num;//biến số num user nhập từ bàn phím
			int cnt;//biến đếm ký tự
			int temp;//biến lưu trữ bản sao của số đầu để tính toán mà không thay đổi giá trị gốc.
			int remainder;//biến lưu trữ phần dư của phép chia lấy dư
			int result;//biến lưu trữ kết quả tính tổng các lũy thừa
	//nhập số từ bàn phím
			printf("Enter an integer: ");
			scanf("%d",&num);
	//đếm số ký tự, lấy ra từng đơn vị chữ số cơ sở
			temp=num;//gán bản sao của số đầu vào num
			while(temp!=0)//trong khi num khác 0
								{
									temp/=10;//chia liên tục cho 10 để đếm số ký tự
									++cnt;;
								}
	//tính tổng lũy thừa
			temp=num;//gán lại giá trị cho num để tiếp tục tính toán
			while(temp!=0)
								{
									remainder=temp%10;//tách các chữ số cơ sở bằng cách lấy phần dư của phép chia temp và 10 gán vào 1 biến mới tên remainder
									result+=pow(remainder,cnt);//tính lũy thừa phần dư bằng hàm pow() trong thư viện math.h rồi gán cho biến kết quả result
									temp/=10;//giảm chữ số cơ sở của temp bằng cách chia cho 10, lấy phần nguyên
								}
	//so sánh với số vừa nhập, nếu =, suy ra số vừa nhập là số amstrong
			if(result==num)
					{
						printf("%d is an Amstrong number. ",num);
					}
					else
					{
						printf("%d is not an Amstrong number. ",num);
					}
		
return 0;
}