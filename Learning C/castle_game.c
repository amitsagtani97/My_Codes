#include<stdio.h>
#include<stdlib.h>
int game(int n);
int main()
{
	int t,i;
	scanf("%d",&t);
	int *p=(int *)malloc(t*sizeof(int));
	for(i=0;i<t;i++);
	{
		scanf("%d",(p+i));
	}
for(i=0;i<t;i++)
	printf("%d\n",game(*(p+i)));


	return 0;
}

int game(int n)
{
	int i,j,count=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i^j)<=n)
				count++;
		}
	}

return count
}