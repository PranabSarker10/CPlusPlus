///File tellg()=Helps to change the current position of file from where we will take input(read).
///File tellp()=Helps to change the current position of file from where we will start write.
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
        cout<< in.tellg()<<endl;///first in 0 position.

        in>>str;
        cout<<str<<endl;///first Hello
        cout<< in.tellg()<<endl;///Now from 5 position.
        in>>str;
        cout<<str<<endl;
        cout<< in.tellg()<<endl;///Now from -1 position.(-1 means file is finished so smaller than 0.

        in.close();
    }

    return 0;
}
