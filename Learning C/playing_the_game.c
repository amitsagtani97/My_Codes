#include<stdio.h>
unsigned long long int countSetBits(long long int n)
{
	unsigned long long int count = 0;
	while (n)
	{
	n &= (n-1) ;
	count++;
	}
	return count;
}

int main()
{
	int t,j;
	scanf("%d",&t);
	for(j=0; j<t; j++)
	{	
		long long int l,r,j,result,count=0;
		scanf("%lld %lld", &l, &r);
		for(j=l; j<=r; j++)
		{
			result = countSetBits(j);
			if (result % 2 == 0)
				count++;
		}
		
	printf("%lld",count);	
	}	
	return 0;
}
