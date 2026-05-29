#include<stdio.h>
int main ()
{
    int n,i,flag,value,num,index;
    printf("n=");
    scanf("%d",&n);
    printf("value=");
    scanf("%d",&value);
    int arr1[n];
    for(i=0;i<n;i++)
    {
        printf("arr1[%d]=",i);
        scanf("%d",&arr1[i]);
        }
        for (i=0;i<n;i++) //keno break if er bhitor?

        {
            if(value==arr1[i])
            {
                num=arr1[i];
                index=i;
                flag=1;

            }
        }
        if (flag==1)
            printf("found! value is %d,index is %d",num,index);
        else
        printf("not found");
}

