#include<stdio.h>
int main()
{
	int n,x,count=0;
	scanf("%d",&n);
	int no = 0;
	while(n > 0)
	{	x = n % 10;
		if (x == 1)
			count += 1;
		else if (x == 0)
		{	if (count >= no)
			{no = count;
			count = 0;}
		}
		n = n / 10;
	}	


printf("%d",no);



	return 0;
}