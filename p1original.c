#include<stdio.h>
void input(float*base,float*height)
{
  printf("enter base value\n");
  scanf("%f",base);
  printf("enter the height value\n");
  scanf("%f",height);
}
void find_area(float base,float height,float*area)
{
  *area=(base*height)*0.5;
}
void output(float area)
{
  printf("area of triangle is %f",area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(area);
  return 0;
}
