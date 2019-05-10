///Opereator & Operator overloading introduction
/** We cannot use operator overloading in next 4 cases.
1.We can not create new operator(Like as: $,@) by operator overloading.
2.We can not use some operator
(Like as:
 1).
 2).*(But unary & binary can be overloaded)
 3) :?
 4) ::
 5)sizeof
 6) # ## ) in operator overloading.
3.We can not change precedency(* will work before +) by operator overloading.
4.We can not do different works. (We can not use unary(a++) in binary(a++b) & binary(a/b) in unary(a/) )
5.Using (-) sign we can not do the works of (+)(Here string concatenation is not possible by using (-) sign).
6.We can not change anything.(Here (+) will add two string. we cannot change it.) We can add something new. I mean we can't do something which can break the general work/formula of operator. Like as we can't add to operand by using (-) sign. We have to use (+) sign then.
I mean, in operator overloading, The  Ex-characteristics will not be lost. New characteristics can be created.
*/
/**
There are 3 types of operator.
1.Unary(a++):Which has one operand.
2.Binary(a+b):Which has two operand.
3.Ternary((a<b)? c : d)):Which has at least 3 operand.
*/
///Opereator overloading overloads objects.

#include<iostream>
using namespace std;
int main()
{
    int a=10,b=14,c;///Here int is build-in datatype.
    string sa="Pranab Sarker 143024 ",sb ="CSE RUET",sc;///Here string is build-in class.
///In string concatenation or add is done.
    c = a+b;
    sc = sa+sb;
    cout<<c<<endl;
    cout<<sc<<endl;
    return 0;
}
