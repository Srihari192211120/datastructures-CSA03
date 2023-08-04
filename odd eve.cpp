#include<stdio.h>
int main()
{
	int i;
	printf("enter the number to checked : ");
	scanf("%d", &i);
	if (i%2==0)
	printf("the given number is even ");
	if (i%2!= 0)
	printf("the given number is odd");
	return 0;
}
