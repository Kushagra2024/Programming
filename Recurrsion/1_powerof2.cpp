#include<iostream>
using namespace std;

//Function To Calcute the Power Of Two
int powerOfTwo(int num)
{
    //Base Condition
    if(num == 1)
    {
        return 2;
    }
    //Recurrence Relation
    return(2*(powerOfTwo(num-1)));
}

int main()
{
    int num;
    cout << "Enter Power: ";
    cin >> num;
    cout << powerOfTwo(num);

    return 0;
}