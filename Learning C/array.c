#include<stdio.h>
int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int b[4] = {6, 7, 8, 9};
	int c[9];
	int i,j=0;
	for(i=0; i<9; i++)
	{
		if(i < 5)
		c[i] = a[i];
		else
		{c[i] = b[j];
			j++;
		}
	}

for (i=0; i<9; i++)
	printf("%d\n
		",c[i]);
	return 0;
}