#include<stdio.h>
int rec(int n);
main()
{	int n,a;
	printf("Enter the Number for Factorial \n");
	scanf("%d",&n);
	a=rec(n);
	printf("\n Your result is %d ",a);
	
}
int rec(int n)
{   int r;
	if(n==1)
	{
		return 1 ;
	}
	else
	return(n*rec(n-1));
}
