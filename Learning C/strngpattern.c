#include<stdio.h>
main()
{
char pt[16]="CProgramming|";
for(int i=0;i<14;i++)
printf("%-12.*s\n",i,pt);
 
for(int i=13;i>=0;i--)
printf("%-12.*s\n",i,pt);



}
