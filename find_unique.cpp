#include<iostream>
using namespace std;

// Brute Force 
// Time Complexity : O(n^2)
/*
int find_unique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j] && i != j)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            return arr[i];
        }
    }
    return -1;
}
*/

//Optimum Solution
// Time Complexity : O(n)
int find_unique(int arr[], int size)
{
    int ans = 0;
    for(int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[9] = {1,2,3,5,4,1,3,5,2};
    cout << find_unique(arr, 9);

    // int arr[11] = {5,3,1,5,1,3,4,7,4,8,8};
    // cout << find_unique(arr, 11);
    return 0;
}