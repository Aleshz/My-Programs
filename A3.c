#include <stdio.h>
#include <math.h>
int main()
{
  float r,d,c,a;
  printf("Enter radius of circle:");
  scanf("%f", &r);
  d=2*r;
  c=2*3.14*r;
  a=3.14*r*r;
  printf("Diameter of Circle is:%.2f\n", d);
  printf("Cicumference of Circle is:%.2f\n", c);
  printf("Area of Circle is:%.2f\n", a);
  return 0;
}