#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	long int *p = (long int *)malloc(t*sizeof(long int));
	for(int i=0;i<t;i++)
	{
		scanf("%ld",(p+i));
	}
	for(int i=0;i<t;i++)
	{
		printf("%ld\n", (*(p+i))/2+1);
	}

	return 0;
}
