#include<stdio.h>
int n=2;
float average(int a[][n], int m, int n);
int main()
{
	int m=4;
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	average(a, m, n);
	return 0;
}
float average(int a[][n], int m, int n)
{
	float avg=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			avg = avg + a[i][j];
	}

	printf("The average of the given no's is : %f\n",avg/(m*n));
}
