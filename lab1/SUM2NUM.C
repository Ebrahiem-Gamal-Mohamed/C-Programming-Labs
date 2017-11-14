#include <stdio.h>
#include <conio.h>
int main()
{
	int x=0, y=0, sum=0;
	clrscr();
	printf("Please insert first number : ");
	scanf("%d" , &x);
	printf("Please insert second number : ");
	scanf("%d", &y);
	sum = x+y;
	printf("The Result ");
	printf("%d", sum);
	getch();
	return 0;
}