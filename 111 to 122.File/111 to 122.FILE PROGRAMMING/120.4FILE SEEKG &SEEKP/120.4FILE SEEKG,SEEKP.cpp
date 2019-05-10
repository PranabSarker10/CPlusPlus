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
        in>>str;
        cout<<str;
        in.close();
    }

    return 0;
}
