#include<stdio.h>
void takeinp(int m,int n,int a[m][n])
{
    printf("inputs=");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void show(int m,int n,int a[m][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void scalar(int m,int n,int a[m][n],int sc)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {

            printf("%d\t",a[i][j]*sc);
        }
        printf("\n");
    }
}
int main()
{
int m,n,s;
printf("m,n,s=");
scanf("%d%d%d",&m,&n,&s);
    int a[m][n];
    takeinp(m,n,a);
    show(m,n,a);
    scalar(m,n,a,s);
}


