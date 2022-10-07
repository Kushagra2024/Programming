//Progrma to Check whether a given number is a power of 2 or not

#include<iostream>
using namespace std;

bool isPowerOfTwo(int n);

int main()
{
    bool value = isPowerOfTwo(1073741825);
    cout << value << endl;
    return 0;
}

bool isPowerOfTwo(int n) 
{
    int pow = 1;
    int count = 0;
        while(pow<n)
        {
            if(pow == INT_MIN)
            {
                return false;
            }
            cout << pow << ' ' << count << endl;
            count++;
            pow = pow<<1;
        }
    cout << pow << ' ' << count << endl;
    if(pow == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Not a good Approach
bool isPowerofTwo(int n)
{
    int count = 0;
    while(n != 0)
    {
        if(n & 1)
        {
            count++;
            n = n >>1;
        }
    }
    if( count == 1 &&  n > 0)
    {
        return true;
    }
    return false;
}