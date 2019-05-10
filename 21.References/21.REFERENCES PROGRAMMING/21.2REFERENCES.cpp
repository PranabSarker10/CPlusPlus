///References:It works like as pointer. But (->) sign is not used. (.) sign is used.
#include<iostream>
#include<cstdio>
using namespace std;

int fun (int &a)
{
    return a;
}

int main()
{
    int a;
    a = 5;

    int *p = &a;///Here &a is declared at start. For understand look at the (int a) of fun.

    int& r = a;///In reference, we cannot send value. We have to send variable(As references take address).

    int b = 5;
///Remember: In function, Intialization is completed directly in declare time.
    fun(a);
///Remember: We have to initialize at declare time in reference and we have to send variable(something which has address) in function(not value).
    printf("Attention! here no output will be shown\n");
    return 0;
}
