#include <stdio.h>
void main()
{
    int n,i=1,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<=2*n;i+=2)
    {
        sum=sum+i;
    }
    printf("The sum of the first %d odd natural numbers is:%d\n",n,sum);
return 0;

}
