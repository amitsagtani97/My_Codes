#include<stdio.h>
int multiply(int n, int m);
void printvalue(void);
int multiply(int n, int m)
{
	return(n*m);
}

void printvalue()
{
	for(int i=1;i<40;i++)
	printf("_");
	printf("\n");
}


int main()
{

	int d,n,m;
	printvalue();
	printf("Enter two values to multiply : ");
	scanf("%d%d",&n,&m);
	d=multiply(n, m);
	printf("The product of the entered numbers is :%d\n",d);
	printvalue();
	return 0;
}
