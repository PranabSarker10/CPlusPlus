///File intro: we store data here. (file content)
///Reading data from file is called input. The stream used for reading file is ifstream.(input file stream)
///Keeping/Writing data in file is called output. The stream used for keeping and writing file is ofstream.(output file stream)
///Simultaneously reading and writing is done by fstream.
///If we open a file in write mode, then previous data will be deleted and new data will be added in the file. If file is not present then a new file is created.
///If we open a data in read mode then the file must be presented first. Then we have to read data from it.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in;
    in.open("text.txt");
    cout<<"Here text.txt file is not opened before running the program."<<endl;
    if(!in)
        cout<<"Cannot open file"<<endl;
    else
        cout<<"open file"<<endl;
    in.close();///This close is important. Because by this the file is saved. Without close we won't get save data.
    return 0;
}
