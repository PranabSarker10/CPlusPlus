///Starting
/**
Advantages of c++:
C++ is an increment form of c. All of C is supported in C++. C++ is created with many extra features of C. C++ has no problem(from the view of C).

1.We have no need to use specifier()  in C++.
2.In C++, String is declared in an another class. So deficulties of using string in C is reduced in C++.
**/
#include<iostream>///As here include is presented so it is a header.
using namespace std;///It means that we have declared a standard namespace.
int main()
{
    int i=5,a;
    string s,Y,W,Z;
    string m,n,o,c,d;

    Y = "RUET";///Here we can straightly and easily assign a string.
    m = "PRANAB";
    n = " PARNA";
    o = m+n;/// HOW EASILY WE CAN ADD TWO STRING!!!
    c = "Great";
    d = " job!!";
    Z = "PRANAB SARKER";
    W = "PARNA RANI PAUL";
    Z = Z+"   "+"+"+"   ";

    cout<<i<<endl;///cout means console output.
    cin>>a;///cin means console input.
    cout<<a<<endl;
///Remember: For cin arrow_of_in(>>) is used and for cout arrow_of_out(<<) is used.

    cin>>s;
    cout<<s<<endl;
    cout<<Y<<endl;///endl = '\n' = "\n". But standard is using endl.

    cout<<"Adding two string is a very easy task in C++:\n";
    cout<<o<<endl;

    cout<<c<<d<<endl;
    cout<<"Pranab"<<" , "<<"RUET"<<" , "<<143024<<endl;
    cout<<Z<<W<<endl;
    return 0;
}
