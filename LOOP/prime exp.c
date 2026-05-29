#include <stdio.h>
int main ()
{ int num1,num2,i,j;
printf("num1,num2=");
scanf("%d%d",&num1,&num2);
for (i=num1;i<=num2;i++)

{  for (j=2;j<i;j++)
    {if (i%j==0)
        break;}
        if (j==i)
            printf("%d,",i);

}

   return 0;


}

