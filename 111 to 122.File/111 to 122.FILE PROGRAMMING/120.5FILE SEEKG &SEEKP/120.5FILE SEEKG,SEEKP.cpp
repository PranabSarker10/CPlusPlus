///File seekg()=Helps to change the position of file from where we will take input.
///File seekp()=Helps to change the position of file from where we will start write.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("test.txt");

    if(!in)
        cout<<"Can't open file"<<endl;
    else
    {
        char str[100];
        in.seekg(3);///first 3 parts will not be printed.
        in>>str;
        cout<<str;
        in.close();
    }

    return 0;
}
