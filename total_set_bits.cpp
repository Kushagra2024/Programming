#include<iostream>
using namespace std;

int count_set_bits(int num1,int num2)
{
    int count = 0;
    while(num1 != 0)
    {
        if (num1 & 1 == 1)
        {
            count++;
        }
        num1 = num1 >> 1;
    }
    while (num2 != 0)
    {
        if (num2 & 1 == 1)
        {
            count++;
        }
        num2 = num2 >> 1;
    }
    return count;
}

int main()
{
    int num1, num2;
    cout << "Enter Number 1 and Number 2: " << endl;
    cin >> num1 >> num2;
    cout << "Total number of Set bits are: " << count_set_bits(num1, num2) << endl;
    return 0;
}