#include<stdio.h>
int fact(int n);
int main()
{
	int n,x;
	printf("Enter a no. to calculate its factorial :  ");
	scanf("%d",&n);
	x=fact(n);
	printf("The factorial of %d is %d",n,x);
}
int fact(int n)
{
	int x;
	if(n==1)
		return (1);
	else
		x=n*fact(n-1);
	return(x);
}
