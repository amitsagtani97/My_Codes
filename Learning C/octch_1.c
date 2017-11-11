#include<stdio.h>
#define size t
int main()
{
int t,n,m,c,i,j,k;
scanf("%d",&t);
int a[size];
for(i=0,a[i]=0;i<t;i++)
{
scanf("%d %d %d",&n,&m,&c);
for(j=1;j<=n;j++)
  {for(k=1;k<=m;k++)
    if((j*k==c))
     a[i]++;
}
}
for(i=0;i<t;i++)
printf("%d\n",a[i]);
return 0;
}








