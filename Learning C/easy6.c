#include<stdio.h>
long int factorial(long int n);
int main()
{
int i,t;
scanf("%d",&t);
int a[t];
long int b[t];
for(i=0;i<t;i++)
{ scanf("%d",&a[i]);
   b[i]=factorial(a[i]);
}

for(i=0;i<t;i++)
 printf("%ld\n",b[i]);

}

long int factorial(long int n)
{
long int i,f=1;
for(i=n;i>=1;i--)
 {
   f=f*i;
}
return (f);

}
