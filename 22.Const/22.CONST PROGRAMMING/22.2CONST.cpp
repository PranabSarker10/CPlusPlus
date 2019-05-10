///Const: Here we can keep a value like as constant.
///If we declare const(must have a value) than in the whole program I cannot change it.
#include<iostream>
using namespace std;

class exampleConst
{
public:
    int a;
    int change(int x) const
    {
/// But a = x; will show error as we can't change the value of const.
        x =a + x;
        return a;
    }
};

int main()
{
    int i = 0;
    const int& r = i;///constant reference
/// But r = 5; will show error as we can't change the value of const.

    return 0;
}


