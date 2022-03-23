#include<stdio.h>
struct_triangle
{
float base,altitude,area;
};
typedef_triangle Triangle
Triangle input_triangle()
{
  Triangle b;
  printf("enter the value");
  scanf("%f %f",&b.base,&b.altitude);
  return b;
}
void find_area(Triangle*t)
{
  t.area= 0.5* t→base *t→altitude;
}
void output(Triangle t)
{
}
  printf("area of the triangle with base%f and altitude%f is %f",t.base,t.altitude,t.area);gcc 
int main (void)
{
  Triangle t;
  t=input_triangale;
  find_area(&t);
  output(t);
  return 0;
}