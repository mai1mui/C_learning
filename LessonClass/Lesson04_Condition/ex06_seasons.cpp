#include <stdio.h>

int main()
{
int x;
printf("nhap so thang trong nam(1-12): ");
scanf("%d",&x);

switch (x)
{
	case 2:
	case 3:
	case 4:
						printf("\nMua xuan");
						break;
	case 5:
	case 6:
	case 7:
						printf("\nMua ha");
						break;
	case 8:
	case 9:
	case 10:
						printf("\nMua thu");
						break;	
	case 11:
	case 12:
	case 1:
						printf("\nMua dong");
						break;																					
default:
						printf("\nProgram Exit");
						break;
}
return 0;
}
