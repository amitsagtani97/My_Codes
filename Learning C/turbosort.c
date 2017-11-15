#include<stdio.h>
int main()
{int t,i,j;
scanf("%d",&t);
int a[t],b[t],c[t];
for(i=0;i<t;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<t;i++)
 {b[i]=0;
  for(j=0;j<t;j++)
   if(a[i]%a[j]>=1)
     b[i]++;
}
for(i=0;i<t;i++)
{
  for(j=t;j>=0;j--)
   if(b[i]==j)
    c[i]=a[i];


}
for(i=0;i<t;i++)
printf("%d\n",c[i]);
}


