///File getline: use for inputing fulline from a file.
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
