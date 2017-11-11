#include<stdio.h>
main()

{
int a[4][4],j,i;
for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
   {
    if(j>i)
     a[i][j]=8;
    else if(i>=j && (j%2==0))
   a[i][j]=0;
   else
   a[i][j]=1;
   

  }




}
printf("%d %d %d %d",a[0][0],a[0][1],a[0][2],a[0][3]);
printf("\n%d %d %d %d",a[1][0],a[1][1],a[1][2],a[1][3]);
printf("\n%d %d %d %d",a[2][0],a[2][1],a[2][2],a[2][3]);
printf("\n%d %d %d %d",a[3][0],a[3][1],a[3][2],a[3][3]);
}
