#include <stdio.h>//thư viện chứa các hàm dùng để nhập/xuất dữ liệu
#include <math.h>//thư viện chứa hàm pow() tính lũy thừa
#include <conio.h>//thư viện chứa hàm getch()
//******************************************************************************************
int isArmstrong(int num)//hàm dùng để kiểm tra số được nhập có phải là số amstrong hay không
{
	
	//khai báo biến
			int cnt;//biến đếm ký tự
			int original_num;//biến lưu trữ bản sao của số đầu để tính toán mà không thay đổi giá trị gốc.
			int remainder;//biến lưu trữ phần dư của phép chia lấy dư
			int result;//biến lưu trữ kết quả tính tổng các lũy thừa
	//đếm số ký tự, lấy ra từng đơn vị chữ số cơ sở
			original_num=num;//gán bản sao của số đầu vào num
			while(original_num!=0)//trong khi num khác 0
								{
									original_num/=10;//chia liên tục cho 10 để đếm số ký tự
									++cnt;;
								}
	//tính tổng lũy thừa
			original_num=num;//gán lại giá trị cho num để tiếp tục tính toán
			while(original_num!=0)
								{
									remainder=original_num%10;//tách các chữ số cơ sở bằng cách lấy phần dư của phép chia original_num và 10 gán vào 1 biến mới tên remainder
									result+=pow(remainder,cnt);//tính lũy thừa phần dư bằng hàm pow() trong thư viện math.h rồi gán cho biến kết quả result
									original_num/=10;//giảm chữ số cơ sở của original_num bằng cách chia cho 10, lấy phần nguyên
								}
	//so sánh với số vừa nhập, nếu =, suy ra số vừa nhập là số amstrong
return result==num;//nếu result=num thì hàm trả về 1-True-tức là num là số amstrong, còn result#num thì hàm trả về 0-False
}
//***********************************************************************************************
int main()//hàm hàm dùng để nhập/xuất dữ liệu
{
	//khai báo biến
			int num;//biến số num user nhập từ bàn phím
	//nhập số từ bàn phím
			printf("Enter a number: ");
			scanf("%d",&num);
			if(isArmstrong(num))//gọi hàm isamstrong để check lại num vừa nhập
					{
						printf("%d is a amstrong number ",num);
					}
					else
					{
						printf("%d is not a amstrong number ",num);
					}
		getch();//hàm trong thư viện conio.h_dùng để đọc 1 ký tự từ bàn phím mà không hiển thị trên màn hình, cũng không cần nhấn enter
return 0;
}