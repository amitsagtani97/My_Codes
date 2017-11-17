#include<stdio.h>
#define row 5
#define column 5
int main()
{
int i,j,val[row][column];
for(i=0;i<5;i++)
 { for(j=0;j<5;j++)
    val[i][j]=(i+1)*(j+1);
 }
for(i=1;i<=row;i++)
 printf("%6d",i);
 printf("\n________________________________\n");
for(i=0;i<row;i++)
{ for(j=0;j<column;j++)
 printf("%4d ",val[i][j]);
 printf("\n");
 printf("%4d |",i);


}
}
