#include<stdio.h>
int main(){
        int a[2][2];
        int **p;

        a[0][0] = 10;
        a[0][1] = 20;
        a[1][0] = 30;
        a[1][1] = 40;


        
        printf("%d\n",*(*(a+0)+1) );
}
