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


    d1=(a[0][0]*a[1][1]*a[2][2])+(a[0][1]*a[1][2]*a[2][0])+(a[0][2]*a[1][0]*a[2][1]);
    printf("\nd1=%d",d1);
    d2=(a[2][0]*a[1][1]*a[0][2])+(a[2][1]*a[1][2]*a[0][0])+(a[2][2]*a[1][0]*a[0][1]);
    printf("\nd2=%d",d2);
    fd=d1-d2;
    printf("\nfd=%d",fd);









}
