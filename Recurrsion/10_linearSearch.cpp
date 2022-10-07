//Program to Implement Linear Search
#include<iostream>
using namespace std;

bool linearSearch(int array[], int size, int key)
{
    if(size == 0)
    {
        return false;
    }
    if(array[0] == key)
    {
        return true;
    }
    return(linearSearch(array+1,size-1,key));
}

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10}, key, size = 10;
    cout << "Enter Key Element: ";
    cin >> key;
    cout << linearSearch(array, size, key);
    return 0;
}