    #include <stdio.h>
     
    int main()
    {
       int n,j,i,num,count=0;
       scanf("%d",&n);
       
       while(n--)
       {     num=0;
             count=0;
       		scanf("%d",&num);
       		for(i=1;i<=num-1;i++)
       			{  
       			for(j=i+1;j<=num;j++)
       				{   int d=i^j;
       					//printf("%d<%d\n",d,num);
       					if(d<=num)
       					{
       						count++;
       					}
       				}
       			
       				
       			}
       			printf("%d\n",count);
       }
        return 0;
    }