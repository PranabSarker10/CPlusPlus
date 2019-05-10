///IO CUSTOM INSERTER EXTRACTOR FINAL EXAMPLE
/**
Input:
3
Output:
  *
 ***
*****
*/
#include<iostream>
using namespace std;

class triangle
{
public:
    int n;
    triangle(){}
    triangle(int x){n=x;}
};
///output part:
ostream & operator << (ostream &stream, triangle t)
{
    int i,j;

    for(i=1;i<=t.n;i++)
    {
        for(j=1; j<=(t.n-i); j++)
            stream<<" ";
        for(j=1; j<=(2*i - 1); j++)
            stream<<"*";
        stream<<endl;
    }
    return stream;
}
///input part:
istream & operator >> (istream &stream, triangle &t)
{
    stream>>t.n;
    return stream;
}

int main()
{
    triangle ob;
    cin>>ob;
    cout<<ob;
    return 0;
}
