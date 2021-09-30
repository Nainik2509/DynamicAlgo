#include<iostream>
using namespace std;
void KnapSack(int n,int W,int wt[],int profit[])
{
    int dp[n+1][W+1];   //creating dp table 
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=W;j++)
        {
            if(i==0 || j==0) //first row and first column
                dp[i][j]=0;
            else if(wt[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j-wt[i-1]]+profit[i-1],dp[i-1][j]);
            
        }
    }
    printf("Answer: %d",dp[n][W]);
}
int main()
{
    int wt[4]={1,2,3,4}; //kgs 
    int profit[4]={10,20,30,40}; //rupees
    int W=4;//KnapSack 4 kg
    int n=4;
    KnapSack(n,W,wt,profit);
}
