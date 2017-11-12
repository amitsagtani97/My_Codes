#include<stdio.h>
int main()
//void srt(int a[]);
{
	int a[5];
	printf("Enter five numbers : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nNumbers before sorting : ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}

	srt(a);
	printf("\nThe no's after sorting are : ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;

}

void srt(int a[])
 {
	for(int i=0;i<5;i++)
		{
			for(int j=0;j<5-i;j++)
			{
				if(a[j]>a[j+1])
				{
					int t=a[j];
					a[j] = a[j+1];
					a[j+1] = t;
				}
			}
		}


}
