#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter two numbers to multiply : ");
scanf("%d %d",&a,&b);
c=b%10;
d=b/10;

printf("		%d\n",a);
printf("               *%d\n",b);
printf("            -------------\n");
printf("               %d\n",a*c);
printf("              +%d\n",d*a);
printf("           --------------\n");
printf("               %d         ",(a*c)+(10*d*a));
return 0;
}
