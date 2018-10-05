#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter number to find factorial";
    cin>>number;
    int factorial = 1;
    if(number<0)
    {
        cout<<"Invalid number";
    }
    else
    {
        for(int i = 0;i<number;i++)
        {
            factorial = factorial * i;
        }
            cout<<factorial;

    }
    return 0;
}
