#include<stdio.h>
int main()
{
float minutes,hours;

printf("Enter the number of minutes:");
scanf("%f",&minutes);

hours=minutes/60;
printf("The number of hours are:%.2f\n",hours);
return 0;
}