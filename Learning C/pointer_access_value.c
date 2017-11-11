#include<stdio.h>
int main()
{
int a;
int *p;
//int *b;
a=10;
p=&a;
//b=&p;
printf("The value of a is %d\n",a);
printf("The a is stored at address %u\n",p);
printf("The value stored at a is %d\n",*p);
printf("The %u is stored at %u\n",p,&p);



return 0;
}
