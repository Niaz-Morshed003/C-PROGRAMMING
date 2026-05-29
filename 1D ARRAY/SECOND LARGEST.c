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
    int max=a[0];
    int ind;
    for(i=0;i<n;i++)
    {
        if (max<a[i])
            {max=a[i];
            ind=i;}
    }
    printf("max=%d\n",max);
    printf("location=%d\n",ind);

    int smax = a[0];
    for(i=0;i<n;i++)
    {

            if (smax<a[i]&&a[i]!=max)
            {
                smax=a[i];
                ind=i;
            }
        }

   printf("smax=%d\n",smax);
    printf("location=%d\n",ind); }

