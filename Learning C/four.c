#include<stdio.h>
#define size t
int main()
{
long long int t,i,a,b;
scanf("%lld",t);
//int *size = (int*)malloc(sizeof(int)*size);
long long int no[size],no_four[size];
for(i=0;i<t;i++)
    {
      no[i]=0;
      no_four[i]=0;
      scanf("%lld",&no[i]);
      b=0;
      while(b>3)
      { a=no[i]%10;
         if(a==4)
          {
           no_four[i]++;
          }
            b=no[i]/10;
      }

    }

for(i=0;i<t;i++)
printf("%lld\n",no_four[i]);
return 0;
}
