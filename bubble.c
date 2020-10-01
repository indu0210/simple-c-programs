#include <stdio.h>
#include <stdlib.h>

void bubble(int A[],int n)
{
  int i,j,temp;
  for(i = 0;i < n-1;i++)
  {
    for(j = 0;j < (n - i -1);j++)
    {
      if(A[j] >= A[j+1])
      {
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }
}

int main()
{
  int i,n,A[32];
  printf("Enter number of elements = ");
  scanf("%d",&n);
  printf("Enter input:\n");
  for(i = 0;i < n;i++)
  {
    scanf("%d",&A[i]);
  }
  bubble(A,n);
  printf("Output:\n");
  for(i =0;i<n;i++)
  {
    printf("%d\n",A[i]);
  }

} 
