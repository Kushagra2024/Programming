#include<iostream>
using namespace std;

int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return(fib(n-1)+fib(n-2));
}

int main()
{
    int num;
    cout << "Enter term number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << fib(i) << ' ';
    }
    
    return 0;
}