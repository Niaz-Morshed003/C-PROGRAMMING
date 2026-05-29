
#include<stdio.h>
void assarr(int a[],int n)
{
 int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    } for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
int main ()
{
    int s,i=0;
    printf("s=");
    scanf("%d",&s);
    int b[s];
    for(i=0;i<s;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    assarr(b,s);

}


