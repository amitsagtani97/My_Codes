#include<stdio.h>
void space(int x);
int main()
{
  	int x,y,z;
  	printf("Enter two no's and the space b/w them to display : ");
  	scanf("%d %d %d",&x,&y,&z);
  	printf("The no's are : %d",x);
	space(z);
	printf("%d",y);
  	space(z);

	return 0;
}
void space(int x)
{
	for(int i=0;i<=x;i++)
		printf(" ");

}
