#include<stdio.h>
int main()
{
long long int n;
scanf("%lld",&n);
long int zero=0;
long int one=0;
int x;
while(n>0)
{
 x=n%10;
 if(x==0)
  zero++;
 else
  one++;
 n=n/10;
}
if((zero==1)||(one==1))
printf("YES\n");
else
printf("NO\n");

return 0;
}
