#include<iostream>
using namespace std;

int maxProfit(int prices[], int size) 
{
    int max = 0, profit = 0;
    for(int i = size-1; i >= 0; i-- )
    {
        if(max < prices[i])
        {
            max = prices[i];
        }
        if(profit < max- prices[i])
        {
            profit = max - prices[i];
        }
    }
    return profit;
}

int maxProfit(int prices[], int size) 
{
        int buy = prices[0], k = 0, sell, profit;
        for(int i = 0; i < size; i++ )
        {
            if(buy > prices[i])
            {
                buy = prices[i];
                k = i;
            }
        }
        sell = buy;
        for(int j = k ; j < size; j ++ )
        {
            if(sell < prices[j])
            {
                sell = prices[j];
            }
        }
        profit = sell - buy;
        return profit;
}


int main()
{

}