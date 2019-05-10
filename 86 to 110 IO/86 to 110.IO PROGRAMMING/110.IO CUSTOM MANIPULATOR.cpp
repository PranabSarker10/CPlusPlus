///IO CUSTOM MANIPULATOR

#include<iostream>
using namespace std;

ostream &sethex (ostream &stream)
{
    stream.setf(ios::showbase | ios::hex);
    return stream;
}

ostream &hr(ostream &stream)
{
    stream<<"\n-----------------\n";
    return stream;
}

int main()
{
    cout<<hex<<123<<endl;
    cout<<sethex<<123<<endl;
    cout<<hr<<"PRANAB SARKER"<<hr<<endl;

}
