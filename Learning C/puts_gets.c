#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char catname[110];
  char catfood[110];
  char sentence[]="";
  puts("Enter the name of your cat :");
  gets(catname);
  puts("Enter the food he eats  :");
  gets(catfood);
//  strcat(sentence,"The name of your cat is ");
  strcat(sentence,catname);
  strcat(sentence," loves to eat ");
  strcat(sentence,catfood);
  puts(sentence);

return 0;

}
