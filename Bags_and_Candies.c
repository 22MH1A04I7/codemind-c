#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int l=k*m;
    if(n%l==0)//n is numbr ,l if bags
    {
        printf("%d",n/l);
    }
    else
    {
        printf("%d",n/l+1);
    }
}