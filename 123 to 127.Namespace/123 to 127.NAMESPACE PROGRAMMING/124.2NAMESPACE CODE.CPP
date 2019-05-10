///Namespace Intro & code
///One varible is active in the range of its scope(scope resulation). In one scope, we cannot declare one value more than one time.
///But in big project, the classes can be simmilar. To avoid this we have use namespace(different types).
///Wew can keep many things in namespace.(Such as variable,class,function). If we create different namespaces than one namespace will not conflict with another namespace.
///Creating namespace is like creating class. But here private and protected is not needed. All works like as public.
/**
REMEMBER TWO IMPORTANT THINGS OF NAMESPACE:
1. Namespace must be global.
2.We can't declare a namespace into a function.
*/
#include<iostream>
#include<fstream>
using namespace std;

namespace N
{
    int a;

    class c
    {
    public:
        int x;
    };

    int f();
}
///Declaring the function defination outside the namespace.
int N::f()
{
    return 2;
}

int main()
{
    N::a = 5;
    cout<<N::a<<endl;

    N::c ob;
    ob.x = 7;
    cout<<ob.x<<endl;

    cout<<N::f()<<endl;

    return 0;
}
