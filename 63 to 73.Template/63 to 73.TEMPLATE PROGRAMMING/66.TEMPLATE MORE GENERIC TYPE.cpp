#include<iostream>
using namespace std;

template <class T1, class T2>
void print (T1 a, T2 b)///Here using void is logical. Because it indicates return type.
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    print(1,2);
    print(1,7.8);
    print(143024," Pranab sarker");
    return 0;
}




