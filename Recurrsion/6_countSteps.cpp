// Problem Statement: You are given Source & Destination. You`ve to Print all the Steps to reach to destination from Source. 
// Constraint: At a time, you can only take 1step.

//Problem: You are at 'src' , and need to reach 'dest'.

//Sub-Problem:  You are at (dest-1)th step, you need to reach nth step.

//Base Condition: 
//                  You are at dest and need to reach dest , return

//Recurrence Relation: 
//                      F(n) = F(n+1)

#include<iostream>
using namespace std;

void countSteps(int src, int dest)
{
    if(src == dest)
    {
        return;
    }
    cout << "Source: " << src << " Destination: " << dest << endl;
    countSteps(src+1,dest);
}


int main()
{
    int src, dest;
    
    cout << "Enter Source: ";
    cin >> src;

    cout << "Enter Destination: ";
    cin >> dest;

    countSteps(src,dest);
    return 0;
}