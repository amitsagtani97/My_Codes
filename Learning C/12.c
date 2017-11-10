#include<stdio.h>
#include<string.h>
void main()
{
union demo{

	int member1;
	int member2;
	char name[20];
}new;

new.member1=10;
new.member2=20;
strcpy(new.name, "Amit Sagtani");
printf("%d\n",sizeof(new));
printf("%d\n",new.member1);
printf("%d\n",new.member2);
printf("%s\n",new.name);


}
