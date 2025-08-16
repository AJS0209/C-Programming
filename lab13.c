#include<stdio.h>
int main()
{
float kilograms,grams;

printf("Enter the weight in kilograms:");
scanf("%f",&kilograms);

grams=kilograms*1000;
printf("The weight in grams is:%.2f\n",grams);
return 0;
}