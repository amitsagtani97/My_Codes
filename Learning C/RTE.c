#include<stdio.h>
#include<stdlib.h>
  int main() {
  long long int n,i,j;
  scanf("%lld",&n);
  int *a = (int*)malloc(sizeof(int)*n);
  long long int greater_than[n],profit[n],no[n];
  for(i=0;i<n;i++)
  scanf("%lld",&no[i]);

  for(i=0;i<n;i++)  
   { greater_than[i]=-1;
     for(j=0;j<n;j++)
      { if(no[j]>=no[i])
        greater_than[i]++;

      }

   }

   for(i=0;i<n;i++)
    profit[i]=no[i]*(greater_than[i]+1);

  long long int max=profit[0];
    for(i=1;i<n;i++)
   { if(profit[i]>max)
     max=profit[i];
   }

  printf("%lld",max);


return 0;

}
