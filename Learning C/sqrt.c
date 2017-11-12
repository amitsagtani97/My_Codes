#include<stdio.h>
#include<math.h>
main()
{

int a=2,b=4,c=-16;
float sqrt_1,sqrt_2;

printf("Enter the coffecients of qudratic equation : ");
//scanf("%d %d %d",&a,&b,&c);
sqrt_1= (-b+sqrt(b*b-4*a*c))/(2*a);
sqrt_2=(-b-sqrt(b*b-4*a*c))/(2*a);
printf("The roots of equation %dx^2+%dx+%c are %f and %f",a,b,c,sqrt_1,sqrt_2);





}
