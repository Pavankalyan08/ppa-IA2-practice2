#include<stdio.h>
struct_triangle
{
  float base,altitude,area;
}
typedef_triangle Triangle
int input_n()
{
  int n;
  printf("enter the number of the triangle");
  scanf("%d",&n);
  return n;
  }
Triangle input_triangle()
{
  Triangle t;
  printf("enter the base and altitude\n");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void input_n_triangle(int n,Triangle T[n])
{
  for(int i=0; i<n; i++)
    {
      t[i]=input_triangle(); 
    }
}
void find_area(Triangle*t)
{
  t→area = 0.5* t→base * t→altitude;
}
void find_area_n(int n,Triangle t[n])
{
  for(int i=0; i<n; i++)
    {
      find_area(&t[i]);
    }
  Trinagle find_smallest_triangle(int n,Trinagle t[n])
  {
    Triangle small ,area=0;
    for(int n=0; i<n; i++)
      {
        if(small.area<t[i.area])
          small.area=t[i].area;
      }
    
  }
}
int main()
{
  int  n , t;
  Trinagle t[n];
  n=input trinangle();
}
