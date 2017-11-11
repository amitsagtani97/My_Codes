#include<stdio.h>
int main()
{
	long long int n,x;
	int k,m,i=0;
	scanf("%lld %d",&n,&k);
	long long int temp=n;
	if(k==0)
		printf("%lld",n);
	else
		{
			
			for(i=0;n>0;i++)
				n=n/10;

			m=i;

			int a[m];
			for(i=0;i<m;i++)
			{
				a[i]=temp%10;
				temp=temp/10;

			}

printf("%d\n",a[3]);
			for(i=m-1;k>0;k--)
				{
					a[i]=9;
					i--;
				}
			for(i=m-1;i>=0;i--)
				printf("%d",a[i]);

		}

 

	return 0;
}