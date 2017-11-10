#include<stdio.h>
int main()
{
	int n,k,count=0,i;
	scanf("%d %d",&n,&k);
       int a[n+1];
	for(i=1;i<=n;i++)
       {
        scanf("%d",&a[i]);
          if(a[i]%k==0)
           count++;

     }
  printf("%d",count);
 return 0;

}
