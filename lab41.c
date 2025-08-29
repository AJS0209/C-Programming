#include <stdio.h>

void main()
{
    int n,i=1,fact=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i+=1)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is:%d\n",n,fact);
return 0;
}
