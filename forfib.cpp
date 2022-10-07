#include<iostream>
using namespace std;

int main()
{
    int num, a, b, fib;

    cout << "Enter Term number : " ;
    cin >> num;

    a = 0;
    b = 1;
    cout << a << " " << b << " ";
    for(int i = 0; i < num-2; i++)
    {
        fib = a+b;
        cout << fib << " ";
        a = b;
        b = fib;
    }
    return 0;
}