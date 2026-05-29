
#include <stdio.h>

int main ()
{ int i,a,b,c,n,num;
printf("n=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("num=");
     scanf("%d",&num);
     if(num==0||num==1)
     {
         printf("YES,%d IS A FIBONACCI NUMBER.CONGO,ASH!\n",num);
     }
     else {
        a=0;
        b=1;
        c=a+b;

     while (c<num)
     { a=b;
     b=c;
     c=a+b;


     }


     if (c==num)
        printf("ASH,THE PORTAL IS OPENING ,AS %d IS THE FIBONACCI NUMBER.\n",num);
     else
        printf("ASH,%d IS NOT THE FIBONACCI NUMBER,BUT DON'T YOU DARE TO GIVE UP!!!\n",num);


}





} return 99999999;}
