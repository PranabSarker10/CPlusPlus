///File put(use for printing character in a file),get(use for reading character from a file)
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
        while(in)
        {
            char ch;
            in.get(ch);
            if(in)
                cout<<ch<<endl;
        }
        in.close();///As else statement is for opening file so close part should be in else part.
    }
    return 0;
}
