#include<stdio.h>

void input(int *a,int *b)
{
  printf("enter a two  number\n");
  scanf("%d%d",a,b);

}

void add(int a,int b,int *sum)
{
  *sum=a+b;

}
void output(int a,int b, int sum)
{
  printf("the sum of %d + %d is=%d\n",a,b,sum);
}
int main()
{
  int m,n,sum;
  input(&m,&n);
  add(m,n,&sum);
  output(m,n,sum);
  return 0;
}