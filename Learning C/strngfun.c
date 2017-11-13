#include<stdio.h>
#include<string.h>
int main()
{
char p1[80],p2[80],p3[80];
printf("Enter string 1 :");
scanf("%[^\n]",p1);
printf(" Enter string 2 :");
scanf("%s",p2);
printf("\n Enter string 3 : ");
scanf("%s",p3);
strcat(p1,p2);
strcat(p3,p2);
printf("%s",p1);
printf("%s",p3);
printf("\n %s",p2);
int n=strlen(p2);
printf("%d",n);
}
