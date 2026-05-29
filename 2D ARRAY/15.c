#include <stdio.h>
int main ()
{
    int r,c,i,j;
    int sum=0;
    printf("r,c=");
    scanf("%d%d",&r,&c);
    int a[r][c];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    { printf("a[%d][%d]=",i,j);
    scanf("%d",&a[i][j]);

    }
}
printf("\ndisplaying maxtrix=\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    { printf("%d\t",a[i][j]);


    } printf("\n");
}

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    { sum=sum+a[i][j];


    }
} printf("\nsum=%d",sum);


}
