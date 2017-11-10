#include<stdio.h>
int sum(int n);
int main()
{
	int i,z,n,x,y,max=1,max_sum;
	scanf("%d",&n);
if(n<10)
	printf("%d",n);
else
{
	y = sum(n);
	for(i=1;i<10;i++)
	{
		if(n%i==0)
			max=i;
	}

	max_sum = sum(max);
	x = n/max;
	z = sum(x);
if((max_sum>=y) && (max_sum>=z))
	if(max_sum==y)
		{
			if(max>n)
			printf("%d",n);
		else
			printf("%d",max);
		}
	else if(max_sum==z)    
	    {if(max>x)
			printf("%d",x);
		else
			printf("%d",max);
		}
else
	printf("%d",max);
else if ((y>max_sum)&&(y>z))
	printf("%d",n);
else
	printf("%d",x);

	return 0;
}	
}

int sum(int n)
{
	int x=0;
	int y;
	while(n>0)
	{
		y=n%10;
		x=x+y;
		n=n/10;

	}
	return x;

}