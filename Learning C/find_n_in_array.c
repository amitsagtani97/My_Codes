#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int i,n,m;
	scanf("%ld %ld",&n, &m);
	long int *p = (long int *)malloc(n*sizeof(long int));
	for(i=0;i<n;i++)
		{
			scanf("%ld",(p+i));
		}
	long int count=0;
	for(i=0;i<n;i++)
	{
		if(*(p+i)==m)
			count=i;
	}		
	printf("%ld",count+1);

	return 0;
}
