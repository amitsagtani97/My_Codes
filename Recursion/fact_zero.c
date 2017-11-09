#include<stdio.h>
int main()
{
long int n;
long int z;
scanf("%d",&n);
z=zeroes(n);
printf("%d",z);
return 0;

}
zeroes(long int n)
{
int i,count=0;
for(i=5;n/i>=1;i*=5)
count=count+n/i;
return (count);


}
