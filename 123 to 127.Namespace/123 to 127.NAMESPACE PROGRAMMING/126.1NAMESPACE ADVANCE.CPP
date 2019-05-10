///Namespce advance
///Merging two namespaces of same name developing by two different person.
#include<iostream>
#include<fstream>
using namespace std;///Here we used namespace by using.

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

namespace N
{
    int b;
}

int N::f()
{
    return 2;
}

int main()
{
    N::a=5;
    N::b=6;

    cout << N::a*N::b <<endl;///Here output 30 is come by merging of a and b.///Treating as one namespace.


    using namespace N;
///As we write using so scope resulation is not needed.
///If we declare 'using namespace N;' as global than we can use it (without scope resulation) in every function under that line.
     a = 5;
    cout<<a<<endl;

    c ob;
    ob.x = 7;
    cout<<ob.x<<endl;

    cout<<f()<<endl;

    return 0;
}


