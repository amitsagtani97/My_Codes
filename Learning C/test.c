#include<stdio.h>

int main()

{

int t,i;

scanf("%d",&t);

int a[t],b[t],c[t];

for(i=0;i<t;i++)

{

	scanf("%d %d",&a[i],&b[i]);

	c[i]=a[i]-b[i];

}

int max=c[0],min=c[0];

{

	for(i=1;i<t;i++)

	if(c[i]>max)

	max=c[i];

	else if(c[i]<min)

	min=c[i];

}

if(max>(-1*min))

 printf("1 %d",max);

 else

  printf("2 %d",-1*min);

return 0;



}
