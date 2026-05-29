// do while loop
#include<stdio.h>
void main ()
{
    int x,y;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    if(x>y)
    {
        do{ printf("%d\n",x*x);
        x--;

        } while(x>y);
    }
    else if(x<y)
    {
        do{ printf("%d\n",x*x);
        x++;

        } while(x<y);
    }

    else if (x==y)
        printf("reached.");
        printf("reached.");
}


