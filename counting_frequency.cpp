#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

void counting_frequency(int arr[], int size)
{
    sort(arr, arr + size);
    int count = 0, i = 0, num = arr[0];

    while (i < size)
    {
        if(arr[i] == num)
        {
            count++;
            i++;
            continue;
        }
        cout << num << " " << count << endl;
        count = 0;
        num = arr[i];
    }
    cout << num << " " << count << endl;
}

int main()
{
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    counting_frequency(arr, 8);
    return 0;
}