#include<iostream>
using namespace std;

int main()
{
    int a = 512;
    int b = 12;
    int c;

    c = a & b;
    cout<<c<<endl;

    c = a | b;
    cout<<c<<endl;

    c = a ^ b;
    cout<<c<<endl;

    c = a << 2;
    cout<<c<<endl;

    c = a >> 3;
    cout<<c<<endl;

    return 0;
}
