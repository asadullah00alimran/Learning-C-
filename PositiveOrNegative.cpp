#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter an integer number which you are want to check : ";
    cin>>n;

    if(n <= 0)
    {
        cout<<"\nThe number is Negative\n";
    }
    else if(n >= 0)
    {
        cout<<"\nThe number is Positive\n";
    }
    else if(n == 0)
    {
        cout<<"\nNumber is Zero\n";
    }


    return 0;
}
