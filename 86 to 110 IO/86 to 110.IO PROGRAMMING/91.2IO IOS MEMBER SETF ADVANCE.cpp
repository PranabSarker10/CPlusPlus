///IO IOS MEMBER SETF ADVANCE

#include<iostream>
using namespace std;

int main()
{
    //cout.set(f1,f2);
    cout.setf(ios::hex,ios::basefield);
///Here 1st basefield will reset and it will set base on hex.
    cout<<100<<endl;
    return 0;
}

