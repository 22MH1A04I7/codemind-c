#include<stdio.h>
int main()
{
    int n,square,rem,sum=0;
    scanf("%d",&n);
    square=(n*n);
    while(square!=0)
    {
        
        rem=square%10;
        square=square/10;
        sum=sum+rem;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}