#include<stdio.h>
int main()
{
    long unsigned int i,t,n;
    scanf("%lu",&t);
    long unsigned int sum[t];
    for(i=0;i<t;i++)
      {
	sum[i]=0;
	scanf("%lu",&n);
	long long int three = (n-1)/3;
	long long int five = (n-1)/5;
	long long int fifteen = (n-1)/15;
	sum[i] = 3*(three*(three+1)/2)+5*(five*(five+1)/2)-15*(fifteen*(fifteen+1)/2);
  
      }
 
    for(i=0;i<t;i++)
       printf("%lu\n",sum[i]);

}
