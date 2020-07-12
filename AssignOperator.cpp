#include<iostream>
using namespace std;

int main()
{
    int x,y;

    cout<<"Enter a value of X : ";
    cin>>x;

    cout<<"Enter a value of Y :";
    cin>>y;

    x += y;// x = x + y;
    cout<<endl<<"Doing after X += Y";
    cout<<endl<<"Present value of X is : "<<x<<endl;

    x -= y;// x = x - y;
    cout<<endl<<"Doing after X -= Y";
    cout<<endl<<"Present value of X is : "<<x<<endl;

    x *= y;// x = x * y;
    cout<<endl<<"Doing after X *= Y";
    cout<<endl<<"Present value of X is : "<<x<<endl;

    x /= y;// x = x / y;
    cout<<endl<<"Doing after X /= Y";
    cout<<endl<<"Present value of X is : "<<x<<endl;

    x %= y;// x = x % y;
    cout<<endl<<"Doing after X %= Y";
    cout<<endl<<"Present value of X is : "<<x<<endl;

    return 0;

}
