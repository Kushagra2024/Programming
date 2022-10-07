#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int k_max(int arr[], int size, int k)
{
    sort(arr,arr + size);
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return size-k;
}

int main()
{
    int arr[] = {1,3,2,6,4,7,9};

    cout << k_max(arr, 7, 4);
    return 0;
}