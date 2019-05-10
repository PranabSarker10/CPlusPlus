///Variable scope
///Block means a specific area. Here the area between starting and ending brace is block(Main function's block).
///A variable starts to be active from where it is declared. And it will active until the block is finished.
///We can take block anywhere in the program.
/**
Local variable: This value works until the block is finished. Local Variable has no value by default. We have to declare it. Without declaration of the value of local variable can cause garbage value.
Global variable:This value works in the whole program. And the value of a global variable is 0 by default.
**/
///For object: After finishing the block the object will be destroyed.
#include<iostream>
using namespace std;
int global;///This variable is global & it can work in all the  places of the program after its declaration. It will destroy when the program will be finished.
int add(int a,int b)///Here two variable is declared.
{
    int sum;///Here another variable is declared.
    sum = a+b;
    return sum;
}
///Remember: We cannot access the local variable of block & function from the outside of the block & function.
///Remember: The name of two variables can not be same. And here a,b & sum are local of add function.
int main()
{///Starting brace
    int a,b;
    a = 5,b = 6;
    cout<<add(a,b)<<endl;
    {
        int k = 5;
        cout<<k<<endl;
    }///After finishing this block 'k' is destroyed.
    float k = 5.6;///So there a new 'k' can be declared.
    cout<<k<<endl;

    for(int i=1; i<=5; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<global<<endl;
    return 0;
}///Ending brace
