#include<stdio.h>
int main()
{
    int n,m,p,i,o;
    scanf("%d",&n);
    m=n%10;
    n=n/10;
    p=n%10;
    n=n/10;
    i=n%10;
    n=n/10;
    o=n%10;
    n=n/10;
    if(o==6)
    {
        o=9;
    }
    else if(i==6)
    {
        i=9;
    }
    else if(p==6)
    {
        p=9;
    }
    else if(m==6)
    {
        m=9;
    }
    printf("%d%d%d%d",o,i,p,m);
    
}