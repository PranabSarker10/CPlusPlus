///File seekg()=Helps to change the position of file from where we will take input.
///File seekp()=Helps to change the position of file from where we will start write.
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
        out <<"Hello World";
        out.close();
    }

    return 0;
}
