#include<iostream>
#include<math.h>
using namespace std;

/**********************************************DECIMAL TO BINARY CONVERSION*********************************************/
int dec_to_bin(int dec_num)
{
    int bin_num = 0, i = 0;
    // if (dec_num >= 0)
    {
        while (dec_num)
        {
            int bit = dec_num & 1;
            bin_num = bin_num + bit * pow(10,i);        //for printing number in reverse of remainder. Eg- remainder:1,1,0,0,1 and required answer is 10011
            dec_num = dec_num >> 1;
            i++;
        }
        return bin_num;
    }
    // else
    // {
    //     dec_num = ~(dec_num-1);
    //     // cout << dec_num << endl;
    //     while (dec_num)
    //     {
    //         int bit = (dec_num & 1);
    //         cout << bit << endl;
    //         bin_num = bin_num + bit * pow(10,i);
    //         dec_num = dec_num >> 1;
    //         i++;
    //     }
    //     bin_num = ;
        
    //     return bin_num;
    // }
}

/**********************************************BINARY TO DECIMAL CONVERSION*********************************************/
int bin_to_dec(int bin_num)
{
    int dec_num = 0, i = 0;

    while (bin_num)
    {
        int digit = bin_num % 10;
        dec_num = dec_num + digit * pow(2,i);
        bin_num = bin_num / 10;
        i++;
    }
    return dec_num;
}

/******************************************BINARY(Inside String) TO DECIMAL CONVERSION**************************************/
int binary_to_decimal(string str)
{
    int dec_num = 0, size,i = 0;
    size = str.length();
    for(int j = size-1; j >= 0; j--)
    {
        dec_num = dec_num + (str[j]-48)*pow(2,i);
        i++;
    }
    return dec_num;
}

int main()
{
    int num, ch;
    string str;
    while (1)
    {
        cout << "\n1. For Binary to Decimal\n2. For Binary to Decimal(using string)\n3. For Decimal to Binary \n4. For exit\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1: 
            cout << "Enter Binary Number: " ;
            cin >> num;
            cout << "Decimal Equivalent of " << num << " is: " << bin_to_dec(num) << endl;
                break;
            case 2: 
            cout << "Enter Binary Number(in the form of string): " ;
            cin >> str;
            cout << "Decimal Equivalent of " << str << " is: " << binary_to_decimal(str) << endl;
                break;
            case 3: 
            cout << "Enter Decimal Number: " ;
            cin >> num;
            cout << "Binary Equivalent of " << num << " is: " << dec_to_bin(num) << endl;
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid Input\n";
                break;
        }
    }
    

    return 0;
}