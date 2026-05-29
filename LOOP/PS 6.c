#include<stdio.h>
void main ()
{
    int pl1,pl2,n,i=1;
    printf("\nplayer1=");
    scanf("%d",&pl1);
    printf("n=");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        printf("\nplayer2=");
    scanf("%d",&pl2);
    if(pl1==pl2)
    {
       printf("PLAYER 2 WINS\n") ;
       break;
    }
    else {
        printf("wrong,%d chances left.\n",n-i) ;
    }
    }


    if (i>n)
        printf("PLAYER 1 WINS\n") ;
}
