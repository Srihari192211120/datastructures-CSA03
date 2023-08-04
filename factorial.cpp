#include<stdio.h>
#include<conio.h>
int main()
{
	int num, fact = 1, i;
	printf("enter the number to  be calculated");
	scanf("%d", &num);
	for(i=1; i<=num; i++)
	{
		fact*=i;
	}
	printf("factorial of %d = %d", num, fact);
	return 0;
}
