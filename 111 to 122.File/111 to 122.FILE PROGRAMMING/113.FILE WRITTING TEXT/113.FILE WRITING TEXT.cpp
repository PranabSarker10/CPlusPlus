///File writing text
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("text.txt");
    if (!out)
        cout<<"Can't open file"<<endl;
    else
    {
        out<<"NIL NIRVANA"<<endl;
        out.close();///As else statement is for opening file so close part should be in else part.
    }

    return 0;
}
