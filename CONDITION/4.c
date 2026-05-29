//12
#include <stdio.h>
int main ()
{ int num1,num2,choice;
printf ("Taking numbers and choices = ");
scanf ("%d%d%d",&num1,&num2,&choice);
switch (choice)
{
    case 1 : printf ("Addition is : %d",num1+num2);
    break;
    case 2 : printf ("Substraction is : %d",num1-num2);
    break;
    case 3 : printf ("Multipication is : %d",num1*num2);
    break;
    case 4 : printf ("Division is : %d",num1/num2);
    break;
    default : printf ("Invalid");
    return 0;
}








}
