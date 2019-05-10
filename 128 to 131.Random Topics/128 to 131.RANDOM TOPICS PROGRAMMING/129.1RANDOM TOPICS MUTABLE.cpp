///Random topics mutable
///By using mutable, we can change value used in const.
#include<iostream>
using namespace std;

class abc
{
public:
    int x;
    abc() {x=4;}
    void change(int a) {x=a;}
};

int main()
{
    abc ob;
    cout<<ob.x<<endl;
    ob.change(12);
    cout<<ob.x<<endl;

    return 0;
}
