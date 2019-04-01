#include <stdio.h>
int main()
{
    char a[100],t;
    int i,b=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        b++;
    }
    for(i=0;i<=b;i=i+2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
        printf("%c%c",a[i],a[i+1]);
    }
    return 0;
}
