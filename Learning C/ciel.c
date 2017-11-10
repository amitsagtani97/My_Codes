#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int x=abs(a-b);
	int i,y=x;
	for(i=0;x>0;i++)
	{
		x=x/10;
	}
int n=i;
int c[n];
//printf("%d",n);
for(i=0;i<n;i++)
{
	c[i]=y%10;
	y=y/10;
}
//printf("%d",c[1]);
if(c[0]==9)
	c[0]=4;
else
	c[0]=9;

for(i=0;i<n;i++)
	printf("%d",c[i]);
	return 0;


}
