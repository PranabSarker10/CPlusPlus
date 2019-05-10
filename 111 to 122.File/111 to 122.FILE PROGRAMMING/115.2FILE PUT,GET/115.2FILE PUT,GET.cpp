///File put(use for printing character in a file),get(use for reading character from a file)
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
        int i=0;
        char ch[50] = "Pranab Sarker";
        while(ch[i]!=' ')
        {
            out.put(ch[i]);
            i++;
        }
        out.close();///As else statement is for opening file so close part should be in else part.
    }
    return 0;
}
