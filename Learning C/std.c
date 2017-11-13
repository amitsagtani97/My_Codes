#include<stdio.h>
#include<math.h>
float mean(float a[]);
float mean(float a[])
{
	float m=0;
	for(int i=0;i<5;i++)
	{
		m += a[i];
	}
	a[2]=2;
	return (m/5);
}

int main()
{
	float a[5];
	float m,n[5],x=0;
	printf("Enter five numbers to find mean and standerd deviation : ");
	for(int i=0;i<5;i++)
	{
		scanf("%f",&a[i]);
	}
	m=mean(a);
	for(int i=0;i<5;i++)
	{
		n[i]=pow((m-a[i]),2);
		x += n[i];
	}
	x=sqrt(x/5);
	printf("-The mean of the no's is %f and standerd deviation is %f\n",m,x);
	printf("%f\n",a[2]);
	return 0;
}
