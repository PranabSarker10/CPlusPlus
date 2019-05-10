///File Modes
/**
///out
check file:
    if(file is present)
        All data of file will be cleared. And new item will be saved in the file.
    else
        New file will be created and data will be saved.
///in
check file:
    if(file is present)
        File will be read.
    else
        It can't open file.
///Append mode:
check file:
    if(file is present)
        All data of file will be remained unchange. And new item will be added with that.
    else
        New file will be created and data will be saved.

*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("test.txt");

    if(!out)
        cout<<"Can't create file"<<endl;
    else
    {
        out<< "SUDDENRISER";
        out.close();
    }

    return 0;
}
