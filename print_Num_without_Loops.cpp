// Print numbers from 1 to N without the help of loops( By using Loops)
#include<iostream>
using namespace std;

void printNos(int N)
{
    if(N == 0)
    {
        return;
    }
    printNos(N-1);
    cout << N << " ";
}

int main()
{   
    int num;
    cout << "Enter number: ";
    cin >> num;
    printNos(num);
    return 0;
}