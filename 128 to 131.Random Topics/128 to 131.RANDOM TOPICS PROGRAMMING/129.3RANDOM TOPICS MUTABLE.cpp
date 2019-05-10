///Random topics mutable
///By using mutable, we can change value used in const.
#include<iostream>
using namespace std;

class abc
{
public:
    mutable int x;///Here mutable is used to change the value of const.
    abc() {x=4;}
    void change(int a) const {x=a;}
};

int main()
{
    abc ob;
    cout<<ob.x<<endl;
    ob.change(12);
    cout<<ob.x<<endl;

    return 0;
}


