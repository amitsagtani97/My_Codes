#include<stdio.h>
main()
{
int n,f;
scanf("%d",&n);
f=factorial(n);
printf("%d",f);
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
