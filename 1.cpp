#include <iostream>
#include <vector>
using namespace std;

int feb(int n, vector<int> &array)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (array[n] != -1)
    {
        cout << array[n] << endl;
        return array[n];
    }
    array[n] = feb(n - 2, array) + feb(n - 1, array);
    return array[n];
}

int main()
{
    int num;

    cout << "Enter number\n";
    cin >> num;
    vector<int> fib_array(num + 1);

    for (int i = 0; i <= num; i++)
    {
        fib_array[i] = -1;
    }

    cout << feb(num, fib_array);

    return 0;
}