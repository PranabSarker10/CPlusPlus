///IO INTRO & IO FORMATTED OUTPUT
///Input->Process->Output
///Input=Collects data from user(Ex: keyboard) =>cin>>
///Output=Displays information on screen(Ex: monitor) =>cout<<
///Stream= Stream is used to maintain formatted input output(Ex: cin,cout,cerr,clog)
/**
string s;///Here if we take "Pranab Sarker", only Pranab will be taken(as we take space after Pranab).
cin>> s;
cout<< s;
*/
#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cin>>str;
    cout<<str;
    return 0;
}
