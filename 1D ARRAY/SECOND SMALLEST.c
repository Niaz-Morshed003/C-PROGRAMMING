#include <stdio.h>
int main ()
{ int n,i,j;
printf("n=");
scanf("%d",&n);
int a[n];
for (i=0;i<n;i++)
{
    printf("m[%d]=",i);
    scanf("%d",&a[i]);

}
    int min=a[0];
    int ind;
    for(i=0;i<n;i++)
    {
        if (min>a[i])
            {min=a[i];
            ind=i;}
    }
    printf("min=%d\n",min);
    printf("location=%d\n",ind);

    int smin = a[0];
    for(i=0;i<n;i++)
    {

            if (smin>a[i]&&a[i]!=min)
            {
                smin=a[i];
                ind=i;
            }
        }

   printf("smin=%d\n",smin);
    printf("location=%d\n",ind); }


