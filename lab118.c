#include <stdio.h>
int main()
{
    FILE *f;
    char ch;
    int l=0,w=0,c=0,s=0;
    f=fopen("data.txt","r");
    if(f==NULL)
    {
        printf("File not found.");
        return 0;
    }
    while((ch=fgetc(f))!=EOF)
    {
        c++;
        if(ch==' ')
            s++;
        if(ch=='\n') 
            l++;
        if(ch==' '||ch=='\n') 
            w++;
    }
    w++;
    fclose(f);
    printf("lines=%d words=%d chars=%d spaces=%d",l,w,c,s);
    return 0;
}
