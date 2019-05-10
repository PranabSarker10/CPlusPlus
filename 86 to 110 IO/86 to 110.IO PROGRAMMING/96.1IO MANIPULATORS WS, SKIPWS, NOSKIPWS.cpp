///IO MANIPULATORS WS, SKIPWS, NOSKIPWS
/**
ws(whitespace)/skipws:Their work is ignoring whitespace.
noskipws:Their work is not ignoring whitespace.
*/
#include<iostream>
using namespace std;

int main()
{
    char s;
    cin>>s;///Here by default skipws is set. I mean space is not taken as an input. It is skipped by default.
    cout<<s;
    return 0;
}
