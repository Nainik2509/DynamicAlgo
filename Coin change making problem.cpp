#include<iostream>
using namespace std;
//coin change making problem
int CoinChange(int coin[],int amount,int n)
{
    int dp[n+1][amount+1];
    int i,j;
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=amount;j++)
        {
            if(i==0 && j!=0)
                dp[i][j]=0;
                
            else if(j==0)
                dp[i][j]=1;
                
            else if(coin[i-1]>j)
                dp[i][j]=dp[i-1][j];
            
            else
                dp[i][j]=dp[i][j-coin[i-1]]+dp[i-1][j];
        }
        
    }
    return dp[n][amount];
}
int main()
{
    int coin[]={1,2,3};
    int amount=4;
    cout<<CoinChange(coin,amount,3)<<endl;
}
