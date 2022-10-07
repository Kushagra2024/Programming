//Program: Find whether given array is sorted or not?(using recurrsion)

#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    int i = size-1;
    if(size == 0 || size == 1)      //Array of size 0 or 1 is always Sorted
    {
        return true;
    }
    if(arr[i] >= arr[i-1])
    {
        return(isSorted(arr, size-1));
    }
    else
    {
        return false;
    }
}
bool isSorted_(int arr[], int size)
{
    if(size == 0 || size == 1)      //Array of size 0 or 1 is always Sorted
    {
        return true;
    }
    if(arr[1] >= arr[0])
    {
        return(isSorted(arr+1, size-1));        //Virtually reducing array from front
    }
    else
    {
        return false;
    }
}


int main()
{
    int arr1[] = {1,2,3,4,5,6,7,8,9,10}, arr2[] = {1,4,2,5,7,9,12,34,21,10},size = 10;

    cout << isSorted(arr1, size) << endl;
    cout << isSorted_(arr2, size) << endl;

    return 0;
}