#include<iostream>
using namespace std;

int pairSum(int arr[], int size, int s)
{
    for (int i = 0, j; i < size; i++)
    {
        int sum = 0;
        for (j = i; j < i+2; j++)
        {
            sum = sum + arr[j];
        }
        if (sum == s)
        {
            cout << "required Index are : " << arr[i] << " " << arr[j-1];
        }
    } 
    return 0;
}


int main()
{
    int arr[] = {2, -3,3,3,}, size = 5, s = 5;
    pairSum(arr, size, s);
    return 0;
}