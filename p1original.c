#include<stdio.h>
#include<math.h>
void input(float*base,float*height)
{
  printf("enter the base\n");
  scanf("%f");
  printf("enter the height\n");
  scanf("%f");
}
void find_area(float base,float height,float*area)
{
  *area=base*height/2;
}
void output(float base,float height,float area)
{
  printf("area of %f and %f is %f \n",base,height,area);
}
float main()
{
  float x,y,z;
  x=input();
  y=input();
  z= find_area(x,y);
  output(x,y,z);
  return 0;
}