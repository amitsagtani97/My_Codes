#include<stdio.h>
main( )
{
int i, j ;
for ( i = 1 ; i < 5 ; i++ )
{
j = g ( i ) ;
printf ( "\n%d", j ) ;
}
//Let Us CChapter 6: Data Types Revisited
}
g ( int x )
{
static int v = 1 ;
int b = 3 ;
v += x ;
return ( v + x + b ) ;
}
