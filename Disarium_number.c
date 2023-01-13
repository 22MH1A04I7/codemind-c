#include<stdio.h>
#include<math.h>
int I(int n)
{
    int h=0;
    while(n!=0)
    {
        h++;
        n/=10;
    }
    return h;
}
int main()
{
    int s=0,r,m,q,t;
    scanf("%d",&m);
    q=I(m);
    t=m;
    while(t>0)
    {
        r=t%10;
        s=s+(int)pow(r,q);
        t=t/10;
        q--;
    }
    if(m==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}