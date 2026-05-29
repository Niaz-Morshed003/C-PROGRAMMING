#include<stdio.h>
int main ()
{
   int a,b,c;
   printf("taking value for a,b,c=");
   scanf("%d%d%d",&a,&b,&c);
   if (a>b)
   {
       if(a+b<20)
        printf("OKAY\t");
       if(a+b!=20)
        printf("NOT OKAY\t");
      if(a+b==25)
        printf("LEAVE IT ,DUDE!\t");
   }

   if (b>c)
   { if(a+b>20)
        printf("OKAY\t");
      if(a+b==20)
        printf("NOT OKAY\t");
      if(a+b!=225)
        printf("LEAVE IT ,DUDE!");

   }


   else {if(a+b>20)
        printf("OKAY\t");
      else if(a+b!=20)
        printf("NOT OKAY\t");
      else
        printf("LEAVE IT ,DUDE!");
       }
       return 0;
}
