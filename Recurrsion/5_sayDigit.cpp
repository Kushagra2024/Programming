//Problem Statement: You are given a number,say 123 and you need to print 'one two three'.


#include<iostream>
using namespace std;

//This Function Prints in Same Order
void sayDigit(int num,string number[])
{
    if (num == 0)
    {
        return;
    }
    sayDigit((num/10),number);
    cout << number[(num%10)] << " ";
}

//This Function Prints in Reverse Order
void sayDigitReverse(int num,string number[])
{
    if (num == 0)
    {
        return;
    }
    cout << number[(num%10)] << " ";
    sayDigitReverse((num/10),number);
}

int main()
{
    int num;
    string number_array[] = {"zero","one","two","three","four","five","six","seven","eigth","nine"};    //This Array acts as a Dictionary which stores in Key(Index Position)-Value(Digit Name) Format.

    cout << "Enter number: ";
    cin >> num;

    sayDigit(num, number_array);
    cout << endl;
    sayDigitReverse(num, number_array);
    return 0;
}