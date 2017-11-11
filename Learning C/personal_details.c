#include<stdio.h>
struct details
{
	char name[30];
	int day;
	int month;
	int year;
	int salary;
};
int main()
{
	struct details p[2];
	for(int i=0;i<2;i++)
	{
		printf("Enter the name of person %d ",i+1);
		scanf("%[^\n]s",&p[i].name);
		printf("Enter date of joining of the person %d in format dd/mm/yyyy : ",i+1);
		scanf("%d/%d/%d",&p[i].day,&p[i].month,&p[i].year);
		printf("Enter slary of person %d : ",i+1);
		scanf("%d",&p[i].salary);
	}	
	printf(" Name\tDate of joining\t  Salary\n");
	for(int i=0;i<2;i++)
	{
		
		printf("%s\t%d/%d/%d/\t%d\n",p[i].name,p[i].day,p[i].month,p[i].year,p[i].salary);
	}

	return 0;
}