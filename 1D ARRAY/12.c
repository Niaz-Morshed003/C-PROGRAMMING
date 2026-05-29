#include<stdio.h>
int main()
{

    int i,j,n,temp;
    printf("n=");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("ascending=");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

      }




