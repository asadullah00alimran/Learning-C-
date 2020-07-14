#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter obtain number : ";
    cin>>n;

    if(n<=100)
    {
        if(n >= 80)
        {
            cout<<"\nA+\n";
        }

        else if(n >= 75)
        {
            cout<<"\nA-\n";
        }

        else if(n >= 70)
        {
            cout<<"\nB+\n";

        }

        else if(n >= 60)
        {
            cout<<"\nB\n";

        }

        else if(n >= 60)
        {
            cout<<"\nB-\n";

        }

        else if(n >= 55)
        {
            cout<<"\nC+\n";

        }

        else if(n >= 50)
        {
            cout<<"\nC\n";

        }

        else if(n >= 45)
        {
            cout<<"\nC-\n";

        }

        else if(n >= 40)
        {
            cout<<"\nD\n";

        }

        else
        {
            cout<<"Fail";
        }
    }
    else
    {
        cout<<"\nInvalid Number"<<endl;
    }


    return 0;
}

