#include<stdio.h>
int main()
{

    int i,a[3],X;
    double result,avg_result;
    for (i=0;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]<a[1] && a[0]<a[2] && a[0]<a[3])
    {
        X = a[0];
    }

    else if(a[1]<a[0] && a[1]<a[2] && a[1]>a[3])
    {
        X = a[1];
    }

    else if(a[2]<a[0] && a[2]<a[1] && a[2]<a[3])
    {
        X = a[2];
    }

    else if(a[3]<a[0] && a[3]<a[1] && a[3]<a[2])
    {
        X = a[3];
    }

    result = a[0]+a[1]+a[2]+a[3]-X;
    printf("%f\n",(float)result/3);

    return 0;
}
