///Difference between C & C++
#include<iostream>
using namespace std;
int main()
{
    int a(5);///means int a = 5;
/// In C++, this is a new addition to declare the value of a variable.
    for(int i=1; i<=5; i++)
    {
        int b=i+1;
        cout<<b<<" ";
    }
    cout<<endl;
///cout<<b<<endl; <= Using this is not a true line here.
/// Because i & b will be used in the loop only. After finishing the loop i & b won't have any value.
///Remember:In C++, we can declare a variable whenever I need. But in C, it is not possible.
    cout<<"The value of a is:"<<endl;
    cout<<a<<endl;
    return 0;
}

