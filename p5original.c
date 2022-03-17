v#include<stdio.h>
int input()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a,int b)
{
  for(int i=1;i<=a &&i<=b;i++)
    if(if a%i=0 &&b%i==0)
    {
      gcd=i;
    }
}
void output(int a,int b,int gcd)
{
  printf("gcd of the %d and %d is %d",a,b,gcd);
}
int main()
{
  int a,b,gc;
  a=input();
  b=input();
  gc=gcd(a,b);
  
}