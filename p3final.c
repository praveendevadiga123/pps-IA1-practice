#include<stdio.h>

int input_n()
{
  int x;
  printf("enter a number\n");
  scanf("%d",&x);
  return x;
}

int sum_n(int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
  sum=sum+i;
  }
  return sum;

}
void output(int n,int sum)
{
  
  
  int i;
  for(int i=0;i<n;i++);
  {
    printf("%d+",i);
  }
  
  printf("the sum n numbers %d is %d\n",n,sum);

}
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;

}