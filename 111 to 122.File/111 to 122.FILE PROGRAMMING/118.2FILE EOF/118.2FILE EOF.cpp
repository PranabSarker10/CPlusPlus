///File eof(end of file): IT is used to find the presence of line/lines in file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in;

    in.open("test.txt");
    if(!in)
        cout<<"Can't open file"<<endl;
    else
    {
        char str[100];
        while(!in.eof())///Here eof indicates the end of file
        {
             in.getline(str,100);
             cout<<str<<endl;
        }
        in.close();
    }
    return 0;
}
