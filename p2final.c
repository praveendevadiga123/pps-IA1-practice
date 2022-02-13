#include<stdio.h>

int input()
{
  int n;
  printf("enter a numaber\n");
  scanf("%d",&n);
  return n;

}
int cmp(int a,int b,int c)
{
  if(a<b && a>c)
  return a;
  else if(b>c)
  return b;
  else
  return c;
}

void output(int a,int b,int c,int largest)
{
  printf("the largest among all %d\n",largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}