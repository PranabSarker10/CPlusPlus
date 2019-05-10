#include<stdio.h>
int main()
{
    long long int a=0,b=1,c,i;
    printf("%lld\n%lld\n",a,b);
    c=a+b;
    for(i=1;i<=98;i++)
    {
        printf("%lld\n",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
