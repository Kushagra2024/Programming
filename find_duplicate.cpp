#include<iostream>
using namespace std;

int find_duplicate(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (sum - (size*(size-1)/2));
}

int main()
{
    // int arr[3] = {1,1,2}, size = 3;
    // cout << find_duplicate(arr, size);

    // int arr[5] = {1,3,4,2,2}, size = 5;
    // cout << find_duplicate(arr, size);

    int arr[5] = {4,2,1,3,1}, size = 5;
    cout << find_duplicate(arr, size);

    return 0;
}