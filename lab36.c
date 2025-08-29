#include <stdio.h>

void main()
{
    int n,i=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<=2*n;i=i+2)
    {
        printf("%d\n",i);
    }
return 0;
}

