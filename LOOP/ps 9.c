#include<stdio.h>
int main ()
{
    int att,ass,ct,mid,finall,n,sum,i=1;
    printf("n=");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
      printf("att,ass,ct,mid,finall=");
      scanf("%d%d%d%d%d",&att,&ass,&ct,&mid,&finall);
      sum=att+ass+ct+mid+finall ;
      if (sum>=90&&sum<=100)
        printf("Grade of student %d is A\n",i);
      else if (sum>=86&&sum<=89)
        printf("Grade of student %d is A-\n",i);
        else if (sum>=82&&sum<=85)
        printf("Grade of student %d is B+\n",i);
        else if (sum>=78&&sum<=81)
        printf("Grade of student %d is B\n",i);
        else if (sum>=70&&sum<=73)
        printf("Grade of student %d is B-\n",i);
        else if (sum>=66&&sum<=69)
        printf("Grade of student %d is C+\n",i);
        else if (sum>=62&&sum<=65)
        printf("Grade of student %d is C\n",i);
        else if (sum>=58&&sum<=61)
        printf("Grade of student %d is C-\n",i);
        else if (sum>=55&&sum<=57)
        printf("Grade of student %d is D\n",i);

        else
        printf("Grade of student %d is F",i);


    }
}
