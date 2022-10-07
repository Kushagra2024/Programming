#include<iostream>
using namespace std;

int main()
{
    int num, counter = 0;
    cout << "Enter number: ";
    cin >> num;
    
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            cout << "Number is not Prime ";
            counter++;
            break;
        }
    }
    if(counter == 0)
    {
        cout << "Number is Prime";
    }

    return 0;
}