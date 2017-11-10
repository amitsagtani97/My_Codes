#include<stdio.h>
struct complex
{
	int real;
	int img;
};
int main()
{
 	struct complex c1,c2,c3;
 	printf("Enter real and imaginary part of 1st complex number : ");
 	scanf("%d%d",&c1.real,&c1.img);
 	printf("Enter Real and imaginary part of 2nd complex number : ");
 	scanf("%d%d",&c2.real,&c2.img);
 	c3.real=c1.real+c2.real;
 	c3.img=c1.img+c2.img;
 	printf("The sum is %d+%di\n",c3.real,c3.img);

	return 0;
}