#include <iostream>

using namespace std;

int main()
{
    int number;
    int flag;
    cout<<"Enter number";
    cin>>number;
    for(int i = 2;i<number;i++)
    {
        if(number % i==0)
        {
            flag =1;
            break;
        }

        else
        {
            flag = 0;

        }

    }
    if(flag==1)
    {
        cout<<"It is not a prime number\n";

    }
    else{
        cout<<"It is a prime number\n";
    }

}
