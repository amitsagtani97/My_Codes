#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("Enter the size of array : \n");
scanf("%d",&n);
int *p=(int*)calloc(n,sizeof(int));
for(int i=0;i<n;i++)
printf("%d\n",p[i]);



return 0;
}
