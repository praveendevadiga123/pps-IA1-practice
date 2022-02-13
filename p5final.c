#include<stdio.h>
#include<math.h>

float input()
{
  int n;
  printf("enter a number two find a sqaure root\n");
  scanf("%d",&n);
  return n;

}

float my_sqrt(float n)
{
  float xn,xnext;
  xn=n/2;
  xnext=0.5*(xn+n/xn);
  while(fabs(xn-xnext>.000001))
  {
  xn=xnext;
  xnext=0.5*(xn+n/xn);
  }
  return xnext;
}

void output(float n,float sqrt_result)
{
  printf("the square root of %f is %f\n",n,sqrt_result);

}

int main()
{
  float x,result;
  x=input();
  result=my_sqrt(x);
  output(x,result);
  return 0;
}