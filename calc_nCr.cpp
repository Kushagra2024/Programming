#include<iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return (n * fact(n-1));
}

int nCr(int n, int r)
{
    int den, num;
    num = fact(n);
    den = fact(r) * fact(n-r);
    return(num/den);
}

int main()
{
    int n, r;
    cout << "Enter n & r: ";
    cin >> n >> r;
    cout << "nCr of given number is: " << nCr(n,r);
    return 0;
}