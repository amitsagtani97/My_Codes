#include<stdio.h>
#include<math.h>
#include"1.c"
#include"2.c"
#include"3.c"
float  main()
{
  float r;
  printf("Enter the radius : ");
  scanf("%f",&r);
  float area_circle=circle(r);
  printf("Area of circle : %.2f\n",area_circle);

  
  float length,breadth;
  printf("Enter the length and breadth of rectangle : ");
  scanf("%f %f",&length,&breadth);
  float area_rectangle;
  area_rectangle=rect(length,breadth);
  printf("The area of rectangle is %.2f\n",area_rectangle);

  float a,b,c;
  printf("Enter the sides of the triangle :");
  scanf("%f %f %f",&a,&b,&c);
  float area_triangle;
  area_triangle=trngle(a,b,c);
  printf("The area of the triangle is : %f",area_triangle);


}

