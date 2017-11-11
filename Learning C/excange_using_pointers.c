#include<stdio.h>
int exchange(int *p, int *q);
int main()
{
	int x=200;
	int y=400;
	exchange(&x,&y);
	printf("x = %d\n",x);
	printf("y = %d\n",y);


}

int exchange(int *p, int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;


}
