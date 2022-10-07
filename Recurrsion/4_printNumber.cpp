#include<iostream>
using namespace std;


//This Function prints Number in Decreasing Order. Eg -> Input: 5, Output: 5,4,3,2,1,0
//It is a Tail Recursive Function i.e Function call is at the end of the body.
//Tail Recursive function is used for normal execution(Printing) of Program.
void printNumber(int num)
{
    if(num == 0)
    {
        cout << "0";
        return;
    }
    cout << num << endl;
    (printNumber(num-1));   // Function call & End of the Body
}

//This Function Prints Number is Increasing Order. Eg-> Input: 5, Output: 0,1,2,3,4,5
//Tihs is a Head Recursive Function i.e Function call is not at the end of the body.
//Head Recursive Function is used for Reverse Execution(Printing) of a Program.
void printNumberReverse(int num)
{
    if(num == 0)
    {
        cout << "0\n";
        return;
    }
    (printNumberReverse(num-1));    // Function call
    cout << num << endl;            // End of the Body
}

int main()
{
    int num;

    cout << "Enter Number: ";
    cin >> num;
    cout << "Decreasing: \n";
    printNumber(num);
    cout << "\nIncreasing: \n";
    printNumberReverse(num);
    return 0;
}