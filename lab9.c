#include<stdio.h>
int main()
{
int dollars,rupees;

printf("Enter the amount in dollars:");
scanf("%d",&dollars);

rupees=dollars*48;
printf("The amount in rupees is:%d\n",rupees);
return 0;
}