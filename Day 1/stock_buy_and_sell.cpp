//day 1 problem 6

#include<iostream>
#include<vector>
using namespace std;    

    
int maxProfit(vector<int>& prices)
{
    int min = prices[0];
    int profit = 0;
    for(int i =1;i<prices.size();i++)
    {
        if(prices[i] < min)
        {
            min = prices[i];
        }
        profit = max(profit, prices[i] - min);

    }
    return profit;
}

//driver code

int main()
{
    vector<int>vec = {7,1,5,3,6,4};
    cout << maxProfit(vec);

}