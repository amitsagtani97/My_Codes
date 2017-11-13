#include<stdio.h>
#include<string.h>
int main()
{
char a[80];
int i,c[300]={0};
printf("Enter your name : \n");
scanf("%s",a);
for(i=0;i<81;i++)
 {for(int j=0;j<=255;j++)
  {if(a[i]=='j')
   c[j]++;
 }}
for(i=0;i<256;i++)
{if(c[i]>0)
 printf("No of %c== %d\n",'i',c[i]);
}
}
