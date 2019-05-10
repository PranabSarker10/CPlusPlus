///IO MANIPULATORS WS, SKIPWS, NOSKIPWS
/**
ws(whitespace)/skipws:Their work is ignoring whitespace.
noskipws:Their work is not ignoring whitespace.
*/
#include<iostream>
using namespace std;

int main()
{
    char s,k;
    cin>> noskipws >> s;///The advantage using of manipulator is that we don't have to use set function here.
///For using noskipws manipulator we have taken space as an input.
    cin >> ws >> k;///As we write ws so now space will be again skipped(like as starting space was skipped).
    cout<<(int)s<<endl;///Input space(' ').
    cout<<(int)k;///Input enter.
    return 0;
}
