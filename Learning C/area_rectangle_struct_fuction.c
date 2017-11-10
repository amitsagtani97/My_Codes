#include<stdio.h>
struct rectangle{
int length;
int breadth;
};
int area_rect(struct rectangle recta)
{

return (recta.length*recta.breadth);

}


int main()
{

struct rectangle rec;
printf("Enter the length and breadth of the rectangle : ");
scanf("%d %d",&rec.length,&rec.breadth);
int area=area_rect(rec);
printf("The area of the rectangle is %d\n",area);
return 0;
}
