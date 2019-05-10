///References:It works like as pointer. But (->) sign is not used. (.) sign is used.
#include<iostream>
using namespace std;

int main()
{
    int i;
    i = 5;
    cout<<i<<endl;
    int *p;
    p = &i;
    cout<<*p<<endl;

    int& r = i;///At the time of creating referenes, we have to give the variable which is addressed by references. And all other works is like as pointer.
    cout<<r<<endl;
///PROVE THAT: The address of i,*p,r is same.
   r = 7;
   cout<<i<<endl;
   cout<<*p<<endl;
   cout<<r<<endl;

    return 0;
}
