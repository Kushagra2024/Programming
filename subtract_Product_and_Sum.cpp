#include <iostream>
using namespace std;

int subtract_Product_and_Sum(int n);

int main()
{
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;
    cout << "Entered Number is: " << n << endl;
    subtract_Product_and_Sum(n);
    return 0;
}

int subtract_Product_and_Sum(int n)
{
    int sum = 0, product = 1;
    while (n != 0)
    {
        sum += n%10;
        product *= n%10;
        n /= 10;
    }
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    return 0;
}