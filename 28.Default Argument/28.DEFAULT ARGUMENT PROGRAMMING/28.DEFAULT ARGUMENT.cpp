///Default argument:Taking something if generally no value is presented.
#include<iostream>
using namespace std;

int abc (int a, int b)
{
    return a+b;
}

int same_abc (int a, int b=0)///Remember: Only the last value will default.
{
    return a+b;
}

int default_abc (int a, int b=1)///Remember: Only the last value will default.
{
    return a+b;
}

int  main()
{
    cout<<abc(8,7)<<endl;///Output = 8+7 = 15.
    cout<<same_abc(8,7)<<endl;///As b is present in abc(8,7) so b=0 will not be executed. Output = 8+7 =15.
    cout<<default_abc(8)<<endl;///As b is present in abc(8) so b=1 will be executed. Output = 8+1 =9.

    return 0;
}
