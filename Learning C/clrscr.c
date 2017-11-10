#include<conio.h>
#include<stdio.h>
void main()
{
float Num=10.45678;
clrscr();
printf("exponential format with correct to two decimal places:-- %.2e\n",Num);
printf("exponential format with correct to four decimal places:-- %.4e\n",Num);
printf("exponential format with correct to eight decimal places:-- %.8e\n",Num);
getch();
}
