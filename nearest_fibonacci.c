#include<stdio.h>
int main()
{
    int fir=0,sec=1,nxt=0,n;
    scanf("%d",&n);
    while(n>nxt)
    {
        nxt=fir+sec;
        fir=sec;
        sec=nxt;

    }
    if(n-fir<sec-n)
    {
        printf("%d",fir);
    }
    else if(n-fir==sec-n)
    {
        printf("%d %d",fir,sec);
    }
    else
    {
        printf("%d",sec);
    }
}