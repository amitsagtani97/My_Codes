#include<stdio.h>
int main()
{
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
		long int i,n,count=0;
		scanf("%ld",&n);
		for(i=1;i<n;i++)
		{
			if ((i^n)==(i+n))
				count++;
		}
		printf("%ld\n",count);

	}


	return 0;
}