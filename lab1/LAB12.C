#include <stdio.h>
#include <conio.h>
int main()
{
	int x;
	clrscr();
	printf("Please insert the number : ");
	scanf("%d", &x);
	printf("%d\n", x);
	printf("%o\n", x);
	printf("%x\n", x);

	getch();
	return 0;
}