//Program: You need to Find Sum of Complete Array.
//Sub-Problem: Calculate Sum of N-1 Array(remaining Array).
//Base Condition: Sum of Array with size 0 is Known.
//Recurrence Relation: F(array,n) = array[0] + F(array+1,n-1).

#include<iostream>
using namespace std;

int sumArray(int *array, int sum, int size)
{
    if(size == 0)
    {
        return sum;
    }
    // sum = sum + array[0];
    // return(sumArray(array+1,sum,size-1));
    return(sumArray(array+1,sum,size-1) + array[0]);        //Logic: Sum of Remaining Array + 1st Element
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9}, size = 10;

    cout << "Sum of Array Elements: " << sumArray(arr, 0, size);
    return 0;
}