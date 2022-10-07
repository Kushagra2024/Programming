#include<iostream>
using namespace std;

int fact(int num)
{
    // Base Condition
    if(num == 0)
    {
        return 1;
    }
    //Recurrence Relation
    return(num*(fact(num-1)));
}

int main()
{
    int num;

    cout << "Enter Number: ";
    cin >> num;

    cout << fact(num);
    return 0;
}