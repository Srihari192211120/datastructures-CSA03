#include<stdio.h>
int main()
{
	int arr[100],i,s;
	printf("enter the size of the elements ");
	scanf("%d", &s);
	
	for (i=0;i<=s;i++)
		scanf("%d",&arr[i]);
	printf ("even numbers");
    for(i=0;i<=s;i++)
		if(arr[i]%2==0)
    		printf("%d", arr[i]);
    		
    	printf ("odd numbers");
    for(i=0;i<=s;i++)
		if(arr[i]%2!=0)
    		printf("%d", arr[i]);
}
