#include<stdio.h>
#define size n
int main()
{
 int i,l,n,w,h;
 scanf("%d %d",&l,&n);
 char a[size];
for(i=0;i<n;i++)
{ scanf("%d %d",&w,&h);
   if((w==l)&&(h==l))
    a[i]="ACCEPTED";
  else if((w<l)||(h<l))
    a[i]="UPLOAD ANOTHER";
  else
   a[i]="CROP IT";
   }
for(i=0;i<n;i++)
 printf("%s\n",a[i]);
return 0;

}


