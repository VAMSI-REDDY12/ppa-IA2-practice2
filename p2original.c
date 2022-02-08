#include<stdio.h>
int input(int *a,int *b,int *c)
{
  printf("enter three numbers\n");
  scanf("%d%d%d",a,b,c);
  return 0;
}
void tri(int a,int b,int c,int *result)
{
  if(a!=b && b!=c && c!=a)
  {
  *result=3;
  }
  else
  {
    *result=4;
  }
}
void output(int result)
{
  if(result==3)
  {
    printf("it is scalene");
  }
  else if(result==4)
{
  printf("it is not scalene ");
  }
}
int main()
{
  int a,b,c,result;
  input(&a,&b,&c);
  tri(a,b,c,&result);
  output(result);
  return 0;
}
