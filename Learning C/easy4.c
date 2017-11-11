#include<stdio.h>
#define size t
int main()
{
int t,i;
scanf("%d",&t);
int a[size],b[size];
  for(i=0;i<t;i++)
   {
    scanf("%d",&a[i]);
    b[i]=zeroes(a[i]);
    }
for(i=0;i<t;i++)
   printf("%d\n",b[i]);
}
int zeroes(int n)
{
int i,count=0;
for(i=5;n/i>=1;i*=5)
count=count+n/i;
return (count);
}


