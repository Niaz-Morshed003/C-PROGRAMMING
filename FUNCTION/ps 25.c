#include<stdio.h>
void takeinp(int a[3][5])
{
    printf("inputs=");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void show(int a[3][5])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void scalar(int a[3][5],int sc)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {

            printf("%d\t",a[i][j]*sc);
        }
        printf("\n");
    }
}
int main()
{

    int a[3][5];
    int s;
    printf("s=");
    scanf("%d",&s);
    takeinp(a);
    show(a);
    scalar(a,s);
}

