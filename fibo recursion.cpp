#include<stdio.h>
int factorial(int n)
{
	if (n==0 || n==1)
	return 0;
	else 
	return n * factorial(n-1);
}
int main()
{
	int num;
	printf("enter a number to find its factorial :");
	scanf("%d", &num);
	printf("%d", factorial(num));
	return 0;
}
