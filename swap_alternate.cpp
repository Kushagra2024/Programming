#include<iostream>
using namespace std;

void print_array(int arr[], int size)
{
    cout << "Elements in the Array: ";
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap_alternate(int arr[], int size)
{
    int start = 0 , end = size-1;
    while(start < end)
    {
        swap(arr[start],arr[start+1]);
        start+=2;
    }
}


int main()
{
    int arr_a[] = {1,2,3,4,5,6};
    int arr_b[] = {1,2,3,4,5};

    print_array(arr_a, 6);
    swap_alternate(arr_a, 6);
    print_array(arr_a, 6);

    print_array(arr_b, 5);
    swap_alternate(arr_b, 5);
    print_array(arr_b, 5);
    return 0;
}