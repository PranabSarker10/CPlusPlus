///Variable scope
///Block means a specific area. Here the area between starting and ending brace is block(Main function's block).
///A variable starts to be active from where it is declared. And it will active until the block is finished.
///We can take block anywhere in the program.
#include<iostream>
using namespace std;
int main()
{///Starting brace
    int a = 5;///Rememeber: One variable is limited in its block.
    cout<<a<<endl;
    {///Starting brace
        int b = 6;
        cout<<b<<endl;
    }///Ending brace
    cout<<b<<endl;///Here 'b' is not active. The scope is where 'b' is active.
///Run the program and show the error.
///The error: 'b' was not declared in that scope.
    return 0;
}///Ending brace
