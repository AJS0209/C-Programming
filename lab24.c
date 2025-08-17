#include <stdio.h>
int main()
{
float sub1,sub2,sub3,total,average;
printf("Enter the marks for the first subject:");
scanf("%f",&sub1);
printf("Enter the marks for the second subject:");
scanf("%f",&sub2);
printf("Enter the marks for the third subject:");
scanf("%f",&sub3);
total = sub1 + sub2 + sub3;
average = total / 3;
printf("The total marks are: %.2f\n", total);
printf("The average marks are: %.2f\n", average);
return 0;
}