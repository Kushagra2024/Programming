#include<iostream>
using namespace std;

int max(int arr[],int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // Maximum can be found using max function
        // maxi = max(maxi,arr[i])

        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

int min(int arr[],int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // Minimum can be found using min function
        //mini = min(mini,arr[i])

        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}

int main()
{
    int arr[] = {12,8,5,4,10};
    int size = 5;
    cout << "Maximum Element in the Array : " << max(arr, size) << endl;
    cout << "Minimum Element in the Array : " << min(arr, size) << endl;
    return 0;
}