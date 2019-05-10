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

        in.getline(str,100);
        cout<<str;
        in.close();
    }
    return 0;
}
