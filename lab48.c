#include <stdio.h>
int main()
{
    int i,x,p=0,n=0,z=0;
    for(i=1;i<=200;i++)
    {
        scanf("%d",&x);
        if(x>0) p++;
        else if(x<0) n++;
        else z++;
    }
    printf("+ve=%d\n-ve=%d\nzero=%d",p,n,z);
    return 0;
}
