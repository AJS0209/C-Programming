#include <stdio.h>
void main()
{
    int n,i=1,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i+=1)
    {
        sum=sum+i;
    }
    printf("The sum of the first %d natural numbers is:%d\n",n,sum);
return 0;

}
