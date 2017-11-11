#include<stdio.h>
#include<stdlib.h>
int *add(int *a, int *b);
//void PHW();
int main()
{
int a=3;
int b=2;
int *ptr = add(&a, &b);
printf("The sum is %d",*ptr);

return 0;
}

int *add(int *a, int *b)
{

int c;
c=(*a)+(*b);
return (&c);

}
