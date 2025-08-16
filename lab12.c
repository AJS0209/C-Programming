#include<stdio.h>
int main()
{
float grams,kilograms;

printf("Enter the weight in grams:");
scanf("%f",&grams);

kilograms=grams/1000;
printf("The weight in kilograms is:%.2f\n",kilograms);
return 0;
}