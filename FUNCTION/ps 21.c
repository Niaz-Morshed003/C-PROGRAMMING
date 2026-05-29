#include<stdio.h>
#include<math.h>
void takeinp(int arr[],int n)
{ printf("elements=");
    for (int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
}
float calcmean(int arr1[],int n1)
{
    int sum=0;float avg;
    for(int i=0;i<n1;i++)
    {
        sum=sum+arr1[i];
    }
    avg=sum/n1;
    printf("avg=%f\n",avg);
    return avg;
}
void stdmean (int arr2[],int n2)
{ float sum=0.0;float mean=calcmean(arr2,n2);
for(int i=0;i<n2;i++)
    {
        sum=sum+(arr2[i]-mean)*(arr2[i]-mean);
    }
    float std=sqrt(sum/n2);
    printf("stdmean=%f\n",std);

}

int main ()

{

   int s;
   printf("s=");
   scanf("%d",&s);
   int a[s] ;
   takeinp(a,s);
   stdmean(a,s);



}
