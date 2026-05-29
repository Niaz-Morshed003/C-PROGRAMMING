+#include<stdio.h>
int main ()
{

    int i,j,n,m;
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
    } printf("a-b=");
    for(i=0;i<n;i++)
    {
        int found=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
                {found=1;
            break;}
        }
        if(found==0)
          printf("%d ",a[i])  ;
        }



}
