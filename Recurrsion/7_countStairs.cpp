// Problem Statement: You are given N number of stairs and are required to find total number of distinct ways to reach from 0th stair to Nth stair. 
// Constraint: At a time, you can only climb 1,2,3 stairs.

//Problem: You are at 0th Stair, and need to climb Nth Stair

//Sub-Problem: Either you are at (N-1)th stair or at (N-2)th stair or at (N-3)th stair, you need to climb nth stair.

//Base Condition: 
//                  M-1-> You are at Nth stair and need to climb Nth stair, no of distinct ways = 1
//                                at Nth stair and need to climb (N+1)th stair, no of distinct ways = 0,

//                  M-2-> You are at 0th stair and need to climb 1st stair, no of distinct ways = 1, 
//                                at 0th stair and need to climb 2nd stair, no of distinct ways = 2,
//                                at 0th stair and need to climb 3nd stair, no of distinct ways = 4,

//                  M-3-> You are at 0th stair and need to climb 0th stair, no of distinct ways = 1
//                                at 0th stair and need to climb (0-1) stair, no of distinct ways = 0,

//Recurrence Relation: 
//                      M-1-> F(n) = F(n+1) + F(n+2) + F(n+3),
//                      M-2,3-> F(n) = F(n-1) + F(n-2) + F(n-3)

#include<iostream>
using namespace std;

//Method-1
int countStairs(int src_stair, int dest_stair)
{
    if (src_stair == dest_stair)
    {
        return 1;
    }
    if(src_stair > dest_stair)
    {
        return 0;
    }
    return(countStairs(src_stair+1, dest_stair)+countStairs(src_stair+2, dest_stair)+countStairs(src_stair+3, dest_stair));
}

//Method-2
int countStairs_(int stair)
{
    if (stair == 1)
    {
       return 1;
    }
    if (stair == 2)
    {
        return 2;
    }
    if (stair == 3)
    {
        return 4;
    }
    return(countStairs_(stair-1) + countStairs_(stair-2) + countStairs_(stair-3));
}

//Method-3
int countStairs__(int stair)
{
    if(stair == 0)
    {
        return 1;
    }
    if (stair < 0)
    {
        return 0;
    }
    return(countStairs__(stair-1) + countStairs__(stair-2) + countStairs__(stair-3));
}

int main()
{
    int num;

    cout << "Enter Nth Stairs: ";
    cin >> num;

    cout << "Method 1: " << endl << countStairs(0, num) << endl;
    cout << "Method 2: " << endl << countStairs_(num) << endl;
    cout << "Method 3: " << endl << countStairs__(num);

    return 0;
}