//Program: Implement Binary Search using Recurrsion

#include<iostream>
using namespace std;

void printArray(int array[], int size)
{
    cout << "Elements in Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int binarySearch(int *array, int key, int start, int end)
{
    int mid = (start + end)/2;
    if (start > end)
    {
        return -1;
    }
    if (array[mid] == key)
    {
        return mid;
    }
    else if(array[mid] < key)
    {
        return(binarySearch(array,key, mid+1,end));
    }
    else    
    {
        return(binarySearch(array,key, start,mid-1));
    }
}


int main()
{

    int array[] = {1,2,3,4,5,6,7,8,9,10}, size = 10, key;

    printArray(array, size);
    
    cout << "\nEnter Key: ";
    cin >> key;

    int index = binarySearch(array,key,0,size-1);
    if (index != -1)
    {
        cout << "\nElement found at index: " << index;
    }
    else
    {
        cout << "\nElement Not found!";
    }
    
    return 0;
}