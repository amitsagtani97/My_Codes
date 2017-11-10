#include<stdio.h>
#include<math.h>
   int n;
   int i=2;
   scanf("%d",&n);
   while(i <= sqrt(n))
    {
        if(n%i==0) {
            printf("%d,",i);
            if (i != (n / i)) {
                printf("%d,",n/i);
            }
        } 

        i++;
    }
   

}
