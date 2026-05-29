#include<stdio.h>
_Bool prime1 (int n)
  { int i=2;
      if (n<=1)
        return 0;
      for (i;i<n;i++)
      {
          if (n%i==0)
            return 0;
      }
      return 1;
  } void prime2 (int N)
  {
      int count=1,i=2;
      for(count;count<=N;i++)
      {
          if (prime1(i))
            count++;
      }

      printf("num is %d",i-1);
  } int main ()

  {
      int num1;
      printf("num1=");
      scanf("%d",&num1);
      prime2(num1);
  }
