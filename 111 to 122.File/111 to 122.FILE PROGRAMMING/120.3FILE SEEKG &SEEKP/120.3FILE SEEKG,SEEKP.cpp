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
        out.seekp(4);///It will start writing after 4 space.
        out <<"World";///After Hello World we write World. Here only World is printed. Because file start write from first.
        out.close();
    }

    return 0;
}
