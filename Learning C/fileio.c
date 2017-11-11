#include<stdio.h>
int main()
{
FILE *fp1;
FILE *fp2;
int x;
fp1 = fopen("from.txt", "r");
fp2 = fopen("to.txt", "w");
//printf("Enter five numb0ers seperated by space : \n");
//fprintf("%d %d %d %d %d\n",fp1);
while(!feof(fp1))
{
fscanf(fp1,"%d", &x);
fprintf(fp2,"%d", x);

}
fflush(fp2);
fclose(fp1);
fclose(fp2);


return 0;
}
