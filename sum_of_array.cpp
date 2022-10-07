#include<iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;
    if (size == 0)
    {
        return sum;
    }
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10}, size = 10;
    cout << "Sum of elements of Array is : " << sumArray(arr, size);
    return 0;
}