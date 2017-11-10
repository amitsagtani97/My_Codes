#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
scanf("%d",&n);
int *p=(int*)malloc(n*sizeof(int));
int *q=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++)
{
scanf("%d %d",(p+i),(q+i));
}
for(int i=0;i<n;i++)
printf("%d\n",*(p+i) + *(q+i));



return 0;
}
