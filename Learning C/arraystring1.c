#include<stdio.h>
int main()
{
int i;
char strng1[80],strng2[80];
printf("Enter a string :\n");
scanf("%s",&strng1);
 for(i=0;strng1[i]!='\0';i++)
  strng2[i]=strng1[i];
  strng2[i]='\0';
printf("%-10.8s",strng2);
printf("The no. of characters in string 2 is %d\n",i);

}
