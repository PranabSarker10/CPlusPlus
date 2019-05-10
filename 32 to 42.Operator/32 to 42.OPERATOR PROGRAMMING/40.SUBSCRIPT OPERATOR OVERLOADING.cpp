///Subscript Operator([]) overloading
///Generally this operator is one kind of binary operator. As here(arr[4]) we have a parameter.
#include<iostream>
using namespace std;

class Number
{
    int x,arr[5];///Private member variable
public:
    Number()
    {
        x=1;
        for(int i=1;i<=5;i++)
            arr[i-1] = i*x;

    }///constructor
    Number(int a)
    {
        x=a;
        for(int i=1;i<=5;i++)
            arr[i-1] = i*x;
    }///constructor
    void get(int &a){a=x;}
    void set(int a){x=a;}
    void print(){cout<<x<<endl;}

    int operator [] (int a);///As binary operator so (int a) is written(as an integer parameter).
};

int Number::operator [] (int a)
{
    return arr[a-1];
}

int main()
{
    Number n1(9),n2(4),n3;
    cout<<n1[3]<<endl;

    return 0;
}
