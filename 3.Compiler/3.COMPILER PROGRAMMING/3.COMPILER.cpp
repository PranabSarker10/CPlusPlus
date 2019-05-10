///Compiler converts human language to machine language.
///Codeblock is not a compiler.It's an IDE(Integrated Development Environment). It is used to make code faster.
///By using GNU C++   codeblock runs and compiles code.
///CD means Change Directory///Desktop
///If we have the downloaded GNU Compiler, then by using cmd.exe we can compile and run a program. This time we have no need to use codeblock.
#include<iostream>
using namespace std;
int main()
{
    int A,MESSI=10,RONALDO=7,NEYMER=11,HIGUAIN=9;
    string s;
    cout<<"Enter favourite player name(MESSI,RONALDO,NEYMER,HIGUAIN)(Capital letter):";
    cin>>s;
    cout<<"This is output:"<<endl;
    A = (s=="MESSI") ? MESSI : (s=="RONALDO") ? RONALDO : (s=="NEYMER") ? NEYMER : HIGUAIN;
    cout<<A<<endl;
    return 0;
}
