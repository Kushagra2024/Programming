#include<iostream>
#include<math.h>
using namespace std;

// // //Method-1
// // void countStairs(int src_stair, int dest_stair, int count)
// // {
// //     if (src_stair == dest_stair)
// //     {
// //         return;
// //     }
// //     cout << "Source Step: " << src_stair << " , " << "Destination Step: " << dest_stair << endl;
// //     countStairs(dest_stair ,src_stair+1 , count);
// // }

// int nPower(int base, int power)
// {
//     if(power == 1)
//     {
//         return base;
//     }
//     return(base * nPower(base,power-1));
// }


// int main()
// {
//     int base, power;

//     // cout << "Enter Nth Stairs: ";
//     // cin >> num;

//     // cout << "Method 1: " << endl;
//     // countStairs(0,num,1);
//     // countStairs(0,num,2);

//     cout << "Enter Base: ";
//     cin >> base;
//     cout << "Enter Power: ";
//     cin >> power;

//     cout << nPower(base, power);

//     return 0;
// }

int chocoIndex(int choco_arr[], int N)
{
    int i = 0;
    int j = N-1;
    for(i; i<j;)
    {
        if(choco_arr[i] > choco_arr[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return choco_arr[i];
}

int main()
{
    int sweetness[250],N;
    
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> sweetness[i];
    }

    cout << chocoIndex(sweetness, N);

    return 0;
}