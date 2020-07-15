#include<iostream>
using namespace std;

int main()
{
    //sizeof() operator
    int a;
    float b;
    double c;
    char ch;
    long d;
    long long int e;
    char f[40];

    cout<<"Size of int is "<< sizeof(a)<<" byte"<<endl;
    cout<<"Size of float is "<<sizeof(b)<<" byte"<<endl;
    cout<<"Size of double is "<<sizeof(c)<<" byte"<<endl;
    cout<<"Size of char is "<<sizeof(ch)<<" byte"<<endl;
    cout<<"Size of long is "<<sizeof(e)<<" byte"<<endl;
    cout<<"Size of long long int "<<sizeof(f)<<" byte"<<endl;
    cout<<"Size of char [40] is "<< sizeof(f)<<" byte"<<endl;

    //comma operator(,)
    int sum,x,y;

    sum = (x=20,y=30,sum = x+y);

    cout<<"\n\nSum = "<<sum<<endl;

    return 0;
}
