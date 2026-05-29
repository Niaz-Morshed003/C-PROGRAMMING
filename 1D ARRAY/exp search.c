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
        for (i=0;i<n;i++)

        {
            if(value==arr1[i])
            {
                num=arr1[i];
                index=i;
                flag=1;
                 printf("found!\nvalue is %d\nindex is %d",num,index); //jodi if er baire print kori tahole i er shob value print hobe ,if er moddhe korle just match gula print hobe


            }

        }
        if (flag==0)

        printf("not found");
}


