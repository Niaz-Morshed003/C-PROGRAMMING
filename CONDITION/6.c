
//14



#include <stdio.h>
#include <math.h>


int main ()
{ float num1,num2 ;
int choice;
printf ("Taking numbers and choices = ");
scanf ("%f%f%d",&num1,&num2,&choice);
switch (choice)
{
    case 1 : printf ("Addition is : %f",num1+num2);
    break;
    case 2 : printf ("Substraction is : %f",num1-num2);
    break;
    case 3 : printf ("Multipication is : %f",num1*num2);
    break;
    case 4 : if (num2!=0)
     {printf("1 for / and 2 for %");
    printf("Take your choice");int choice;
    scanf ("%d",&choice);
    switch (choice) {
    case 1 : printf ("Quotient is : %f\n",num1/num2);
    break;
    case 2 : printf ("Remainder is : %f",fmod(num1,num2));

        break;
        default : printf ("Invalid");
        }}
        else
        printf ("Invalid");


   break;
    default : printf ("Invalid");}
    return 0;



}

