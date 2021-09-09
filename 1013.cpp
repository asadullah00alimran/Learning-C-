#include<iostream>
using namespace std;
int main()
{
    int a,b,s,MaiorAB;

    cin>>a;
    cin>>b;
    cin>>s;

    MaiorAB = (a+b+(a*b*s)*(a-b))/2;

    cout<< MaiorAB;
    cout<<" eh o maior\n";

    return 0;

}
