#include<iostream>
using namespace std;

bool linear_search(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(key == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {5,7,-2,10,22,-2,0,22,5}, key;
    cout << "Enter element you want to search: ";
    cin >> key;
    bool found = linear_search(arr,9,key);
    if(found)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}