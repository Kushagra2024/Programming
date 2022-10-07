#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

void find_frequency(int arr[], int number)
{
    sort(arr, arr + number);
    cout << " Sorted Array is: ";
    for(int i = 0; i < number; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int i = 0, num = 0, count = 0;

    while (num < 10)
    {
        if(i >= number)
        {
            cout << count << " ";
            num++;
            i++;
            count = 0;
            continue;
        }
        if(arr[i] == num)
        {
            count++;
            i++;
            continue;
        }
        cout << count << " ";
        count = 0;
        if (arr[i] == num+1)
        {
            num++;
            continue;
        }
        num++;
    }
}
int main()
{
    int arr1[] = {1,1,4,7,2,0,6};
    find_frequency(arr1, 7);
    int arr2[] = {4,8,8,1,2,1};
    find_frequency(arr2, 6);
    return 0;
}