 #include<stdio.h>
int main ()
{ int i,j,n,sym=0;
printf("n=");
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
    }
} printf("IN A MATRIX VIEW="); printf("\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d",a[i][j]);
        printf("\t");

    }
 printf("\n");

}

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i][j]!=a[j][i])
        {
            sym=1;
            break;
        }

    }
 if (sym==1) break;
}

if(sym==0)
    printf("\nyes,sym.");
else printf("\nno."); }


