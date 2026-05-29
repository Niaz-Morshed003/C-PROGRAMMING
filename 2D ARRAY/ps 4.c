#include <stdio.h>
int main ()
{ int i,j,c,r,d1,d2,fd;
printf ("r,c=");
scanf("%d%d",&r,&c);
int a[r][c];
for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("displaying matrix=");printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");

        } printf("\n");
    }


    printf("\nmajor=");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i][i]);
    }
printf("\nminor=");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i][r-i-1]);
    }





}

