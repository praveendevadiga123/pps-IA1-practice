#include <stdio.h>

int input_array_size()
{
  int n;
  printf("Enter size of array\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n,int a[n])
{
  int i;
  printf("Enter the numbers to add\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
}

int sum_n_arrays(int n,int a[n])
{
  int i,sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}

void output_n(int n, int a[n], int sum)
{
  int i;
  for(i=0;i<n-1;i++)
  {
    printf("%d + ",a[i]);
   
  }
  printf("%d is %d\n",a[i],sum);
}
int main()
{
  int x=input_array_size();
  int a[x];
  input_array(x,a);
  int sum=sum_n_arrays(x,a);
  output_n(x,a,sum); 
  return 0;
  
}