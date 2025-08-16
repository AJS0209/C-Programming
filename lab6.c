#include<stdio.h>
int main()
{
int num1,num2;

printf("The First Number:");
scanf("%d", &num1);

printf("The Second Number:");
scanf("%d", &num2);

printf("The sum is: %d\n",num1+num2);
printf("The difference is: %d\n",num1-num2);
printf("The product is: %d\n",num1*num2);
printf("The quotient is: %f\n",(float)num1/(float)num2);
return 0;
}