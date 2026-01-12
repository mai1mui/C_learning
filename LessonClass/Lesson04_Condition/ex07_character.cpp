#include <stdio.h>
//vowel- nguyen am
//entered - da nhap
int main()
{
char ch;
printf("Enter a lower cased alphabet (a-z): ");
scanf("%c",&ch);

switch (ch)
{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':					
						printf("\nCharacter is a vowel");
						break;
	case 'z':
						printf("\nLast Alphabet (z) was entered");
						break;
 default:
	     printf("\nCharacter is a consohant");
						break;
}

return 0;
}
