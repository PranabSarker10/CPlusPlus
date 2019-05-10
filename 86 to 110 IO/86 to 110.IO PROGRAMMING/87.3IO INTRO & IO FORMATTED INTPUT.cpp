///IO FORMATTED OUTPUT
#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str,sizeof(str),'\n');
///Remember: Here last part ('\n') is a seperator part & it is set \n by default. I mean, if we don't write \n it will take \n by default. And we can change it.
    cout<<str;
    return 0;
}

