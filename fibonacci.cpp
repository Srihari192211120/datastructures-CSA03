#include<stdio.h>
int main()
{
	int n, a=0, b=1, next;
	printf("enter the number of terms :");
	scanf("%d", &n);
	printf("fibonacci series : %d , %d ", a,b);
	for(int i=2; i<n; i++)
	{
		next = a+b;
		printf("%d\t", next);
		a=b;
		b=next;
	}
	printf("/n");
	return 0;
}
