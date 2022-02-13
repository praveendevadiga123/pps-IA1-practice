#include<stdio.h>
#include<math.h>

float input()
{
  float n;
  printf("enter a number to find a square root\n");
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
  float xn,xnext;
  xn=n/2;
  xnext=0.5*(xn+(n/xn));
  while(fabs(xn-xnext>0.000001))
  {
    xn=xnext;
    xnext=0.5*(xn+(n/xn));
  }
  return xnext;
}
void output(float n,float result)
{
  printf("sqare root of number %f is %f\n",n,result);
}
int main()
{
  float x,result;
  x=input();
  result=square_root(x);
  output(x,result);
  return 0;
}