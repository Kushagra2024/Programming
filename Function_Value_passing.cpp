#include<iostream>
using namespace std;

void func1(int, int);       //pass by value
void func2(int *, int *);   //pass by pointer
void func3(int &, int &);   //pass by reference

int main()
{
    int a = 5, b = 20;
    cout << "Ouside Function\n" << "a = " << a << "\n" <<"b = " << b << endl;
    func1(a,b);
    cout << "Ouside Function\n" << "a = " << a << "\n" <<"b = " << b << endl;
    func2(&a,&b);
    cout << "Ouside Function\n" << "a = " << a << "\n" <<"b = " << b << endl;
    func3(a,b);
    cout << "Ouside Function\n" << "a = " << a << "\n" <<"b = " << b << endl;
    return 0;
}

void func1(int a, int b)
{
    cout << "Pass By Value\n";
    cout << "Inside Function\n" << "a = " << a << "\n" <<"b = " << b << endl;
    a++;
    b++;
    cout << "Inside Function\n" << "a = " << a << "\n" <<"b = " << b << endl;
}
void func2(int *a, int *b)
{
    cout << "Pass By Pointer\n";
    cout << "Inside Function\n" << "a = " << *a << "\n" <<"b = " << *b << endl;
    (*a)++;
    (*b)++;
    cout << "Inside Function\n" << "a = " << *a << "\n" <<"b = " << *b << endl;
}
void func3(int &a, int &b)
{
    cout << "Pass By Reference\n";
    cout << "Inside Function\n" << "a = " << a << "\n" <<"b = " << b << endl;
    a++;
    b++;
    cout << "Inside Function\n" << "a = " << a << "\n" <<"b = " << b << endl;
}