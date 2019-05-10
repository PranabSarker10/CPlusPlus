///Template Example
#include<iostream>
using namespace std;

template <class T>
void interchange (T &a, T &b)///As main value will be changed so we have to work with address.
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    double a = 5.9,b = 9.8;
    cout<<a<<" "<<b<<endl;
    interchange(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}




