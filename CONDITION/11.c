#include <stdio.h>
int main ()
{
   int a;
   int b,c;
   scanf("%d%d",&b,&c);
   scanf("%d",&a);
   switch (a)


   {
   case 1 :
   case 2 :
   case 3 :
    case 4 : printf("multipication = %d",b*c);
    break ;
    case 5 : if (c==0) printf("impossible");
    else { printf ("1 for quotient and 2 for remainder");
    int d;
    scanf(" %d",&d);
    switch (d)
    case 1 : printf("quotient = %d",b/c);break;
    case 7 : printf("remainder = %d",b%c);break;
    default : printf ("not available");

    }
break;

   }


return 0;

}
