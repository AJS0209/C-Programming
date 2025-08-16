#include<stdio.h>
int main()
{
float rupees,dollars;

printf("Enter the amount in rupees:");
scanf("%f",&rupees);

dollars=rupees/48;
printf("The amount in rupees is:%.2f\n",dollars);
return 0;
}