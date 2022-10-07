#include<iostream>
using namespace std;

int fib(int num)
{
    if(num == 0 || num == 1)
    {
        return num;
    }
    return(fib(num -1) + fib(num -2));
}

int main()
{
    int num;

    cout << "Enter Index number: ";
    cin >> num;

    cout << fib(num);
    return 0;
}