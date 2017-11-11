#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
int a[n],b[n];
for(i=1;i<=n;i++) {
 scanf("%d",&a[i]);
 b[i]=factorial(a[i]);
 

}
for(i=1;i<=n;i++)
 printf("%d\n",a[i]);

}
factorial(int n)
{
int i,f=1;
for(i=n;i>=1;i--)
 {
   f=f*i;
}
return (f);
}


