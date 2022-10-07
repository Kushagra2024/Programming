#include<iostream>
using namespace std;

int countonebits(int num)
{
    int count = 0;
    while(num != 0)
    {
        if(num & 1)
        {
            count++;
        }
        num = num >> 1;
    }
    return count;
}

int main()
{
    cout << "number of One bits are : " << countonebits(5) << endl;
    cout << "number of One bits are : " << countonebits(7)  << endl;
    return 0;
}