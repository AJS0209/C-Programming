#include<stdio.h>
int main()
{
float dollars,rupees;
float pounds;

printf("Enter the amount in dollars:");
scanf("%f",&dollars);

rupees=dollars*48;
pounds=rupees/70;
printf("The amount in pounds is:%f\n",pounds);
return 0;
}