///File tellg()=Helps to change the current position of file from where we will take input(read).
///File tellp()=Helps to change the current position of file from where we will start write.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("test.txt");

    if(!out)
        cout<<"Can't open file"<<endl;
    else
    {
        cout<<out.tellp()<<endl;
        out<<"Hello World";
        cout<<out.tellp()<<endl;
        out<<"Hello World";
        cout<<out.tellp()<<endl;


        out.close();
    }

    return 0;
}
