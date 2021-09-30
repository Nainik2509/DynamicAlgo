#include<iostream>
using namespace std;
//grid walking
int grid(int m,int n)
{
    int dp[m][n];
    int i,j;
    
    //initialise the base cases
    
    for(i=0;i<m;i++)
    {
       dp[i][n-1]=1;
    }
    for(j=0;j<n;j++)
    {
        dp[m-1][j]=1;
    }
    
    //filling the dp matrix
    for(i=m-2;i>=0;i--)
    {
        for(j=n-2;j>=0;j--)
        {
            dp[i][j]=dp[i][j+1]+dp[i+1][j];
        }
    }
    
    return dp[0][0];
    
}
int main()
{
    cout<<grid(3,3)<<endl;
}