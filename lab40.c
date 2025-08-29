#include <stdio.h>
void main()
{
    int n,i=2,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (i=2;i<=2*n;i+=2)
    {
        sum=sum+i;
    }
    printf("The sum of the first %d even natural numbers is:%d\n",n,sum);
return 0;

}
