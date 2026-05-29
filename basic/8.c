//14
  #include <stdio.h>
  int var ;
  int main ()
  {
      printf("taking the value for var = ");
      scanf("%d",&var);
      printf ("global=%d",var);
      int var;
      printf("taking the value for local var = ");
      scanf("%d",&var);
      printf ("local=%d\n",var);
      { extern int var ;
          printf ("global=%d",var);}
      return 0;
  }
