#include<stdio.h>
int main()
{
	int m,n,x,y,z;
	scanf("%d %d",&m,&n);
{
	x = (m/2)*(n/2);
	
	y = (m*n)-(x*4);
	z = y/2;
	if((m*n)%2==0)
	printf("%d",z+x);
	else
	printf("%d",z+x+1);

}
	return 0;
}
