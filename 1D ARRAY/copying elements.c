#include<stdio.h>
int main ()
{
  int arr1[200],arr2[500],n,i;
  printf("n=");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {printf("\narr1[%d]=",i);
  scanf("%d",&arr1[i]);
  }

    for(i=0;i<n;i++)
  {
      arr2[i]=arr1[i];
      printf("\narr2[%d]=%d\n",i,arr2[i]);
  }

}
