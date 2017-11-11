#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("Enter the siize of the aray : \n");
scanf("%d",&n);
int *p = (int *)malloc(n*sizeof(int));
for(int i=0; i<n;i++)

{
	p[i] = i;
	printf("%d\n",p[i]);


}


return 0;
}
