#include<iostream>
using namespace std;
//stock buy sell problem
int MaxStockPrice(int price[],int n)
{
    //price - prices of a single stock on different days
    int min_dp[n];
    int profit[n];
    int i;
    int maxProfit=-1;
    //Form the minimum price array
    min_dp[0]=0;
    for(i=0;i<n;i++)
    {
        min_dp[i]=min(price[i],min_dp[i-1]);
    }
    
    // Maximum Profit
    for(i=0;i<n;i++)
    {
        profit[i]=price[i]-min_dp[i];
        if(maxProfit<profit[i])
        {
            maxProfit=profit[i];
        }
        
    }
    return maxProfit;
}
int main()
{
    
    int Price[]={2,6,1,3,5};
    int n=5;
    cout<<MaxStockPrice(Price,n)<<endl;

}