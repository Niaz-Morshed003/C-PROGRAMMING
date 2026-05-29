#include<stdio.h>
int main ()
{
    int i=2,num;
    printf("num=");
    scanf("%d",&num);
    for(i;i<num;i++)
    {
        if (num<=1){
            printf("not prime\n");
        break;}
        else if(num%i==0)
            {printf("not prime\n");
        break;}
         else

            {printf(" prime\n");
            break;
        }

    }
}
