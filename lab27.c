#include <stdio.h>

int main()
{
int a;
printf("Enter a:");
scanf("%d", &a);
if (a%7==0)
{
    printf("a is divisible by 7.");
}
else
{
    printf("a is not divisible by 7.");
}
return 0;
}
