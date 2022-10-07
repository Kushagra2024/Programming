#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout << "Element in the Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int size)
{
    for (int i = 0; i < size/2; i++)
    {
        // int temp = arr[i];
        // arr[i] = arr[size-1-i];
        // arr[size-1-i] = temp;

        // By Using Swap Function
        swap(arr[i],arr[size-1-i]);
    }
}

int main()
{
    int arr[] = {1,2,4,5,2,7,9,10,6,8}, size = 10; 

    printarray(arr, size);
    reverse(arr, size);
    printarray(arr, size);
    
    return 0;
}