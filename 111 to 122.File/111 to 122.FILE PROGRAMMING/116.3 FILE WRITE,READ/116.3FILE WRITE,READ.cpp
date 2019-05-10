///File write,read
///They are used to read & write structure,object,class etc.
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct student
{
    char name[30];
    int sid;
};

int main()
{
    struct student a,b;
    strcpy(a.name,"Pranab Sarker");
    a.sid = 143024;



    ofstream out("info.txt");

    if (!out)
        cout<<"Can't open file"<<endl;
    else
    {
        out.write((char *)&a, sizeof(struct student) );///Here for write mode we have to cast by character.
///Remember: For casting by character, some unexpected values with the exact value is shown in the file. we have no need to care it.
        out.close();///As else statement is for opening file so close part should be in else part.
    }




    ifstream in("info.txt");

    if(!in)
        cout<<"Can't open file"<<endl;
    else
    {
        in.read((char *)&b, sizeof(struct student) );///Here for write mode we have to cast by character.
        cout<<"Name: "<<b.name<<endl<<"Id: "<<b.sid<<endl;
        in.close();///As else statement is for opening file so close part should be in else part.
    }
    return 0;
}
