///File reading text
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("text.txt");
    if (!in)
        cout<<"Can't open file"<<endl;
    else
    {
        string s;
        in>>s;///As after NIL space is given so only NIL is printed.
        cout<<s<<endl;
        in.close();///As else statement is for opening file so close part should be in else part.
    }

    return 0;
}
