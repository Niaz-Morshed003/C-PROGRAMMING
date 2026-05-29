#include<stdio.h>
int main ()
{

    int i,j,n,m,found=0;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    } printf("intersex=");
    for(i=0;i<n;i++)
    {

        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
                {found=1;
                printf("%d ",a[i])  ;
            break;}
        }


        }
if(found==0)
          printf("empty")  ;


}

