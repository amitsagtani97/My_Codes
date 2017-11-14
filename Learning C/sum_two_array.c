#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s,i;
	scanf("%d",&s);
	int *p = (int *)malloc(s*sizeof(int));
	int *q = (int *)malloc(s*sizeof(int));
	
	
		for(i=0;i<s;i++)
		{
			scanf("%d",(p+i));
		}

		for(i=0;i<s;i++)
		{
			scanf("%d",(q+i));
		}
	
	for(i=0;i<s;i++)
		printf("%d ", *(p+i) + *(q+i));
	return 0;
}