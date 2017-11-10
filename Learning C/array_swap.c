#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	
	int *p = (int *)malloc(t*sizeof(int));
	for(i=0;i<t;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=t-1;i>=0;i--)
		printf("%d\n", *(p+i));
	return 0;
}