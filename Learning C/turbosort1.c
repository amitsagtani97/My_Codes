#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int n,i,j,t;
	scanf("%ld",&n);
	long int *p = (long int *)malloc(n*(sizeof(long int)));
	for(i=0;i<n;i++)
	{
		scanf("%ld",(p+i));
	}
for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
	{
		if(*(p+j) > *(p+j+1))
		{
			t = *(p+j);
			*(p+j) = *(p+j+1);
			*(p+j+1) = t;
		}
	}

	}
for(i=0;i<n;i++)
{
	printf("%ld\n",*(p+i));
}



	return 0;
}
